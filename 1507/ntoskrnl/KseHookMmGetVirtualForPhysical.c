/*
 * XREFs of KseHookMmGetVirtualForPhysical @ 0x14020C624
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KseHookMmGetVirtualForPhysical()
{
  __readcr3();
  return qword_1403215E8();
}
