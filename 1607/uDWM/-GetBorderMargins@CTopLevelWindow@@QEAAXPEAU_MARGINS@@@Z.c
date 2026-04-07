/*
 * XREFs of ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18007E418
 * Callers:
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007D324 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x18006F1A8 (-_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ.c)
 *     ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEAAXPEAU_MARGINS@@@Z @ 0x18006F1C4 (-_GetMarginsVisibleOutside@CTopLevelWindow@@AEAAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CTopLevelWindow::GetBorderMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  CTopLevelWindow *v2; // r8
  int v3; // edx
  int v4; // r10d
  _DWORD *v5; // r9
  int RightFrameThickness; // eax
  int v7; // edx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // r10d
  int v11; // r11d
  bool v12; // zf
  int v13; // edx
  struct _MARGINS v14; // [rsp+20h] [rbp-18h] BYREF

  CTopLevelWindow::_GetMarginsVisibleOutside(this, &v14);
  v3 = *((_DWORD *)v2 + 156);
  v4 = *((_DWORD *)v2 + 153);
  v5[2] = v14.cyTopHeight;
  v5[3] = v3;
  *v5 = v4;
  RightFrameThickness = CTopLevelWindow::_GetRightFrameThickness(v2);
  if ( v14.cxRightWidth > RightFrameThickness )
    RightFrameThickness = v14.cxRightWidth;
  v12 = (*(_BYTE *)(v8 + 264) & 4) == 0;
  v9[1] = RightFrameThickness;
  if ( v12 )
  {
    v13 = v7 - v14.cyBottomHeight;
    *v9 = v10 - v14.cxLeftWidth;
    v9[2] = v11 + 1;
    v9[3] = v13;
  }
  else
  {
    v9[3] = v7 + 1;
    v9[1] = RightFrameThickness + 1;
  }
}
