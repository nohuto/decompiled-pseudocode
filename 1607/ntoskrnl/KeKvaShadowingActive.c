/*
 * XREFs of KeKvaShadowingActive @ 0x1401D8DB4
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140459688 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     KeQueryKvaShadowInformation @ 0x14064FF2C (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x140650070 (KeQuerySpeculationControlInformation.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
