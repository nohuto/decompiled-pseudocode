/*
 * XREFs of PiDmObjectManagerInit @ 0x1405AC380
 * Callers:
 *     PiDmInit @ 0x1407DB654 (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)PiDmCompareObjects,
    PiDmAllocateGenericTableEntry,
    PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
