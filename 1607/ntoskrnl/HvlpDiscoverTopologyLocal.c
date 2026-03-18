/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140620538
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x140139B58 (HvlEnlightenProcessor.c)
 * Callees:
 *     <none>
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
