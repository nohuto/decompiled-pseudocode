/*
 * XREFs of xxxTooltipWndProc @ 0x1C011F2F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F5DC (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C011F72C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     InitTooltipDelay @ 0x1C011F904 (InitTooltipDelay.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F9B4 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     zzzStartFade @ 0x1C013F924 (zzzStartFade.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014FA28 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227754 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rbp
  unsigned int v7; // edi
  struct tagWND *v8; // rbx
  __int64 v10; // rcx
  struct tagTOOLTIPWND *v11; // rcx
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 Fade; // rax
  HDC v16[10]; // [rsp+50h] [rbp-88h] BYREF

  v4 = *((_WORD *)a1 + 33);
  v6 = a4;
  v7 = a2;
  v8 = a1;
  if ( v4 != 694 )
  {
    if ( v4 )
      return 0LL;
    if ( a2 != 129 )
      return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
    if ( *((_DWORD *)a1 + 58) + 360 < (unsigned int)*(unsigned __int16 *)(gpsi + 384LL) || *((_QWORD *)a1 + 50) )
      return 0LL;
    *((_WORD *)a1 + 33) = 694;
  }
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 && a2 != 130 )
    goto LABEL_42;
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v16);
    xxxTooltipRender(v8, v16[0]);
    xxxEndPaint(v8, v16);
    return 0LL;
  }
  if ( a2 != 20 )
  {
    if ( a2 != 71 )
    {
      switch ( a2 )
      {
        case 0x81u:
          InitTooltipDelay(a1);
          InitTooltipAnimation(v11);
          break;
        case 0x82u:
          DestroyTooltipBitmap(a1);
          v10 = *((_QWORD *)v8 + 46);
          if ( v10 )
            GreDeleteDC(v10);
          *(_DWORD *)(*((_QWORD *)v8 + 3) + 32LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer(a1, (unsigned int)a3);
          return 0LL;
        case 0x318u:
          xxxTooltipRender(a1, a3);
          return 0LL;
      }
LABEL_42:
      a4 = v6;
      a2 = v7;
      a1 = v8;
      return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
    }
    v12 = *(_DWORD *)(a4 + 32);
    if ( (v12 & 0x40) == 0 )
    {
      if ( (v12 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap(a1);
      }
      goto LABEL_42;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_25:
      v13 = *((_DWORD *)v8 + 91);
LABEL_26:
      v14 = 2;
LABEL_27:
      SetTooltipTimer(v8, v14, v13);
      goto LABEL_42;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            a1,
                            *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28),
                            *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29)) )
        goto LABEL_37;
      Fade = *((_QWORD *)v8 + 46);
    }
    else
    {
      Fade = CreateFade(a1, 0LL, *((_DWORD *)a1 + 88));
    }
    if ( Fade )
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v8, 791LL, Fade, 30LL, 0, 0, 0LL, 1, 1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v14 = 3;
        v13 = 20;
        *((_DWORD *)v8 + 98) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_27;
      }
      zzzStartFade();
      goto LABEL_25;
    }
LABEL_37:
    v13 = 0;
    goto LABEL_26;
  }
  return 0LL;
}
