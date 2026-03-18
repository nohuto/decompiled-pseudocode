/*
 * XREFs of NtQueryAttributesFile @ 0x140423010
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x140423220 (FsRtlpCleanupEcps.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // di
  _BYTE *v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v10[24]; // [rsp+50h] [rbp-238h] BYREF
  _BYTE v11[64]; // [rsp+110h] [rbp-178h] BYREF
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
    v5[39] = v5[39];
  }
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, 0x38uLL);
  LODWORD(v10[0]) = 12582920;
  HIWORD(v10[8]) = 7;
  LODWORD(v10[11]) = 1;
  LODWORD(v10[8]) = 2113536;
  v10[12] = FileInformation;
  v10[13] = v11;
  BYTE1(v10[16]) = 1;
  v10[17] = &v12;
  v10[6] = ObjectAttributes;
  LODWORD(v10[18]) = 32;
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
  if ( v10[20] && (unsigned __int8)FsRtlpCleanupEcps((PVOID)v10[20]) )
    v10[20] = 0LL;
  if ( LODWORD(v10[4]) == -1096154543 )
    return v10[2];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], PreviousMode);
    return -1073741788;
  }
  return v7;
}
