/*
 * XREFs of IcInitGlobalState @ 0x1C00658A4
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C0086DD4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C00590B8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
