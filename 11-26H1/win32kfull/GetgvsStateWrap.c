/*
 * XREFs of GetgvsStateWrap @ 0x14025E260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgvsStateWrap(int a1, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 4760LL;
}
