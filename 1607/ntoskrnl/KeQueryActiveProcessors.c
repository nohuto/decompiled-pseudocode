/*
 * XREFs of KeQueryActiveProcessors @ 0x1401D30F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1403AA618[0];
}
