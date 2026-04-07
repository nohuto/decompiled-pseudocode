/*
 * XREFs of ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180079BFC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18006E5C0 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     Template_p @ 0x1800764B8 (Template_p.c)
 */

__int64 __fastcall CWindowList::SetIconicLivePreviewBitmap(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  int SyncedWindowDataByHwnd; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct CWindowData *v13; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp-28h] BYREF
  CWindowData *v16; // [rsp+90h] [rbp+18h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_p(v8, (__int64)&UdwmProcessSetIconicLivePreviewBitmap_Start, *(_QWORD *)((char *)a3 + 4));
  v16 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v16);
  v12 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v16 && !CWindowData::IsImmersiveWindow(v16) )
      v12 = CIconicBitmapRegistry::LivePreviewBitmapReceived(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
              v13,
              a2,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              (const struct tagPOINT *)((char *)a3 + 20),
              a4->ViewBase,
              a4->ViewSize,
              *((_DWORD *)a3 + 7));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_p(v11, (__int64)&UdwmProcessSetIconicLivePreviewBitmap_Stop, (__int64)v9);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xED0u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v12;
}
