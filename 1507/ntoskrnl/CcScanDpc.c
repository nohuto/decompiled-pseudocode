/*
 * XREFs of CcScanDpc @ 0x1401284A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CcScanDpc()
{
  return CcNotifyWriteBehind(4LL);
}
