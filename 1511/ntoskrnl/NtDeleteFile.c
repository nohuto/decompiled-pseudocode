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
  _LOOKASIDE_LIST_EX *v4; // rdx
  NTSTATUS v5; // ebx
  NTSTATUS result; // eax
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v8[24]; // [rsp+58h] [rbp-B0h] BYREF
  char v9; // [rsp+118h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[0]) = 12582920;
  HIWORD(v8[8]) = 7;
  LODWORD(v8[8]) = 4096;
  v8[17] = &v9;
  LODWORD(v8[11]) = 1;
  BYTE2(v8[16]) = 1;
  v8[6] = ObjectAttributes;
  LODWORD(v8[18]) = 32;
  memset(&v8[19], 0, 0x28uLL);
  LOWORD(v8[19]) = 40;
  v8[23] = 1LL;
  v8[23] = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v5 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (struct _OBJECT_TYPE *)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000u,
         v8,
         v8[23],
         &v7);
  if ( v8[23] )
    ObfDereferenceObject((PVOID)v8[23]);
  IopCleanupExtraCreateParameters((__int64)v8, v4);
  result = v8[2];
  if ( LODWORD(v8[4]) != -1096154543 )
    return v5;
  return result;
}
