/*
 * XREFs of KiProcessDeferredReadyList @ 0x1400D3450
 * Callers:
 *     KeBoostPriorityThread @ 0x140004884 (KeBoostPriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x14000C7E0 (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007ED94 (KeSetBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400919AC (KeSetPriorityBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A13E8 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A6B30 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C9044 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400CA8C8 (KeSetLegacyAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400CB014 (KeSetSystemGroupAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F28A0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140110E9C (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140134304 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14014A0B8 (KeSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401D7720 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7844 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     KiUpdateThreadState @ 0x140091CEC (KiUpdateThreadState.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400D0C00 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x1400D3558 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D8230 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140165CD0 (KiSwapContext.c)
 */

__int64 __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rdi
  _SINGLE_LIST_ENTRY *v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+50h] [rbp+18h] BYREF

  result = KiReadyDeferredReadyList(a1, a2);
  if ( a3 < 2u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(v9, 0, v7, v8);
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v9);
      KiUpdateThreadState(a1, v10, 2, 0);
      *(_BYTE *)(v9 + 643) = 32;
      *(_BYTE *)(v9 + 390) = a3;
      KiQueueReadyThread(a1, v9, v11, v12);
      if ( !(unsigned __int8)KiSwapContext(v9, v10, a3) )
        goto LABEL_4;
    }
    else if ( (*(_DWORD *)(v9 + 116) & 0x40) == 0 )
    {
LABEL_4:
      result = a3;
      __writecr8(a3);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v9 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    result = *(unsigned __int8 *)(a1 + 11754);
    if ( !(_BYTE)result )
    {
      LOBYTE(v6) = 2;
      return KiRequestSoftwareInterrupt(a1, v6, v7, v8);
    }
  }
  return result;
}
