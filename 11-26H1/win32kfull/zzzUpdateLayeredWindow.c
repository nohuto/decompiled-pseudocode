/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1400421A8
 * Callers:
 *     zzzUpdateShadowAlpha @ 0x140011CCC (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x14021B130 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     zzzMoveShadow @ 0x14024B140 (zzzMoveShadow.c)
 * Callees:
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400426E4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        int a9,
        struct tagRECT *a10)
{
  __int64 v10; // rax
  HBITMAP v11; // rdi
  __int128 v15; // xmm1
  char v16; // si
  __int64 v17; // rcx
  char RedirectionFlags; // al
  _DWORD *v19; // rdx
  int v20; // r13d
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  HDC v25; // r15
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  int updated; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v34; // rcx
  int v35; // eax
  bool v36; // cl
  __int64 v37; // rcx
  bool v38; // r14
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 UserSessionState; // rax
  int v47; // [rsp+68h] [rbp-41h] BYREF
  __int64 v48; // [rsp+70h] [rbp-39h] BYREF
  __int64 RedirectionBitmap; // [rsp+78h] [rbp-31h]
  __int128 v50; // [rsp+80h] [rbp-29h]
  __int128 v51; // [rsp+90h] [rbp-19h]
  int v52; // [rsp+F8h] [rbp+4Fh] BYREF
  HDC v53; // [rsp+100h] [rbp+57h]
  struct tagPOINT *v54; // [rsp+108h] [rbp+5Fh]
  struct tagSIZE *v55; // [rsp+110h] [rbp+67h]

  v55 = (struct tagSIZE *)a4;
  v54 = (struct tagPOINT *)a3;
  v53 = a2;
  v10 = *((_QWORD *)a1 + 5);
  v11 = 0LL;
  v52 = 0;
  v47 = 0;
  v48 = 0LL;
  v15 = *(_OWORD *)(v10 + 104);
  v50 = *(_OWORD *)(v10 + 88);
  v51 = v15;
  W32GetUserSessionState(a1, a2);
  v16 = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (*((_DWORD *)a1 + 95) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1LL);
    *((_DWORD *)a1 + 95) &= ~0x8000u;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v17 + 232) & 2) != 0 )
    return 3221225485LL;
  RedirectionBitmap = GetRedirectionBitmap(a1);
  RedirectionFlags = GetRedirectionFlags(a1);
  if ( RedirectionBitmap )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v20 = a9;
  if ( (a9 & 8) == 0 && (*((_DWORD *)a1 + 96) & 0x10) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, a4, &v52, &v47);
    v21 = v52;
    if ( RedirectionBitmap )
    {
      if ( v52 )
      {
        v35 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, (HSURF *)&v48);
        v11 = (HBITMAP)v48;
        updated = v35;
        if ( v35 < 0 )
        {
LABEL_30:
          *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v50;
          *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v51;
          if ( v11 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v11) )
            DeleteOrSetRedirectionBitmap(a1, v11, 1LL);
          return (unsigned int)updated;
        }
      }
    }
    GreLockVisRgn();
    v24 = v47;
    if ( v21 || v47 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        DwmChildRectChange(a1);
        DirtyVisRgnTrackers(a1);
      }
      if ( *(_DWORD *)(W32GetUserSessionState(v43, v42) + 43272) )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated((Gre::Base *)1);
      }
      UserSessionState = W32GetUserSessionState(v45, v44);
      GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 40LL), 0);
    }
    v25 = a5;
    if ( a5 )
      v20 |= 0x20000000u;
    v26 = W32GetUserSessionState(v23, v22);
    updated = UpdateSprite(
                *(HDEV *)(*(_QWORD *)(v26 + 56968) + 40LL),
                a1,
                v27,
                v53,
                v54,
                v55,
                v25,
                a6,
                a7,
                a8,
                v20,
                a10);
    if ( updated >= 0 && v24 )
    {
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v50,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v50),
        0LL);
      GreUnlockVisRgn(v34);
    }
    else
    {
      GreUnlockVisRgn(v28);
      if ( updated < 0 )
        goto LABEL_30;
    }
    if ( v11 )
      DeleteOrSetRedirectionBitmap(a1, v11, 1LL);
    if ( v21 || v24 )
      GenerateMouseMove(0LL);
    if ( (v20 & 0x20) == 0 || v21 || v24 )
    {
      v32 = 3;
      if ( !*(_DWORD *)(W32GetUserSessionState(v31, v30) + 70592) )
        v32 = 1;
      xxxWindowEvent(0x800Bu, v32);
    }
    return (unsigned int)updated;
  }
  v36 = 0;
  if ( a4 )
  {
    v19 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( a4->cx != v19[24] - v19[22] || a4->cy != v19[25] - v19[23] )
      v36 = 1;
  }
  if ( (a9 & 8) == 0 )
  {
LABEL_40:
    if ( (*((_DWORD *)a1 + 96) & 0x10) == 0 )
      goto LABEL_7;
    if ( !v36 )
    {
      if ( !a3 )
        goto LABEL_7;
      v37 = *((_QWORD *)a1 + 5);
      if ( a3->x == *(_DWORD *)(v37 + 88) && a3->y == *(_DWORD *)(v37 + 92) )
        goto LABEL_7;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v16 = 0;
    }
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69152),
        3,
        4,
        10,
        (__int64)&WPP_187490f2602e36ab8c53117a82f31e3f_Traceguids,
        (char)a1);
    }
    return 3221225485LL;
  }
  if ( !v36 )
  {
    v20 = a9 & 0xFFFFFFF7;
    goto LABEL_40;
  }
  UserSetLastError(1462);
  return 2151546881LL;
}
