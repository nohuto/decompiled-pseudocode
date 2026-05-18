/*
 * XREFs of sub_180004564 @ 0x180004564
 * Callers:
 *     sub_180007990 @ 0x180007990 (sub_180007990.c)
 * Callees:
 *     sub_1800045AC @ 0x1800045AC (sub_1800045AC.c)
 *     sub_180004C54 @ 0x180004C54 (sub_180004C54.c)
 */

void sub_180004564()
{
  EnterCriticalSection(&CriticalSection);
  sub_1800045AC();
  sub_180004C54();
  byte_18000C758 = 1;
  LeaveCriticalSection(&CriticalSection);
  DeleteCriticalSection(&CriticalSection);
}
