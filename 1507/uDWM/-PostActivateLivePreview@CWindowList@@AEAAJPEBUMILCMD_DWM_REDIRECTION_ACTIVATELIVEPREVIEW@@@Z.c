/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180001EC0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18001BC80 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x1800786D0 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CWindowList::PostActivateLivePreview(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rbx
  int v8; // eax
  struct CWindowData *MDIOwner; // rax
  CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (HWND)*((_QWORD *)a2 + 1);
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v11);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x18FAu);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
    {
      v7 = v11;
      if ( v11 )
      {
        if ( (*((_BYTE *)v11 + 553) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner(v11);
          if ( MDIOwner )
            v7 = MDIOwner;
        }
        if ( (*((_DWORD *)v7 + 25) & 0x20000000) != 0 )
          *((_BYTE *)v7 + 555) |= 0x10u;
      }
    }
    v8 = CDesktopManager::PostActivateLivePreview(CDesktopManager::s_pDesktopManagerInstance, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1912u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
