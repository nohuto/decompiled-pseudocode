/*
 * XREFs of MiSetPfnOriginalPte @ 0x1401718E0
 * Callers:
 *     MmFreeNonCachedMemory @ 0x140658948 (MmFreeNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiGetFastLargePage @ 0x1406629F0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
