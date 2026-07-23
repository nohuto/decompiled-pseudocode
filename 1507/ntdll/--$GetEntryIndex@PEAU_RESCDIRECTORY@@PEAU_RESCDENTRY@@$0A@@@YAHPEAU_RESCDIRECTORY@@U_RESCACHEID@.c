/*
 * XREFs of ??$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@I@Z @ 0x1800F7B6C
 * Callers:
 *     ResCDirectoryGetEntryIndexEx @ 0x1800F81BC (ResCDirectoryGetEntryIndexEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x1800F7BFC (--$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCAC.c)
 */

__int64 __fastcall GetEntryIndex<_RESCDIRECTORY *,_RESCDENTRY *,0>(__int64 a1, __int128 *a2, int a3)
{
  int FirstEntry; // edx
  int i; // r8d
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( (a3 & 0xFFFF0000) == 0x100000 )
  {
    RtlSetLastWin32Error(87);
    return 0xFFFFFFFFLL;
  }
  else
  {
    v9 = *a2;
    FirstEntry = GetFirstEntryIndex<_RESCDIRECTORY *,_RESCDENTRY *,0>(a1, &v9);
    for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL); FirstEntry >= 0; --i )
    {
      if ( FirstEntry >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) )
        break;
      if ( !i )
        break;
      v8 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(v8 + 48LL * FirstEntry + 16) == a3 )
        break;
      FirstEntry = *(_DWORD *)(v8 + 48LL * FirstEntry + 36);
    }
    return (unsigned int)FirstEntry;
  }
}
