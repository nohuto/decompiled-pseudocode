/*
 * XREFs of ExAllocateTimer @ 0x140132AA0
 * Callers:
 *     CreateTlgAggregateSession @ 0x1401497C0 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140564810 (WdipSemStartTimeoutCheck.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal();
}
