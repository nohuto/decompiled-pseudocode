/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1404EC660
 * Callers:
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140564650 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     <none>
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
