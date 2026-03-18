/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1400311D0
 * Callers:
 *     KiChainedDispatch @ 0x140154BE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140155360 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401555B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140155800 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140155A50 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140155C90 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     SwapContext @ 0x14015ABD0 (SwapContext.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // r10
  UCHAR Size; // r9
  int v7; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v9; // rax
  unsigned int CurrentFrequency; // eax
  __int64 v11; // r11
  __int64 v12; // rcx

  CurrentThread = a2;
  if ( a2 )
  {
    v5 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 23360) = *(_QWORD *)(a1 + 23352);
  if ( (Size & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency();
    a3 = CurrentFrequency;
    v12 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      v12 = CurrentFrequency / 0x19;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v12));
    *(_QWORD *)&a2->Header.Lock += v11;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v5 )
  {
    if ( (Size & 0x36) != 0 )
    {
      if ( CurrentThread->WaitBlock[0].SparePtr )
      {
        LOBYTE(a2) = 1;
        KiBeginCounterAccumulation(CurrentThread, a2);
      }
      _enable();
      if ( (CurrentThread->Header.Size & 4) != 0 )
      {
        v7 = *(&CurrentThread->MiscFlags + 1);
        if ( (v7 & 0x400) != 0 )
        {
LABEL_18:
          LOBYTE(a3) = 1;
          KiInsertDeferredPreemptionApc(a1, CurrentThread, a3);
          return;
        }
        if ( (v7 & 0x200) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v9 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 1624);
            if ( v9 )
            {
              while ( (v9[112] & 2) == 0 )
              {
                v9 = (char *)*((_QWORD *)v9 + 49);
                if ( !v9 )
                  return;
              }
              goto LABEL_18;
            }
          }
        }
      }
    }
    else
    {
      _enable();
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
}
