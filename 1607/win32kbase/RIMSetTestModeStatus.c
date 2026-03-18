/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00CDB10
 * Callers:
 *     <none>
 * Callees:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
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
        RIMLockExclusive((__int64)&i[42].Blink);
        for ( j = i[33].Blink; j; j = j[2].Blink )
        {
          if ( ((__int64)j[11].Blink & 0x800) != 0 )
            RIMEndAllActiveContacts((__int64)&i[-1], (__int64)j[30].Flink, 0LL);
        }
        RIMUnlockExclusive((__int64)&i[42].Blink);
      }
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return 0LL;
}
