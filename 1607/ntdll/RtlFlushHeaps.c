/*
 * XREFs of RtlFlushHeaps @ 0x180050EC0
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps((__int64)RtlpFlushHeapsCallback, 0LL, 0);
}
