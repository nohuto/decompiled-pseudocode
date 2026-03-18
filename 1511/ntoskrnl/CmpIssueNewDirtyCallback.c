/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1404C1E00
 * Callers:
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     <none>
 */

__int64 CmpIssueNewDirtyCallback()
{
  __int64 result; // rax

  result = (unsigned int)CmpHoldLazyFlush;
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      return PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
  return result;
}
