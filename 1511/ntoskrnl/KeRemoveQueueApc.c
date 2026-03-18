/*
 * XREFs of KeRemoveQueueApc @ 0x1400ED8E4
 * Callers:
 *     ExpCancelTimer @ 0x140091194 (ExpCancelTimer.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140210B28 (EtwpTraceThreadRundownWithStack.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiRemoveQueueApc @ 0x1400ED928 (KiRemoveQueueApc.c)
 */

__int64 __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  KiAcquireThreadLockRaiseToDpc(v1, &v5);
  result = KiRemoveQueueApc(a1);
  v4 = v5;
  *(_QWORD *)(v1 + 64) = 0LL;
  __writecr8(v4);
  return result;
}
