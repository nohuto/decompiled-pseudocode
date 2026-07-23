/*
 * XREFs of KiProcessDeferredReadyList @ 0x1400D12F0
 * Callers:
 *     KeBoostPriorityThread @ 0x1400049F8 (KeBoostPriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x14000C360 (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14009FD10 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A50A8 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400C8768 (KeSetLegacyAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x140111400 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401D754C (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7670 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
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
