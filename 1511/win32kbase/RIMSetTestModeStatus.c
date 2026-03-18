/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00C12E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00C4C1C (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *j; // rdi

  RIMLockExclusive((__int64)&gObListLock);
  gbTestModeOn = a1;
  if ( !a1 )
  {
    for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
    {
      if ( (HIDWORD(i[3].Blink) & 0x14) != 0 )
      {
        RIMLockExclusive((__int64)&i[45].Blink);
        for ( j = i[33].Flink; j; j = j[2].Blink )
        {
          if ( ((__int64)j[11].Flink & 0x800) != 0 )
            RIMEndAllActiveContacts(&i[-1], j[26].Flink);
        }
        RIMUnlockExclusive((__int64)&i[45].Blink);
      }
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return 0LL;
}
