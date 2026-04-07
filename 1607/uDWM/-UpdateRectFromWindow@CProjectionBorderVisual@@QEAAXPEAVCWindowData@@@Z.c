/*
 * XREFs of ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007D324
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800822D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007D2C4 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18007E418 (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRectFromWindow(CProjectionBorderVisual *this, struct CWindowData *a2)
{
  CTopLevelWindow *v4; // rcx
  LONG top; // eax
  LONG left; // edx
  LONG bottom; // ecx
  LONG right; // r8d
  struct _MARGINS v9; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-20h] BYREF

  v4 = (CTopLevelWindow *)*((_QWORD *)a2 + 48);
  v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  if ( v4 )
  {
    CTopLevelWindow::GetBorderMargins(v4, &v9);
    top = v9.cyTopHeight + v10.top;
    left = v9.cxLeftWidth + v10.left;
    bottom = v10.bottom - v9.cyBottomHeight;
    right = v10.right - v9.cxRightWidth;
    v10.right -= v9.cxRightWidth;
    v10.top += v9.cyTopHeight;
    v10.left += v9.cxLeftWidth;
    v10.bottom -= v9.cyBottomHeight;
  }
  else
  {
    bottom = v10.bottom;
    right = v10.right;
    top = v10.top;
    left = v10.left;
  }
  if ( right < left || bottom < top )
    v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  CProjectionBorderVisual::UpdateRect(this, &v10);
}
