/*
 * XREFs of KiFastExitThreadWait @ 0x14002ABE8
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x1400297D0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(_QWORD *)(a2 + 64) );
    }
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
