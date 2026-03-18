/*
 * XREFs of MiSetPfnOriginalPte @ 0x140195D70
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1406A27D0 (MmFreeNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
