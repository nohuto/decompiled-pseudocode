/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C0080488
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00A9670 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C0073538 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
