/*
 * XREFs of SetDesktopPattern @ 0x14008586C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x140083F20 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x140246F20 (RecolorDeskPattern.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1402D1CF8 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 SolidBrush; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  wchar_t v20; // ax
  __int128 *v21; // r9
  __int64 v22; // r10
  __int16 v23; // cx
  wchar_t v24; // dx
  HBITMAP v25; // rax
  __int128 v26; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v28[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset_0(v28, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &pszFormat, v28, 260, 0) )
      return v4;
    a2 = v28;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v28[0] && _wcsicmp(a2, Str2) )
  {
    v20 = *a2;
    v21 = &v26;
    v26 = 0LL;
    v22 = 8LL;
    do
    {
      v23 = 0;
      while ( v20 && (unsigned __int16)(v20 - 48) > 9u )
        v20 = *++a2;
      v20 = *a2;
      if ( *a2 >= 0x30u )
      {
        v24 = *a2;
        do
        {
          if ( v24 > 0x39u )
            break;
          ++a2;
          v23 = v24 + 2 * (5 * v23 - 24);
          v20 = *a2;
          v24 = *a2;
        }
        while ( *a2 >= 0x30u );
      }
      *(_WORD *)v21 = v23;
      v21 = (__int128 *)((char *)v21 + 2);
      --v22;
    }
    while ( v22 );
    v25 = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL, &v26);
    if ( v25 )
    {
      SetGlobalDesktopPattern(v25);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19904) + 4572LL));
    if ( SolidBrush )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
      if ( *(_QWORD *)(v12 + 4704) )
      {
        v16 = W32GetUserSessionState(v12, v11);
        GreMarkDeletableBrush(*(HBRUSH *)(*(_QWORD *)(v16 + 19904) + 4704LL));
        v19 = W32GetUserSessionState(v18, v17);
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(v19 + 19904) + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904) + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
