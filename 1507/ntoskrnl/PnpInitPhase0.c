/*
 * XREFs of PnpInitPhase0 @ 0x1407E7914
 * Callers:
 *     PpInitSystem @ 0x1407E78E8 (PpInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 */

char PnpInitPhase0()
{
  ExInitializeResourceLite(&PnpRegistryDeviceResource);
  LODWORD(PnpDeviceReferenceTableLock) = 1;
  qword_14034B108 = 0LL;
  dword_14034B110 = 0;
  dword_14034B11C = 0;
  qword_14034B128 = (__int64)&qword_14034B120;
  qword_14034B120 = (__int64)&qword_14034B120;
  word_14034B118 = 1;
  byte_14034B11A = 6;
  RtlInitializeGenericTableAvl(
    &PnpDeviceReferenceTable,
    (PRTL_AVL_COMPARE_ROUTINE)PnpCompareInstancePath,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  return 1;
}
