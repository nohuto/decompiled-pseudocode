/*
 * XREFs of RtlFlushHeaps @ 0x18004F590
 * Callers:
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlpFlushHeapsCallback);
}
