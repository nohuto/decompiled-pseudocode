/*
 * XREFs of KeRemoveQueueApc @ 0x1400AD8E4
 * Callers:
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x1400AD928 (KiRemoveQueueApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
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
