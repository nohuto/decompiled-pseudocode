/*
 * XREFs of ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180080BA4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18007667C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     Template_p @ 0x18007E3B8 (Template_p.c)
 */

__int64 __fastcall CWindowList::InvalidateIconicBitmaps(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *a3)
{
  __int64 v6; // rcx
  HWND v7; // rdi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v9; // ebx
  HWND *v10; // rcx
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_p(v6, (__int64)&UdwmProcessInvalidateIconicBitmaps_Start, *(_QWORD *)((char *)a3 + 4));
  v12 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v7, &v12);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v10 = (HWND *)v12;
    if ( v12 && !CWindowData::IsImmersiveWindow(v12) )
      v9 = CIconicBitmapRegistry::InvalidateBitmaps(
             *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
             v10,
             a2);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_p((__int64)v10, (__int64)&UdwmProcessInvalidateIconicBitmaps_Stop, (__int64)v7);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xEF7u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
