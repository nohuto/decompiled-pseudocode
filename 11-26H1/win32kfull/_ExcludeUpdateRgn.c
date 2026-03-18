/*
 * XREFs of _ExcludeUpdateRgn @ 0x14004092C
 * Callers:
 *     NtUserExcludeUpdateRgn @ 0x14003EC60 (NtUserExcludeUpdateRgn.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 * Callees:
 *     GetDCOrgOnScreen @ 0x140040AF8 (GetDCOrgOnScreen.c)
 *     GreExtSelectClipRgn @ 0x140040B5C (GreExtSelectClipRgn.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x140040BD0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  __int128 v27; // [rsp+38h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v26 = 0LL;
  v5 = *(_QWORD *)(v2 + 136);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
    }
    else if ( (unsigned int)GetDCOrgOnScreen(a1, &v26) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      if ( (unsigned int)GreGetRandomRgn(a1, *(_QWORD *)(UserSessionState + 63352), 1LL) == 1 )
      {
        v25 = W32GetUserSessionState(v10, v9);
        GreOffsetRgn(*(_QWORD *)(v25 + 63352), (unsigned int)v26, HIDWORD(v26));
      }
      else
      {
        v11 = W32GetUserSessionState(v10, v9);
        CalcVirtualScreenClipRegion(*(HRGN *)(v11 + 63352), a2);
      }
      v14 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
      v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63352);
      v18 = W32GetUserSessionState(v17, v16);
      GreCombineRgn(*(_QWORD *)(v18 + 63352), v15, v14, 4LL);
      v21 = W32GetUserSessionState(v20, v19);
      GreOffsetRgn(*(_QWORD *)(v21 + 63352), (unsigned int)-(int)v26, (unsigned int)-HIDWORD(v26));
      W32GetUserSessionState(v23, v22);
      return GreExtSelectClipRgn(a1);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v27 = 0LL;
    return GreGetClipBox(a1, &v27, 0LL);
  }
}
