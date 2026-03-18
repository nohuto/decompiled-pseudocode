/*
 * XREFs of KseHookMmGetVirtualForPhysical @ 0x1401DE20C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KseHookMmGetVirtualForPhysical()
{
  __readcr3();
  return qword_1402F40E8();
}
