/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x140107510
 * Callers:
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v4; // r10
  UCHAR Size; // r9
  int v6; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v8; // rax
  unsigned int CurrentFrequency; // eax
  __int64 v10; // r11
  __int64 v11; // rcx

  CurrentThread = a2;
  if ( a2 )
  {
    v4 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 23360) = *(_QWORD *)(a1 + 23352);
  if ( (Size & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    v11 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      v11 = CurrentFrequency / 0x19;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v11));
    *(_QWORD *)&a2->Header.Lock += v10;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v4 )
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
        v6 = *(&CurrentThread->MiscFlags + 1);
        if ( (v6 & 0x400) != 0 )
        {
LABEL_21:
          KiInsertDeferredPreemptionApc(a1, (__int64)CurrentThread, 1);
          return;
        }
        if ( (v6 & 0x200) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v8 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 1624);
            if ( v8 )
            {
              while ( (v8[112] & 2) == 0 )
              {
                v8 = (char *)*((_QWORD *)v8 + 49);
                if ( !v8 )
                  return;
              }
              goto LABEL_21;
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
