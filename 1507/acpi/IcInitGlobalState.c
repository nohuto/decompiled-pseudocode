/*
 * XREFs of IcInitGlobalState @ 0x1C0065AE4
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C0086DB8 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C00590B8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
