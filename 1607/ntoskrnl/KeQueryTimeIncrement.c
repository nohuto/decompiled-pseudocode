/*
 * XREFs of KeQueryTimeIncrement @ 0x140087980
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140499178 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFC40 (ExpTriggerFastCacheReeval.c)
 *     sub_1407B5678 @ 0x1407B5678 (sub_1407B5678.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
