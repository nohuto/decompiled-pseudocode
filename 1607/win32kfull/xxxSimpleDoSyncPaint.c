/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C010D750
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxGetUpdateRect @ 0x1C01173D4 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x1C020E404 (xxxGetUpdateRgn.c)
 * Callees:
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C010BBF0 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0112454 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  char v2; // di
  HRGN NCUpdateRgn; // rax
  HRGN v4; // rsi

  if ( !GetStyleWindow((__int64)a1, 2818) )
  {
    SetOrClrWF(0, a1, 0x240u, 1);
    v2 = 0;
    if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
      v2 = 2;
    if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
      v2 |= 1u;
    if ( (v2 & 3) != 0 )
    {
      if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      {
        if ( !*((_QWORD *)a1 + 20) )
        {
          SetOrClrWF(0, a1, 0x102u, 1);
          SetOrClrWF(0, a1, 0x104u, 1);
          v2 &= ~1u;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(a1, 1);
          v4 = NCUpdateRgn;
          if ( (((v2 & 2) != 0) & (*((_BYTE *)a1 + 41) >> 3)) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v2 & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v4);
              v4 = GetNCUpdateRgn(a1, 0);
            }
            if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0, a1, 0x102u, 1);
              SetOrClrWF(0, a1, 0x104u, 1);
              xxxSendEraseBkgnd((__int64)a1, 0LL, (__int64)v4);
            }
            ClearHungFlag(a1, 0x308u);
          }
          DeleteMaybeSpecialRgn(v4);
        }
        else if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40
               && a1 != *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
               && IsHungWindow((__int64)a1)
               && (*((_BYTE *)a1 + 43) & 8) != 0 )
        {
          ClearHungFlag(a1, 0x308u);
          xxxRedrawHungWindow(a1, 0LL);
        }
      }
      else
      {
        SetOrClrWF(0, a1, 0x108u, 1);
        SetOrClrWF(0, a1, 0x102u, 1);
        SetOrClrWF(0, a1, 0x680u, 1);
        SetOrClrWF(0, a1, 0x104u, 1);
        ClearHungFlag(a1, 0x308u);
      }
    }
  }
}
