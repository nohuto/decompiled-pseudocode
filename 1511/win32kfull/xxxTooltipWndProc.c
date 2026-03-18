/*
 * XREFs of xxxTooltipWndProc @ 0x1C00C6150
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C6130 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C63B8 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C00C7594 (InitTooltipDelay.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227AF8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rbp
  struct tagTOOLTIPWND *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 Fade; // rax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  HDC v16[10]; // [rsp+50h] [rbp-88h] BYREF

  v4 = *((_WORD *)a1 + 33);
  v6 = a4;
  if ( v4 != 694 )
  {
    if ( v4 || *((_DWORD *)a1 + 58) + 376 < (unsigned int)*(unsigned __int16 *)(gpsi + 384LL) )
      return 0LL;
    if ( a2 != 129 )
      return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
    *((_WORD *)a1 + 33) = 694;
  }
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 && a2 != 130 )
    goto LABEL_10;
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v16);
    xxxTooltipRender(a1, v16[0]);
    xxxEndPaint(a1);
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
          InitTooltipAnimation(v10);
          goto LABEL_10;
        case 0x82u:
          DestroyTooltipBitmap(a1);
          v11 = *((_QWORD *)a1 + 48);
          if ( v11 )
            GreDeleteDC(v11);
          *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) &= 0xFFFFFCFF;
          goto LABEL_10;
        case 0x118u:
          xxxTooltipHandleTimer(a1, (unsigned int)a3);
          break;
        case 0x318u:
          xxxTooltipRender(a1, a3);
          break;
        default:
LABEL_10:
          a4 = v6;
          return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
      }
      return 0LL;
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
      goto LABEL_10;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_34:
      v14 = *((_DWORD *)a1 + 95);
LABEL_35:
      v15 = 2;
LABEL_36:
      SetTooltipTimer(a1, v15, v14);
      goto LABEL_10;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            a1,
                            *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28),
                            *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29)) )
        goto LABEL_37;
      Fade = *((_QWORD *)a1 + 48);
    }
    else
    {
      Fade = CreateFade(a1, 0LL, *((_DWORD *)a1 + 86));
    }
    if ( Fade )
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(a1, 791LL, Fade, 30LL, 0, 0, 0LL, 1, 1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v15 = 3;
        v14 = 20;
        *((_DWORD *)a1 + 102) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_36;
      }
      zzzStartFade();
      goto LABEL_34;
    }
LABEL_37:
    v14 = 0;
    goto LABEL_35;
  }
  return 0LL;
}
