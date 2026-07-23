/*
 * XREFs of ExAllocateTimer @ 0x140133010
 * Callers:
 *     CreateTlgAggregateSession @ 0x140149D30 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140564D50 (WdipSemStartTimeoutCheck.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal();
}
