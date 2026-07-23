/*
 * XREFs of KseHookMmMapIoSpace @ 0x1401DE068
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KseHookMmMapIoSpace()
{
  __readcr3();
  return qword_1402F4108();
}
