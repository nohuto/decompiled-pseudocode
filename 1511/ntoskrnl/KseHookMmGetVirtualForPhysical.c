/*
 * XREFs of KseHookMmGetVirtualForPhysical @ 0x1401CD2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KseHookMmGetVirtualForPhysical()
{
  __readcr3();
  return qword_1402D24B8();
}
