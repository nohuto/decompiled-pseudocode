/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180027B88
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180030F20 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180035574 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x18006F1EC (-SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  int *v5; // rcx
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d

  v2 = *((_DWORD *)this + 152);
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v2 & 6) != 0 || (*((_DWORD *)this + 152) & 0x200000) != 0 )
  {
    v5 = (int *)((char *)this + 660);
    if ( (*((_BYTE *)this + 264) & 4) == 0 )
      v5 = (int *)((char *)this + 644);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[3];
    v9 = *((_QWORD *)this + 93);
    if ( !v9 || (*(_BYTE *)(v9 + 576) & 8) != 0 )
    {
      v10 = *((_DWORD *)this + 157) - *v5 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
      if ( v10 < 0 )
        v10 = 0;
      v11 = *((_DWORD *)this + 158) - v7 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
      if ( v11 < 0 )
        v11 = 0;
      v12 = *((_DWORD *)this + 160) - v8 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
      a2->cxLeftWidth = v6 + v10;
      if ( v12 < 0 )
        v12 = 0;
      a2->cyTopHeight = v5[2];
      a2->cxRightWidth = v7 + v11;
      a2->cyBottomHeight = v8 + v12;
    }
    else
    {
      a2->cyTopHeight = v5[2];
      a2->cxLeftWidth = v6;
      a2->cxRightWidth = v7;
      a2->cyBottomHeight = v8;
    }
  }
}
