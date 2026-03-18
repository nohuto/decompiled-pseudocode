/*
 * XREFs of KseHookMmMapIoSpace @ 0x14020C654
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KseHookMmMapIoSpace()
{
  __readcr3();
  return qword_140321608();
}
