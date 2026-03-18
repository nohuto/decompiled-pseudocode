/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x1406671DC
 * Callers:
 *     NtDebugActiveProcess @ 0x1406685CC (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-58h] BYREF

  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v7 = v9;
  }
  *a3 = v7;
  return result;
}
