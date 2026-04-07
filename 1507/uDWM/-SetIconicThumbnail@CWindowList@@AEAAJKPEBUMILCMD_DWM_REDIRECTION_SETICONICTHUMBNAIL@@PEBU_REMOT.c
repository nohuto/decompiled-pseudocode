/*
 * XREFs of ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180079D24
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800703F4 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     Template_p @ 0x1800764B8 (Template_p.c)
 */

__int64 __fastcall CWindowList::SetIconicThumbnail(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  int SyncedWindowDataByHwnd; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  bool IsImmersiveWindow; // al
  struct CWindowData *v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-28h] BYREF
  CWindowData *v19; // [rsp+80h] [rbp+18h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_p(v8, (__int64)&UdwmProcessSetIconicThumbnail_Start, *(_QWORD *)((char *)a3 + 4));
  v19 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v19);
  v12 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v19 )
    {
      IsImmersiveWindow = CWindowData::IsImmersiveWindow(v19);
      v15 = *((_DWORD *)a3 + 3);
      if ( IsImmersiveWindow )
        v16 = CImmersiveIconicBitmapRegistry::BitmapReceived(
                *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                v14,
                a2,
                v15,
                *((_DWORD *)a3 + 4),
                (_DWORD *)a4->ViewBase,
                a4->ViewSize);
      else
        v16 = CIconicBitmapRegistry::BitmapReceived(
                *((CWindowIconic *****)CDesktopManager::s_pDesktopManagerInstance + 28),
                v14,
                a2,
                v15,
                *((_DWORD *)a3 + 4),
                a4->ViewBase,
                a4->ViewSize,
                *((_DWORD *)a3 + 5));
      v12 = v16;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_p(v11, (__int64)&UdwmProcessSetIconicThumbnail_Stop, (__int64)v9);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xE86u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v12;
}
