/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007856C
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800020B8 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180005D10 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180024F34 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x180075740 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall CWindowList::GetExtendedFrameBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  CTopLevelWindow *v7; // rcx
  char CurrentStyle; // al
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v11);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v6 = v11;
    if ( v11 )
    {
      *a3 = *((struct tagRECT *)v11 + 3);
      v7 = (CTopLevelWindow *)*((_QWORD *)v6 + 46);
      v10 = 0LL;
      if ( v7 )
      {
        CTopLevelWindow::GetOutsideMargins(v7, &v10);
      }
      else
      {
        CurrentStyle = CTopLevelWindow::GetCurrentStyle(v6);
        CTopLevelWindow::CalculateOutsideMargins(v6, CurrentStyle, &v10);
      }
      a3->left += v10.cxLeftWidth;
      a3->top += v10.cyTopHeight;
      a3->right -= v10.cxRightWidth;
      a3->bottom -= v10.cyBottomHeight;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x10DFu);
  }
  return v5;
}
