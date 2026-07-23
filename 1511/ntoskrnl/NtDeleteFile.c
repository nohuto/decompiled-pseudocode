/*
 * XREFs of NtDeleteFile @ 0x140546550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x14049DC48 (IopCleanupExtraCreateParameters.c)
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
  v7[23] = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v4 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (struct _OBJECT_TYPE *)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000u,
         v7,
         v7[23],
         &v6);
  if ( v7[23] )
    ObfDereferenceObject((PVOID)v7[23]);
  IopCleanupExtraCreateParameters((__int64)v7);
  result = v7[2];
  if ( LODWORD(v7[4]) != -1096154543 )
    return v4;
  return result;
}
