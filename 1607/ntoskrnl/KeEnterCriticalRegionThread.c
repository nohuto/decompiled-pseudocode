/*
 * XREFs of KeEnterCriticalRegionThread @ 0x140133CDC
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
