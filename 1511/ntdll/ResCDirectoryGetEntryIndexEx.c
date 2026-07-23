/*
 * XREFs of ResCDirectoryGetEntryIndexEx @ 0x18004BAA4
 * Callers:
 *     ResCDirectoryGetEntryCopyAndIndex @ 0x1800862E8 (ResCDirectoryGetEntryCopyAndIndex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ??$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@I@Z @ 0x1800F76FC (--$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@.c)
 */

__int64 __fastcall ResCDirectoryGetEntryIndexEx(__int64 a1, __int128 *a2)
{
  int Entry; // eax
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 || !*(_QWORD *)(a1 + 48) )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0xFFFFFFFFLL;
  }
  v6 = *a2;
  Entry = GetEntryIndex<_RESCDIRECTORY *,_RESCDENTRY *,0>(a1, &v6);
  v4 = Entry;
  if ( Entry < 0 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 48) + 48LL * Entry + 44) & 1) != 0 )
    return (unsigned int)-1;
  return v4;
}
