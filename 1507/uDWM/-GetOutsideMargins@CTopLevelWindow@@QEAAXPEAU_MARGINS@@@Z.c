/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180024F34
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F120 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180034D0C (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800677F8 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007856C (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180008450 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  _DWORD *v4; // rdi
  int v5; // r11d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152)) )
  {
    v4 = (_DWORD *)((char *)this + 660);
    if ( (*((_BYTE *)this + 264) & 4) == 0 )
      v4 = (_DWORD *)((char *)this + 644);
    v5 = v4[1];
    v6 = v4[3];
    v7 = *((_DWORD *)this + 157) - *v4 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
    if ( v7 < 0 )
      v7 = 0;
    v8 = *((_DWORD *)this + 158) - v5 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
    if ( v8 < 0 )
      v8 = 0;
    v9 = *((_DWORD *)this + 160) - v6 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
    a2->cxLeftWidth = *v4 + v7;
    if ( v9 < 0 )
      v9 = 0;
    a2->cyTopHeight = v4[2];
    a2->cxRightWidth = v5 + v8;
    a2->cyBottomHeight = v6 + v9;
  }
}
