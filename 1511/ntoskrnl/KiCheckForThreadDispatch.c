/*
 * XREFs of KiCheckForThreadDispatch @ 0x14002AD14
 * Callers:
 *     KiBeginThreadWait @ 0x140029950 (KiBeginThreadWait.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiFastReadyThread @ 0x14002AB48 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x14002AC60 (KiExitThreadWait.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 */

void __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rsi
  bool v5; // zf
  _BYTE *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 >= 2u )
  {
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11754) )
      KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v6 = *(_BYTE **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v4);
      KiUpdateThreadState(a1, v6, 2, 0);
      *(_BYTE *)(v4 + 643) = 32;
      *(_BYTE *)(v4 + 390) = a2;
      KiQueueReadyThread((struct _KPRCB *)a1, v4, v7);
      LOBYTE(v8) = a2;
      v5 = (unsigned __int8)KiSwapContext(v4, v6, v8) == 0;
    }
    else
    {
      v5 = (*(_DWORD *)(v4 + 116) & 0x40) == 0;
    }
    if ( !v5 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(v4 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    __writecr8(a2);
  }
}
