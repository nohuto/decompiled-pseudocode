/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x1405EEA74
 * Callers:
 *     NtDebugActiveProcess @ 0x1405EFBC8 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+40h] [rbp-58h] BYREF

  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess(&v10, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v7 = v9;
  }
  *a3 = v7;
  return result;
}
