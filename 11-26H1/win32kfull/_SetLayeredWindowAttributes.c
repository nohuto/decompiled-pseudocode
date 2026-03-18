/*
 * XREFs of _SetLayeredWindowAttributes @ 0x140012004
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x140012290 (NtUserSetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  char v5; // bl
  int v9; // eax
  __int64 result; // rax
  __int64 RedirectionBitmap; // rdi
  __int64 v12; // rdx
  unsigned int v13; // r15d
  __int64 UserSessionState; // rax
  __int64 v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int updated; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // [rsp+60h] [rbp-19h] BYREF
  char v29; // [rsp+62h] [rbp-17h]
  char v30; // [rsp+63h] [rbp-16h]
  int v31; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-Dh]
  __int64 v33; // [rsp+70h] [rbp-9h]
  __int64 v34; // [rsp+78h] [rbp-1h] BYREF
  __int128 v35; // [rsp+80h] [rbp+7h] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_DWORD *)a1 + 95);
    if ( (v9 & 0x8000) != 0 )
      *((_DWORD *)a1 + 95) = v9 & 0xFFFF7FFF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1);
    if ( (int)result < 0 )
      return result;
    if ( !RedirectionBitmap )
      v5 = 1;
  }
  v28 = 0;
  v13 = a4 & 0xDFFFFFEF | 0x20000000;
  v30 = 0;
  v29 = a3;
  if ( RedirectionBitmap )
  {
    v34 = 0LL;
    v35 = 0LL;
    UserSessionState = W32GetUserSessionState(1LL, v12);
    v15 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), RedirectionBitmap);
    v16 = (_DWORD *)*((_QWORD *)a1 + 5);
    v17 = v15;
    v31 = v16[24] - v16[22];
    v32 = v16[25] - v16[23];
    v19 = *(_QWORD *)(W32GetUserSessionState(v18, v32) + 43248);
    v22 = W32GetUserSessionState(v21, v20);
    updated = UpdateSprite(
                *(HDEV *)(*(_QWORD *)(v22 + 56968) + 40LL),
                a1,
                0LL,
                (__int64)&v31,
                v19,
                (__int64)&v34,
                a2,
                (__int64)&v28,
                v13,
                (unsigned __int64)&v35 & -(__int64)(v5 != 0));
    v26 = W32GetUserSessionState(v25, v24);
    GreSelectBitmap(*(_QWORD *)(v26 + 43248), v17);
  }
  else
  {
    v27 = W32GetUserSessionState(1LL, v12);
    updated = UpdateSprite(
                *(HDEV *)(*(_QWORD *)(v27 + 56968) + 40LL),
                a1,
                0LL,
                0LL,
                0LL,
                0LL,
                a2,
                (__int64)&v28,
                v13,
                0LL);
  }
  if ( updated >= 0 )
  {
    LOBYTE(v31) = 0;
    v33 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v31);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31);
  }
  return (unsigned int)updated;
}
