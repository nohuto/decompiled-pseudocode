/*
 * XREFs of KeQueryActiveProcessors @ 0x1402003A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1403D15E8[0];
}
