/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1402A4470
 * Callers:
 *     <none>
 * Callees:
 *     DeleteOldRedirectionBitmap @ 0x1400189F4 (DeleteOldRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1402A427C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  HSURF v10; // rdi
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v11);
  result = ValidateHwnd(a1);
  v4 = (struct tagWND *)result;
  if ( v12 )
    *(_BYTE *)(v11 + 1708) = 1;
  if ( result )
  {
    v5 = *(_QWORD *)(result + 40);
    if ( (*(_BYTE *)(v5 + 27) & 0x20) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v5, v3);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), v4, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v4);
      result = GetRedirectionBitmap((__int64)v4, v7);
      v10 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v4, v8, v9);
        SetRedirectionBitmap(v4, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v4, v10, 1);
        result = RecreateRedirectionBitmap(v4, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return UnsetRedirectedWindow(v4, 1LL);
      }
    }
  }
  return result;
}
