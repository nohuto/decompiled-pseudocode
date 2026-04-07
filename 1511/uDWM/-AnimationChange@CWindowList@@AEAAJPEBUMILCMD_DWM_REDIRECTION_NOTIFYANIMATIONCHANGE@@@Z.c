/*
 * XREFs of ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002D25C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180043698 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 */

__int64 __fastcall CWindowList::AnimationChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *a2)
{
  HWND v4; // rdx
  unsigned int v5; // ebx
  int SyncedWindowDataByHwnd; // eax
  struct CWindowData *v7; // rcx
  bool v8; // al
  struct CWindowData *v10; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v5 = 0;
  if ( v4 )
  {
    v10 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v10);
    v5 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x176Bu);
    }
    else
    {
      v7 = v10;
      if ( v10 )
      {
        v8 = *((_DWORD *)a2 + 3) == 0;
        *((_BYTE *)v10 + 568) &= ~0x20u;
        *((_BYTE *)v7 + 568) |= 32 * v8;
      }
    }
  }
  else
  {
    CDesktopManager::SetWindowAnimation(*((_DWORD *)a2 + 3) != 0);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
