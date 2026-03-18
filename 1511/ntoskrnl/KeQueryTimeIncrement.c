/*
 * XREFs of KeQueryTimeIncrement @ 0x1400C7DB0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14048BD50 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
