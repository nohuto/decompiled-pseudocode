/*
 * XREFs of KiIncrementConcurrencyCount @ 0x1400A2E90
 * Callers:
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIncrementConcurrencyCount(__int64 a1, __int64 a2)
{
  int v2; // eax

  LOBYTE(v2) = *(_BYTE *)a1 & 0x7F;
  if ( (_BYTE)v2 == 21 )
  {
    v2 = *(_DWORD *)(a2 + 540);
    *(_DWORD *)(a2 + 540) = (unsigned __int8)v2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4LL * (unsigned __int8)v2 + 536));
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  }
  return v2;
}
