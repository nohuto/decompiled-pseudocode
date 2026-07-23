/*
 * XREFs of KeEnterCriticalRegionThread @ 0x14013424C
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
