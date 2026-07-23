/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x1406205EC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 * Callees:
 *     <none>
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
