/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C00EE158
 * Callers:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRect @ 0x1C00F5B84 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x1C014B844 (xxxGetUpdateRgn.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     xxxSendEraseBkgnd @ 0x1C0069A20 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F1FD4 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  char v3; // di
  HRGN NCUpdateRgn; // rax
  unsigned __int64 v5; // rsi

  StyleWindow = GetStyleWindow((__int64)a1, 2818);
  if ( !StyleWindow )
  {
    SetOrClrWF(0, a1, 0x240u, 1);
    v3 = 0;
    LOBYTE(StyleWindow) = *((_BYTE *)a1 + 41) & 8;
    if ( (_BYTE)StyleWindow )
      v3 = 2;
    if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
      v3 |= 1u;
    if ( (v3 & 3) != 0 )
    {
      if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      {
        if ( !*((_QWORD *)a1 + 20) )
        {
          SetOrClrWF(0, a1, 0x102u, 1);
          SetOrClrWF(0, a1, 0x104u, 1);
          v3 &= ~1u;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = (HRGN)GetNCUpdateRgn(a1, 1LL);
          v5 = (unsigned __int64)NCUpdateRgn;
          if ( (((v3 & 2) != 0) & (*((_BYTE *)a1 + 41) >> 3)) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v3 & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v5);
              v5 = GetNCUpdateRgn(a1, 0LL);
            }
            if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0, a1, 0x102u, 1);
              SetOrClrWF(0, a1, 0x104u, 1);
              xxxSendEraseBkgnd((__int64)a1, 0LL, v5);
            }
            ClearHungFlag(a1, 0x308u);
          }
          LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v5);
        }
        else
        {
          LOBYTE(StyleWindow) = *((_BYTE *)a1 + 55) & 0xC0;
          if ( (_BYTE)StyleWindow != 64 )
          {
            StyleWindow = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( a1 != *(struct tagWND **)(StyleWindow + 16) )
            {
              LODWORD(StyleWindow) = IsHungWindow((__int64)a1);
              if ( (_DWORD)StyleWindow )
              {
                if ( (*((_BYTE *)a1 + 43) & 8) != 0 )
                {
                  ClearHungFlag(a1, 0x308u);
                  LOBYTE(StyleWindow) = xxxRedrawHungWindow(a1);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, a1, 0x108u, 1);
        SetOrClrWF(0, a1, 0x102u, 1);
        SetOrClrWF(0, a1, 0x680u, 1);
        SetOrClrWF(0, a1, 0x104u, 1);
        LOBYTE(StyleWindow) = ClearHungFlag(a1, 0x308u);
      }
    }
  }
  return StyleWindow;
}
