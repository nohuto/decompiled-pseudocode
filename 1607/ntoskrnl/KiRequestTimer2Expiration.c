/*
 * XREFs of KiRequestTimer2Expiration @ 0x1400C77F4
 * Callers:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012AD94 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

signed __int16 KiRequestTimer2Expiration()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  struct _KPRCB *v2; // r8
  signed __int16 result; // ax
  signed __int16 v4; // tt
  struct _KPRCB *CurrentPrcb; // rax

  v0 = (unsigned int)KiClockTimerOwner;
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
      return KiRequestSoftwareInterrupt(v2, v1, v2, v0);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      return HalSendSoftwareInterrupt((unsigned int)v0, v1);
    }
  }
  return result;
}
