/*
 * XREFs of zzzUpdateShadowAlpha @ 0x140011CCC
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x140012290 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v3; // rsi
  int v4; // eax
  HWND v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR v11[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  struct _BLENDFUNCTION v13; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+38h] BYREF

  result = FindShadow(a1);
  v14 = 0;
  v3 = result;
  LODWORD(v12) = 0;
  if ( result )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v11, (__int64)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      if ( (GetRedirectionFlags(a1) & 1) != 0 )
      {
        v13 = 0;
        v4 = IsWindowDesktopComposed(a1);
        v5 = *(HWND *)a1;
        v6 = v4;
        UserSessionState = W32GetUserSessionState(v8, v7);
        if ( (unsigned int)GreGetSpriteAttributes(
                             *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                             v5,
                             &v13,
                             &v14,
                             v6) )
        {
          if ( (v14 & 2) != 0 )
          {
            LOWORD(v12) = 0;
            BYTE3(v12) = 1;
            BYTE2(v12) = v13.SourceConstantAlpha;
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
              BugCheckParameter3,
              *((_QWORD *)v3 + 1));
            zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, 0LL, 0, (__int64)&v12, 2, 0LL);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
          }
        }
      }
    }
    else
    {
      UserSetLastError(87LL);
    }
    return (struct tagSHADOW *)Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v11);
  }
  return result;
}
