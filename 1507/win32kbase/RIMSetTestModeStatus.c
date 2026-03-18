/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00C06E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
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
        RIMLockExclusive((__int64)&i[43].Blink);
        for ( j = i[31].Flink; j; j = j[2].Blink )
        {
          if ( ((__int64)j[11].Blink & 0x800) != 0 )
            RIMEndAllActiveContacts(&i[-1], j[26].Flink);
        }
        RIMUnlockExclusive((__int64)&i[43].Blink);
      }
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return 0LL;
}
