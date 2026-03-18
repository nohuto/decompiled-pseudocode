/*
 * XREFs of KeKvaShadowingActive @ 0x140209EF0
 * Callers:
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     KeQuerySpeculationControlInformation @ 0x140699748 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140699B5C (KeQueryKvaShadowInformation.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
