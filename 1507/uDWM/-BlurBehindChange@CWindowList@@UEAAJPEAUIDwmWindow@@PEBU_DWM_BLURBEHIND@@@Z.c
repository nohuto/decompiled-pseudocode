/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x180046630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800246F0 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rcx
  bool fEnable; // al
  CTopLevelWindow *v10; // rcx
  bool fTransitionOnMaximized; // al
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v14);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1190u);
  }
  else
  {
    v8 = v14;
    if ( v14 )
    {
      if ( (a3->dwFlags & 1) != 0 )
      {
        fEnable = a3->fEnable;
        *((_BYTE *)v14 + 553) &= ~4u;
        *((_BYTE *)v8 + 553) |= 4 * fEnable;
      }
      if ( (a3->dwFlags & 4) != 0 )
      {
        fTransitionOnMaximized = a3->fTransitionOnMaximized;
        *((_BYTE *)v8 + 553) &= ~8u;
        *((_BYTE *)v8 + 553) |= 8 * fTransitionOnMaximized;
      }
      v10 = (CTopLevelWindow *)*((_QWORD *)v8 + 46);
      if ( v10 )
        CTopLevelWindow::OnBlurBehindUpdated(v10);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
