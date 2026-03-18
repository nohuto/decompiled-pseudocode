/*
 * XREFs of NtDeleteFile @ 0x1405BE4C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     IopCleanupExtraCreateParameters @ 0x1405BE5D8 (IopCleanupExtraCreateParameters.c)
 */

NTSTATUS __stdcall NtDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v7[24]; // [rsp+58h] [rbp-B0h] BYREF
  char v8; // [rsp+118h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v7, 0, 0xB8uLL);
  LODWORD(v7[0]) = 12058632;
  HIWORD(v7[8]) = 7;
  LODWORD(v7[8]) = 4096;
  v7[17] = &v8;
  LODWORD(v7[11]) = 1;
  BYTE2(v7[16]) = 1;
  v7[6] = ObjectAttributes;
  LODWORD(v7[18]) = 32;
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v4 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000u,
         (__int64)v7,
         &v6);
  IopCleanupExtraCreateParameters(v7);
  result = v7[2];
  if ( LODWORD(v7[4]) != -1096154543 )
    return v4;
  return result;
}
