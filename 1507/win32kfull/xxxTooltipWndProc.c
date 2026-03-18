/*
 * XREFs of xxxTooltipWndProc @ 0x1C0128580
 * Callers:
 *     <none>
 * Callees:
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     zzzStartFade @ 0x1C010DD38 (zzzStartFade.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0122A90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0128864 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C0151FA4 (InitTooltipDelay.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0155E7C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022779C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagTOOLTIPWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rbp
  unsigned int v7; // edi
  struct tagTOOLTIPWND *v8; // rbx
  __int64 v10; // rcx
  struct tagTOOLTIPWND *v11; // rcx
  int v12; // eax
  int v13; // r8d
  unsigned __int64 Fade; // rax
  int v15; // edx
  __int64 v16; // r8
  HDC v17[10]; // [rsp+50h] [rbp-88h] BYREF

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
    if ( *((_DWORD *)a1 + 58) + 376 < (unsigned int)*(unsigned __int16 *)(gpsi + 384LL) || *((_QWORD *)a1 + 52) )
      return 0LL;
    *((_WORD *)a1 + 33) = 694;
  }
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 && a2 != 130 )
    goto LABEL_42;
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v17);
    xxxTooltipRender(v8, v17[0], v16);
    xxxEndPaint(v8, v17);
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
          v10 = *((_QWORD *)v8 + 48);
          if ( v10 )
            GreDeleteDC(v10);
          *(_DWORD *)(*((_QWORD *)v8 + 3) + 32LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer(a1, (int)a3);
          return 0LL;
        case 0x318u:
          xxxTooltipRender(a1, a3, 694LL);
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
        if ( (gfade[12] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap(a1);
      }
      goto LABEL_42;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_25:
      v13 = *((_DWORD *)v8 + 95);
LABEL_36:
      v15 = 2;
      goto LABEL_37;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            a1,
                            *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28),
                            *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29)) )
        goto LABEL_35;
      Fade = *((_QWORD *)v8 + 48);
    }
    else
    {
      Fade = CreateFade(a1, 0LL, 0x87u, 33, *((_DWORD *)a1 + 86));
    }
    if ( Fade )
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v8, 0x317u, Fade, (struct _LARGE_STRING *)0x1E, 0, 0, 0LL, 1, 1);
      if ( (gfade[12] & 0x20) == 0 )
      {
        v15 = 3;
        v13 = 20;
        *((_DWORD *)v8 + 102) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_37:
        SetTooltipTimer(v8, v15, v13);
        goto LABEL_42;
      }
      zzzStartFade();
      goto LABEL_25;
    }
LABEL_35:
    v13 = 0;
    goto LABEL_36;
  }
  return 0LL;
}
