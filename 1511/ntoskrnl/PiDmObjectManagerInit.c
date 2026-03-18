/*
 * XREFs of PiDmObjectManagerInit @ 0x14051B110
 * Callers:
 *     PiDmInit @ 0x140742F20 (PiDmInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400909E4 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
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
