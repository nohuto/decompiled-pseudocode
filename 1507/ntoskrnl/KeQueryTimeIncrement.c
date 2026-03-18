/*
 * XREFs of KeQueryTimeIncrement @ 0x1401011C0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_14051DFA0 @ 0x14051DFA0 (sub_14051DFA0.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14051F530 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
