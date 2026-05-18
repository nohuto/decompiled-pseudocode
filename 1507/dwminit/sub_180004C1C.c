/*
 * XREFs of sub_180004C1C @ 0x180004C1C
 * Callers:
 *     sub_18000434C @ 0x18000434C (sub_18000434C.c)
 * Callees:
 *     sub_1800045AC @ 0x1800045AC (sub_1800045AC.c)
 *     sub_180004970 @ 0x180004970 (sub_180004970.c)
 */

void sub_180004C1C()
{
  EnterCriticalSection(&CriticalSection);
  if ( sub_180004970() )
    sub_1800045AC();
  LeaveCriticalSection(&CriticalSection);
}
