/*
 * XREFs of KiCheckForThreadDispatch @ 0x1400F2960
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KeGenericProcessorCallback @ 0x1400CA714 (KeGenericProcessorCallback.c)
 *     KiBeginThreadWait @ 0x1400D0980 (KiBeginThreadWait.c)
 *     KeRemovePriQueue @ 0x1400E79D0 (KeRemovePriQueue.c)
 *     KiFastReadyThread @ 0x1400F27A8 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1400F28A0 (KiExitThreadWait.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     KiUpdateThreadState @ 0x140091CEC (KiUpdateThreadState.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400D0C00 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D8230 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140165CD0 (KiSwapContext.c)
 */

void __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rbx
  _SINGLE_LIST_ENTRY *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 >= 2u )
  {
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11754) )
      KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0, a3, a4);
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v6);
      KiUpdateThreadState(a1, v8, 2, 0);
      *(_BYTE *)(v6 + 643) = 32;
      *(_BYTE *)(v6 + 390) = a2;
      KiQueueReadyThread(a1, v6, v9, v10);
      LOBYTE(v11) = a2;
      v7 = (unsigned __int8)KiSwapContext(v6, v8, v11) == 0;
    }
    else
    {
      v7 = (*(_DWORD *)(v6 + 116) & 0x40) == 0;
    }
    if ( !v7 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(v6 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    __writecr8(a2);
  }
}
