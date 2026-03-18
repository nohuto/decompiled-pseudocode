/*
 * XREFs of KiIncrementConcurrencyCount @ 0x14008E774
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     KeAlertThreadByThreadId @ 0x14008E070 (KeAlertThreadByThreadId.c)
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
