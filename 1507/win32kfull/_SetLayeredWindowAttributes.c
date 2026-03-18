/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0057144
 * Callers:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0056ED0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     GetRedirectionFlags @ 0x1C005945C (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, int a2, char a3, int a4)
{
  bool v5; // r14
  int v9; // eax
  __int64 RedirectionBitmap; // rbx
  int v11; // r11d
  int v12; // edx
  __int64 result; // rax
  int v14; // r8d
  unsigned int v15; // esi
  unsigned int updated; // edi
  unsigned __int8 RedirectionFlags; // al
  __int64 v18; // rbx
  __int16 v19; // [rsp+60h] [rbp-9h] BYREF
  char v20; // [rsp+62h] [rbp-7h]
  char v21; // [rsp+63h] [rbp-6h]
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v23[2]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v24[2]; // [rsp+78h] [rbp+Fh] BYREF

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
  RedirectionBitmap = GetRedirectionBitmap(a1);
  v11 = 1;
  if ( RedirectionBitmap )
  {
    RedirectionFlags = GetRedirectionFlags(a1);
    if ( (RedirectionFlags & (unsigned __int8)v11) != 0 )
      goto LABEL_10;
  }
  v12 = v11;
  if ( (a4 & 0x10) != 0 )
    v12 = 17;
  result = SetRedirectedWindow(a1, v12);
  if ( (int)result >= 0 )
  {
    v5 = RedirectionBitmap == 0;
LABEL_10:
    v19 = 0;
    v15 = a4 & 0xDFFFFFEF | 0x20000000;
    v21 = 0;
    v20 = a3;
    if ( RedirectionBitmap )
    {
      v22 = 0LL;
      v24[0] = 0LL;
      v24[1] = 0LL;
      v18 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
      v23[0] = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
      v23[1] = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
      updated = UpdateSprite(
                  *gpDispInfo,
                  (_DWORD)a1,
                  ghdcMem,
                  0,
                  0LL,
                  (__int64)v23,
                  ghdcMem,
                  (__int64)&v22,
                  a2,
                  (__int64)&v19,
                  v15,
                  (unsigned __int64)v24 & -(__int64)v5);
      GreSelectBitmap(ghdcMem, v18);
    }
    else
    {
      return (unsigned int)UpdateSprite(
                             *gpDispInfo,
                             (_DWORD)a1,
                             v14,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             a2,
                             (__int64)&v19,
                             v15,
                             0LL);
    }
    return updated;
  }
  return result;
}
