/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C007CE24
 * Callers:
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRect @ 0x1C00EFDD4 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x1C0121A90 (xxxGetUpdateRgn.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C0088150 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00EC2A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  char v3; // di
  HRGN NCUpdateRgn; // rax
  HRGN v5; // rsi

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
          NCUpdateRgn = GetNCUpdateRgn(a1, 1);
          v5 = NCUpdateRgn;
          if ( (((v3 & 2) != 0) & (*((_BYTE *)a1 + 41) >> 3)) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v3 & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v5);
              v5 = GetNCUpdateRgn(a1, 0);
            }
            if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0, a1, 0x102u, 1);
              SetOrClrWF(0, a1, 0x104u, 1);
              xxxSendEraseBkgnd(a1, 0LL, v5);
            }
            ClearHungFlag(a1);
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
              LODWORD(StyleWindow) = IsHungWindow(a1);
              if ( (_DWORD)StyleWindow )
              {
                if ( (*((_BYTE *)a1 + 43) & 8) != 0 )
                {
                  ClearHungFlag(a1);
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
        LOBYTE(StyleWindow) = ClearHungFlag(a1);
      }
    }
  }
  return StyleWindow;
}
