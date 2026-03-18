/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x140558308
 * Callers:
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
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
