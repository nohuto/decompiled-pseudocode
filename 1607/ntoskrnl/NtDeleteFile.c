/*
 * XREFs of NtDeleteFile @ 0x14057D8D8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopCleanupExtraCreateParameters @ 0x140404A70 (IopCleanupExtraCreateParameters.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
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
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 12582920;
  HIWORD(v7[8]) = 7;
  LODWORD(v7[8]) = 4096;
  v7[17] = &v8;
  LODWORD(v7[11]) = 1;
  BYTE2(v7[16]) = 1;
  v7[6] = ObjectAttributes;
  LODWORD(v7[18]) = 32;
  memset(&v7[19], 0, 0x28uLL);
  LOWORD(v7[19]) = 40;
  v7[23] = 1LL;
  v7[23] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v4 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000u,
         (__int64)v7,
         v7[23],
         &v6);
  IopCleanupExtraCreateParameters((__int64)v7);
  result = v7[2];
  if ( LODWORD(v7[4]) != -1096154543 )
    return v4;
  return result;
}
