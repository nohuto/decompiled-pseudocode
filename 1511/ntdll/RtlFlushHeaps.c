/*
 * XREFs of RtlFlushHeaps @ 0x18004F590
 * Callers:
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 0LL);
}
