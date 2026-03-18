/*
 * XREFs of PiDmObjectManagerInit @ 0x1405645F8
 * Callers:
 *     PiDmInit @ 0x1407B1E38 (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400C3F7C (RtlInitializeGenericTableAvl.c)
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
