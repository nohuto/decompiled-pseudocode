/*
 * XREFs of IcInitGlobalState @ 0x1C00804A0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00A9670 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C00734E8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
