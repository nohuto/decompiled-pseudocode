/*
 * XREFs of ttfdFreeGlyphset @ 0x1C0122AC4
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     vReleaseGlyphSet @ 0x1C0122B14 (vReleaseGlyphSet.c)
 */

void __fastcall ttfdFreeGlyphset(__int64 a1, int a2)
{
  EngAcquireSemaphore(ghsemTTFD);
  vReleaseGlyphSet(
    *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL)),
    *(unsigned int *)(a1 + 16LL * (unsigned int)(a2 - 1) + 44));
  EngReleaseSemaphore(ghsemTTFD);
}
