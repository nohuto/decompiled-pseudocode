/*
 * XREFs of MNGetPopupFromMenu @ 0x1C005573C
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0052C14 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0052DC4 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C010DBC8 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0118B7C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 * Callees:
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 *v5; // r8
  __int64 i; // rbx
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = a1;
  if ( v2 )
  {
    v5 = *(__int64 **)(*(_QWORD *)(v2 + 16) + 536LL);
    if ( v5 )
    {
      if ( (v5[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v5;
        for ( i = *v5; i; i = *(_QWORD *)(v7 + 376) )
        {
          if ( *(_QWORD *)(i + 40) == v3 )
          {
            if ( (*(_DWORD *)i & 1) != 0 )
              return 0LL;
            MNAnimate(v5, 0LL);
            return i;
          }
          if ( !*(_QWORD *)(i + 24) )
            return 0LL;
          v7 = safe_cast_fnid_to_PMENUWND();
          if ( !v7 )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
