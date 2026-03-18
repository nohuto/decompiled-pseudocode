/*
 * XREFs of NtQueryFullAttributesFile @ 0x14049DA10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x14049DC48 (IopCleanupExtraCreateParameters.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
  _BYTE *v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v10[24]; // [rsp+50h] [rbp-238h] BYREF
  _OWORD v11[4]; // [rsp+110h] [rbp-178h] BYREF
  char v12; // [rsp+150h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[55] = v5[55];
  }
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, 0x38uLL);
  LODWORD(v10[0]) = 12582920;
  HIWORD(v10[8]) = 7;
  LODWORD(v10[11]) = 1;
  LODWORD(v10[8]) = 2113536;
  BYTE1(v10[16]) = 1;
  BYTE3(v10[16]) = 1;
  v10[17] = &v12;
  v10[6] = ObjectAttributes;
  LODWORD(v10[18]) = 32;
  if ( PreviousMode )
    v10[13] = v11;
  else
    v10[13] = FileInformation;
  memset(&v10[19], 0, 0x28uLL);
  LOWORD(v10[19]) = 40;
  v10[23] = 1LL;
  v10[23] = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (struct _OBJECT_TYPE *)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         v10,
         v10[23],
         Handle);
  if ( v10[23] )
    ObfDereferenceObject((PVOID)v10[23]);
  IopCleanupExtraCreateParameters(v10);
  if ( LODWORD(v10[4]) == -1096154543 )
  {
    result = v10[2];
    if ( SLODWORD(v10[2]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v11[0];
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v11[1];
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v11[2];
        *(_QWORD *)&FileInformation->FileAttributes = *(_QWORD *)&v11[3];
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
