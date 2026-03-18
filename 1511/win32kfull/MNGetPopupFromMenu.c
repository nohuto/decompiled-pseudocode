/*
 * XREFs of MNGetPopupFromMenu @ 0x1C00723EC
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0015710 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0072DE0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0139638 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0143C5C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 * Callees:
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 *v5; // r8
  __int64 i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = a1;
  if ( v2 )
  {
    v5 = *(__int64 **)(*(_QWORD *)(v2 + 16) + 528LL);
    if ( v5 )
    {
      if ( (v5[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v5;
        for ( i = *v5; i; i = *(_QWORD *)(v8 + 376) )
        {
          if ( *(_QWORD *)(i + 40) == v3 )
          {
            if ( (*(_DWORD *)i & 1) != 0 )
              return 0LL;
            MNAnimate(v5, 0LL);
            return i;
          }
          v7 = *(_QWORD *)(i + 24);
          if ( !v7 )
            return 0LL;
          v8 = safe_cast_fnid_to_PMENUWND(v7);
          if ( !v8 )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
