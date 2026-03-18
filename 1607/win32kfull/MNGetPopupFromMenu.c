/*
 * XREFs of MNGetPopupFromMenu @ 0x1C006B218
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0067B88 (xxxEnableMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006B174 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00B5AC0 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C013CA74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C014A4DC (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
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
        for ( i = *v5; i; i = *(_QWORD *)(v8 + 360) )
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
