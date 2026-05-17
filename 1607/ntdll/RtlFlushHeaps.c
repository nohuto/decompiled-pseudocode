/*
 * XREFs of RtlFlushHeaps @ 0x180050ED0
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps((__int64)RtlpFlushHeapsCallback, 0LL, 0);
}
