/*
 * XREFs of MiSetPfnOriginalPte @ 0x140171DDC
 * Callers:
 *     MmFreeNonCachedMemory @ 0x140658A2C (MmFreeNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
