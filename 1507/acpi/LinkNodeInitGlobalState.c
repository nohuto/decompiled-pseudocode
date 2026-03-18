/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C0065ACC
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C0086DB8 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C0059108 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
