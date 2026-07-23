/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1400C6FF0
 * Callers:
 *     KiChainedDispatch @ 0x14015EF20 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F800 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015FBB0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140160310 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140166570 (SwapContext.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // r10
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v8; // r11
  int v9; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v11; // rax

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
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    a3 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      a3 = CurrentFrequency / 0x19;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * a3));
    *(_QWORD *)&a2->Header.Lock += v8;
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
        v9 = *(&CurrentThread->MiscFlags + 1);
        if ( (v9 & 0x400) != 0 )
        {
LABEL_22:
          LOBYTE(a3) = 1;
          KiInsertDeferredPreemptionApc(a1, CurrentThread, a3);
          return;
        }
        if ( (v9 & 0x300) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v11 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 1624);
            if ( v11 )
            {
              while ( (v11[112] & 2) == 0 )
              {
                v11 = (char *)*((_QWORD *)v11 + 51);
                if ( !v11 )
                  return;
              }
              goto LABEL_22;
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
