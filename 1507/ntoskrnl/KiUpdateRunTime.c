/*
 * XREFs of KiUpdateRunTime @ 0x1400AC2C0
 * Callers:
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KiShouldScanSharedReadyQueue @ 0x14011B3C4 (KiShouldScanSharedReadyQueue.c)
 *     KiGenerateHeteroSets @ 0x140206EF4 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x140206F38 (KiGetHeteroCpuPolicyThread.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // ax
  int v4; // edi
  unsigned __int64 v5; // rcx
  _KTHREAD *CurrentThread; // r11
  unsigned __int64 result; // rax
  int HeteroCpuPolicyThread; // eax
  __int64 v9; // r11
  unsigned __int64 *v10; // r10
  char v11; // cl
  _BYTE v12[32]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-8h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v13;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((__int64)CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  CurrentThread = CurrentPrcb->CurrentThread;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( CurrentThread != CurrentPrcb->IdleThread
    && ((result = CurrentThread->CycleTime, result >= CurrentThread->QuantumTarget)
     || CurrentThread->SystemHeteroCpuPolicy
     && (HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(CurrentThread, CurrentPrcb),
         KiGenerateHeteroSets(
           CurrentPrcb->ParentNode,
           *(_QWORD *)(v9 + 576),
           HeteroCpuPolicyThread,
           (unsigned int)&v14,
           (__int64)v12),
         (CurrentPrcb->GroupSetMember & v14) == 0)
     && (result = *v10, (*v10 & v14) != 0))
    || (result = MEMORY[0xFFFFF78000000320], MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget) )
  {
LABEL_23:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(v5) = 2;
      return HalRequestSoftwareInterrupt(v5);
    }
  }
  else
  {
    result = (unsigned __int64)CurrentThread->SchedulingGroup;
    if ( result )
    {
      for ( result += CurrentPrcb->ScbOffset; result; result = *(_QWORD *)(result + 392) )
      {
        v11 = *(_BYTE *)(result + 112);
        if ( (v11 & 4) != 0 )
        {
          if ( (v11 & 0x10) == 0 )
          {
            v5 = *(_QWORD *)(result + 16);
            if ( *(_QWORD *)result > v5 )
              goto LABEL_23;
          }
          v5 = *(_QWORD *)(result + 24);
        }
        else
        {
          v5 = *(_QWORD *)(result + 8);
        }
        if ( *(_QWORD *)result > v5 )
          goto LABEL_23;
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
