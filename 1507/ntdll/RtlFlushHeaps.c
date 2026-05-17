/*
 * XREFs of RtlFlushHeaps @ 0x1800094D0
 * Callers:
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpFlushHeapsCallback, 0LL, 0);
}
