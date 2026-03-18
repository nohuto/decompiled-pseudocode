/*
 * XREFs of InitQEntryLookaside @ 0x1C01553F0
 * Callers:
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C00537A0 (Win32AllocPagedLookasideList.c)
 */

__int64 InitQEntryLookaside()
{
  QEntryLookaside = Win32AllocPagedLookasideList();
  if ( !QEntryLookaside )
    return 3221225495LL;
  QLookaside = (void *)Win32AllocPagedLookasideList();
  return QLookaside == 0LL ? 0xC0000017 : 0;
}
