/*
 * XREFs of KiRequestTimer2Expiration @ 0x1400ED01C
 * Callers:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

signed __int16 KiRequestTimer2Expiration()
{
  unsigned int v0; // r9d
  __int64 v1; // rdx
  struct _KPRCB *v2; // r8
  signed __int16 result; // ax
  signed __int16 v4; // tt
  struct _KPRCB *CurrentPrcb; // rax

  v0 = KiClockTimerOwner;
  v1 = 8LL;
  v2 = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  _m_prefetchw(&v2->11756);
  result = v2->DpcRequestSlot[0];
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)&v2->11756, result | 8, result);
  }
  while ( v4 != result );
  if ( (result & 0x29) == 0 )
  {
    LOBYTE(v1) = 2;
    if ( KeGetCurrentPrcb() == v2 )
    {
      return KiRequestSoftwareInterrupt(v2, 2u);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      return HalSendSoftwareInterrupt(v0, v1);
    }
  }
  return result;
}
