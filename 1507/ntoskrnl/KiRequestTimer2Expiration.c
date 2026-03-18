/*
 * XREFs of KiRequestTimer2Expiration @ 0x140129704
 * Callers:
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

__int16 KiRequestTimer2Expiration()
{
  unsigned int v0; // r8d
  struct _KPRCB *v1; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v3; // rcx
  __int16 v4; // tt
  struct _KPRCB *v5; // rax

  v0 = KiClockTimerOwner;
  v1 = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  _m_prefetchw(&v1->11756);
  LOWORD(CurrentPrcb) = v1->DpcRequestSlot[0];
  do
  {
    v3 = (unsigned __int16)CurrentPrcb;
    BYTE1(v3) = BYTE1(CurrentPrcb);
    v4 = (__int16)CurrentPrcb;
    LOWORD(CurrentPrcb) = _InterlockedCompareExchange16(
                            (volatile signed __int16 *)&v1->11756,
                            (unsigned __int16)CurrentPrcb | 8,
                            (signed __int16)CurrentPrcb);
  }
  while ( v4 != (_WORD)CurrentPrcb );
  if ( ((unsigned __int8)CurrentPrcb & 0x29) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb == v1 )
    {
      if ( v1->NestingLevel )
      {
        v1->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(v3) = 2;
        LOWORD(CurrentPrcb) = HalRequestSoftwareInterrupt(v3);
      }
    }
    else
    {
      v5 = KeGetCurrentPrcb();
      LOBYTE(v1) = 2;
      ++v5->SynchCounters.IpiSendSoftwareInterruptCount;
      LOWORD(CurrentPrcb) = HalSendSoftwareInterrupt(v0, v1);
    }
  }
  return (__int16)CurrentPrcb;
}
