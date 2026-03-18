/*
 * XREFs of CcScanDpc @ 0x1400AB9D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CcScanDpc()
{
  return CcNotifyWriteBehind(4LL);
}
