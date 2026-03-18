/*
 * XREFs of KeKvaShadowingActive @ 0x1401CA5E0
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     KeQueryKvaShadowInformation @ 0x14061AF44 (KeQueryKvaShadowInformation.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     HvlpInitializeIum @ 0x1407829C0 (HvlpInitializeIum.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
