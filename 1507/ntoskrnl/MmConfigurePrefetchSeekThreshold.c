/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x14055D378
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_14034F6AC = a1;
}
