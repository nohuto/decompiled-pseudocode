/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1404C69CC
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_1402FF1EC = a1;
}
