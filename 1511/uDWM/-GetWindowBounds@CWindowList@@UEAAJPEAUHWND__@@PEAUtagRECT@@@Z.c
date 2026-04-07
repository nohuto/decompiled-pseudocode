/*
 * XREFs of ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180080650
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18002AA84 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::GetWindowBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  CTopLevelWindow *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-30h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v11.left = 0LL;
  *(_QWORD *)&a3->left = 0LL;
  *(_QWORD *)&a3->right = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, (struct CWindowData **)&v11);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( *(_QWORD *)&v11.left )
    {
      v8 = *(CTopLevelWindow **)(*(_QWORD *)&v11.left + 384LL);
      if ( v8 )
        *a3 = *CTopLevelWindow::GetActualWindowRect(v8, &v11, 0, 1, 1);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x14BBu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v7;
}
