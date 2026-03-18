/*
 * XREFs of KeQueryTimeIncrement @ 0x140086090
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404986E8 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFB08 (ExpTriggerFastCacheReeval.c)
 *     sub_1407B5678 @ 0x1407B5678 (sub_1407B5678.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
