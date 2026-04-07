/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180002128
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800020B8 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180005D10 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180008450 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  struct CWindowData *v6; // rdi
  unsigned int CurrentStyle; // esi
  int v8; // r15d
  int v9; // ebp
  int v10; // r15d
  int v11; // r14d
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // edx
  LONG v15; // edx
  int v17; // ecx
  int v18; // eax
  LONG v19; // eax
  struct CWindowData *v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v20);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1079u);
  }
  else
  {
    v6 = v20;
    if ( v20
      && (CurrentStyle = CTopLevelWindow::GetCurrentStyle(v20, 1), CTopLevelWindow::HasRenderedBorder(CurrentStyle)) )
    {
      v8 = *((_DWORD *)v6 + 24);
      v9 = 0;
      if ( (CurrentStyle & 0x20) != 0 )
        v10 = v8 + 1;
      else
        v10 = v8 - 1;
      if ( (CurrentStyle & 2) != 0 )
        v11 = *((_DWORD *)v6 + 193);
      else
        v11 = *((_DWORD *)v6 + 168);
      if ( (CurrentStyle & 0x400) != 0 )
        v9 = (int)floor_0((float)((float)v11 * 2.2272727) + 0.5);
      if ( (CurrentStyle & 0x200) != 0 )
        v9 += (int)floor_0((float)((float)v11 * 2.1818182) + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        v12 = (float)v11;
        if ( (CurrentStyle & 0x800) != 0 )
          v13 = v12 * 2.1818182;
        else
          v13 = v12 * 2.2272727;
        v9 += (int)floor_0(v13 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v9 += (int)floor_0((float)((float)v11 * 2.2272727) + 0.5);
      a3->top = 0;
      a3->bottom = v11 + *((_DWORD *)v6 + 24);
      v14 = *((_DWORD *)v6 + 49) - *((_DWORD *)v6 + 47);
      if ( v14 < 0 )
        v14 = 0;
      v15 = v14 - v10;
      a3->right = v15;
      a3->left = v15 - v9;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v6 + 26) & 0x400000) == 0 )
      {
        v17 = v9;
        if ( v9 < 0 )
          v17 = 0;
        v18 = *((_DWORD *)v6 + 49) - *((_DWORD *)v6 + 47);
        if ( v18 < 0 )
          v18 = 0;
        v19 = v18 - v15;
        a3->left = v19;
        a3->right = v17 + v19;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
