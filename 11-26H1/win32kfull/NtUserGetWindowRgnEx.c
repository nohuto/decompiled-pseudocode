/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1402B5B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     MirrorRegion @ 0x14002C1A8 (MirrorRegion.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x140295600 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r9d
  unsigned int RgnBox; // eax
  HRGN ExplicitClipRgn; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  HRGN v18; // [rsp+20h] [rbp-28h] BYREF
  __int128 v19; // [rsp+28h] [rbp-20h] BYREF

  v18 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  if ( (~((unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) != 0 ? 127 : 63) & a3) != 0 )
  {
    UserSetLastError(1004);
LABEL_2:
    v9 = 0;
    goto LABEL_28;
  }
  if ( !v18 )
  {
    v9 = 0;
    UserSetLastError(87);
    goto LABEL_28;
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    v19 = 0LL;
    if ( (a3 & 8) == 0 )
      v10 = 2 * (a3 & 4 | 0x4000200);
    v11 = v10 | 1;
    if ( (a3 & 0x10) != 0 )
      v11 = v10;
    v12 = v11 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v12 = v11;
    CalcVisRgn(&v18, v7, v7, v12);
    RgnBox = GreGetRgnBox(v18, &v19);
  }
  else
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(v7);
    if ( !ExplicitClipRgn )
      goto LABEL_2;
    RgnBox = GreCombineRgn(v15, ExplicitClipRgn, 0LL, 5LL);
  }
  v9 = RgnBox;
  if ( !RgnBox )
    goto LABEL_2;
  v16 = *((_QWORD *)v7 + 5);
  if ( (*(_WORD *)(v16 + 42) & 0x2FFF) != 0x29D )
    v9 = GreOffsetRgn(v18, (unsigned int)-*(_DWORD *)(v16 + 88), (unsigned int)-*(_DWORD *)(v16 + 92));
  LOBYTE(v6) = ((a3 & 1) == 0) & (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) >> 6);
  if ( (_BYTE)v6 )
    MirrorRegion((__int64)v7, (unsigned __int64)v18, 0);
  if ( (a3 & 0x20) != 0 )
  {
    if ( PtiCurrent(v6) )
    {
      if ( *((_QWORD *)PtiCurrent(v6) + 61) )
      {
        v6 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v6) + 61) + 8LL);
        if ( (*(_DWORD *)(v6 + 64) & 1) != 0 )
        {
          v6 = *((_QWORD *)v7 + 5);
          if ( (*(_DWORD *)(v6 + 288) & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v6 + 284), v18);
        }
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
