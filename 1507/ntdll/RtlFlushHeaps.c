/*
 * XREFs of RtlFlushHeaps @ 0x1800094D0
 * Callers:
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlpFlushHeapsCallback, 0LL, 0);
}
