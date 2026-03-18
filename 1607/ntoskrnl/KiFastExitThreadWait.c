/*
 * XREFs of KiFastExitThreadWait @ 0x1400F2828
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140097D9C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400D0448 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1400E79D0 (KeRemovePriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
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
