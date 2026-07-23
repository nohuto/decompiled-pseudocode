/*
 * XREFs of NtQueryFullAttributesFile @ 0x140404848
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopCleanupExtraCreateParameters @ 0x140404A70 (IopCleanupExtraCreateParameters.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v5; // rcx
  PFILE_NETWORK_OPEN_INFORMATION v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  NTSTATUS v9; // esi
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v12[24]; // [rsp+50h] [rbp-238h] BYREF
  _OWORD v13[4]; // [rsp+110h] [rbp-178h] BYREF
  char v14; // [rsp+150h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (__int64)FileInformation;
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0x38uLL);
  LODWORD(v12[0]) = 12582920;
  HIWORD(v12[8]) = 7;
  LODWORD(v12[11]) = 1;
  LODWORD(v12[8]) = 2113536;
  BYTE1(v12[16]) = 1;
  BYTE3(v12[16]) = 1;
  v12[17] = &v14;
  v12[6] = ObjectAttributes;
  LODWORD(v12[18]) = 32;
  v6 = (PFILE_NETWORK_OPEN_INFORMATION)v13;
  if ( !PreviousMode )
    v6 = FileInformation;
  v12[13] = v6;
  memset(&v12[19], 0, 0x28uLL);
  LOWORD(v12[19]) = 40;
  v12[23] = 1LL;
  v12[23] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  LOBYTE(v8) = PreviousMode;
  v9 = ObOpenObjectByNameEx(
         (_DWORD)ObjectAttributes,
         (_DWORD)IoFileObjectType,
         v8,
         0,
         128,
         (__int64)v12,
         v12[23],
         (__int64)Handle);
  IopCleanupExtraCreateParameters(v12);
  if ( LODWORD(v12[4]) == -1096154543 )
  {
    result = v12[2];
    if ( SLODWORD(v12[2]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v13[0];
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v13[1];
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v13[2];
        *(_QWORD *)&FileInformation->FileAttributes = *(_QWORD *)&v13[3];
      }
    }
  }
  else
  {
    if ( v9 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v9;
  }
  return result;
}
