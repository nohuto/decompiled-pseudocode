/*
 * XREFs of KeQueryActiveProcessors @ 0x1401C4124
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1403825B8[0];
}
