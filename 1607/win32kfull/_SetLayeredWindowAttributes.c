/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0061F00
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C0061960 (NtUserSetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 * Callees:
 *     UpdateSprite @ 0x1C00527B0 (UpdateSprite.c)
 *     GetRedirectionFlags @ 0x1C0053B04 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, unsigned __int8 a3, int a4)
{
  bool v5; // r14
  int v9; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // esi
  unsigned int updated; // edi
  unsigned __int8 RedirectionFlags; // al
  unsigned __int8 v16; // r11
  __int64 v17; // rbx
  struct _BLENDFUNCTION v18; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_DWORD *)a1 + 72);
    if ( (v9 & 0x40) != 0 )
      *((_DWORD *)a1 + 72) = v9 & 0xFFFFFFBF;
  }
  if ( (*((_BYTE *)a1 + 50) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
  if ( !RedirectionBitmap || (RedirectionFlags = GetRedirectionFlags((__int64)a1), (RedirectionFlags & v16) == 0) )
  {
    result = SetRedirectedWindow(a1);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  *(_WORD *)&v18.BlendOp = 0;
  v13 = a4 & 0xDFFFFFEF | 0x20000000;
  *(_WORD *)&v18.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v19 = 0LL;
    v21[0] = 0LL;
    v21[1] = 0LL;
    v17 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    LODWORD(v20) = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
    HIDWORD(v20) = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
    updated = UpdateSprite(
                (HDEV)*gpDispInfo,
                (__int64)a1,
                ghdcMem,
                0LL,
                0LL,
                (struct tagSIZE *)&v20,
                ghdcMem,
                (struct tagPOINT *)&v19,
                a2,
                &v18,
                v13,
                (struct tagRECT *)((unsigned __int64)v21 & -(__int64)v5));
    GreSelectBitmap(ghdcMem, v17);
  }
  else
  {
    return (unsigned int)UpdateSprite((HDEV)*gpDispInfo, (__int64)a1, v12, 0LL, 0LL, 0LL, 0LL, 0LL, a2, &v18, v13, 0LL);
  }
  return updated;
}
