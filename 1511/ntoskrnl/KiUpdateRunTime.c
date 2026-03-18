/*
 * XREFs of KiUpdateRunTime @ 0x140045DB0
 * Callers:
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400E53FC (KiShouldScanSharedReadyQueue.c)
 *     KiGenerateHeteroSets @ 0x1401C9790 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1401C97D4 (KiGetHeteroCpuPolicyThread.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // ax
  int v4; // edi
  _KTHREAD *CurrentThread; // r11
  unsigned __int64 result; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  __int64 i; // rcx
  char v9; // al
  int HeteroCpuPolicyThread; // eax
  __int64 v11; // r11
  _QWORD *v12; // r10
  char v13[32]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp-8h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v14;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  CurrentThread = CurrentPrcb->CurrentThread;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( CurrentThread != CurrentPrcb->IdleThread
    && (CurrentThread->CycleTime >= CurrentThread->QuantumTarget
     || CurrentThread->SystemHeteroCpuPolicy
     && (HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(CurrentThread, CurrentPrcb),
         KiGenerateHeteroSets(
           CurrentPrcb->ParentNode,
           *(_QWORD *)(v11 + 576),
           HeteroCpuPolicyThread,
           (unsigned int)&v15,
           (__int64)v13),
         (CurrentPrcb->GroupSetMember & v15) == 0 && (*v12 & v15) != 0))
    || (result = MEMORY[0xFFFFF78000000320], MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget) )
  {
LABEL_17:
    CurrentPrcb->QuantumEnd = 1;
    return KiRequestSoftwareInterrupt(CurrentPrcb, 2u);
  }
  else
  {
    SchedulingGroup = CurrentThread->SchedulingGroup;
    if ( SchedulingGroup )
    {
      result = CurrentPrcb->ScbOffset;
      for ( i = (__int64)SchedulingGroup + result; i; i = *(_QWORD *)(i + 392) )
      {
        v9 = *(_BYTE *)(i + 112);
        if ( (v9 & 4) != 0 )
        {
          if ( (v9 & 0x10) == 0 && *(_QWORD *)i > *(_QWORD *)(i + 16) )
            goto LABEL_17;
          result = *(_QWORD *)(i + 24);
        }
        else
        {
          result = *(_QWORD *)(i + 8);
        }
        if ( *(_QWORD *)i > result )
          goto LABEL_17;
      }
    }
    if ( (signed int)(CurrentPrcb->ReadyScanTick - v4) < 0 )
    {
      result = KiShouldScanSharedReadyQueue(CurrentPrcb);
      if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
      {
        if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
        {
          result = (unsigned int)(v4 + 75);
          CurrentPrcb->ReadyScanTick = result;
        }
      }
    }
  }
  return result;
}
