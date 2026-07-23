/*
 * XREFs of CcScanDpc @ 0x1400A9F3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CcScanDpc()
{
  return CcNotifyWriteBehind(4LL);
}
