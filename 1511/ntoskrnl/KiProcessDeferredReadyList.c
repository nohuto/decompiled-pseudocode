/*
 * XREFs of KiProcessDeferredReadyList @ 0x14007DC70
 * Callers:
 *     KiExitThreadWait @ 0x14002AC60 (KiExitThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140031C60 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetBasePriorityThread @ 0x140094928 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetLegacyAffinityThread @ 0x140095414 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400C4120 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401C8660 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401C8784 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 */

__int64 __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE *v9; // rdi
  __int64 v10; // r8
  int v11; // [rsp+50h] [rbp+18h] BYREF

  result = KiReadyDeferredReadyList(a1, a2);
  if ( a3 < 2u )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(v6, 0LL);
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v11, v7, v8);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_BYTE **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v6);
      KiUpdateThreadState(a1, v9, 2, 0);
      *(_BYTE *)(v6 + 643) = 32;
      *(_BYTE *)(v6 + 390) = a3;
      KiQueueReadyThread((struct _KPRCB *)a1, v6, v10);
      if ( !(unsigned __int8)KiSwapContext(v6, v9, a3) )
        goto LABEL_4;
    }
    else if ( (*(_DWORD *)(v6 + 116) & 0x40) == 0 )
    {
LABEL_4:
      result = a3;
      __writecr8(a3);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v6 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    result = *(unsigned __int8 *)(a1 + 11754);
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
  }
  return result;
}
