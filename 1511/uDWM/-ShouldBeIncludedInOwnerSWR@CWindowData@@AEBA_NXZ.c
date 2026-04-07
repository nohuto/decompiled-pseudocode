/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001E294
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E23C (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030BE0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800034B0 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180013448 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // bp
  const struct tagRECT *v4; // rsi
  bool v5; // bl
  HWND v6; // rcx
  WCHAR *v7; // rax
  int v8; // r10d
  int v9; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-238h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 568) & 1) != 0
    && (*((_DWORD *)this + 25) & 0xC00000) != 0xC00000
    && (*((char *)this + 104) >= 0 || (*((_DWORD *)this + 144) & 0xFFF) == 0x11) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v4 = (const struct tagRECT *)*((_QWORD *)this + 65);
      if ( v4 )
      {
        v5 = CWindowData::WillEndAnimationCloaked(*((CWindowData **)this + 65));
        if ( CWindowData::WillEndAnimationCloaked(this) == v5 && ContainsRect(v4 + 3, (const struct tagRECT *)this + 3) )
        {
          v6 = (HWND)*((_QWORD *)this + 5);
          ClassName[0] = 0;
          v2 = 1;
          if ( GetClassNameW(v6, ClassName, 260) )
          {
            v7 = ClassName;
            do
            {
              v8 = *(WCHAR *)((char *)v7 + (char *)L"ImmersiveAppTitleBar" - (char *)ClassName);
              v9 = *v7 - v8;
              if ( v9 )
                break;
              ++v7;
            }
            while ( v8 );
            if ( !v9 )
              return 0;
          }
        }
      }
    }
  }
  return v2;
}
