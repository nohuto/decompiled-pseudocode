/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086784
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z @ 0x1800851A0 (--$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008A9C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 */

__int64 __fastcall CContactManager::OnFlick(
        struct CTouchVisual **this,
        const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *a2)
{
  CContactManager *v4; // rcx
  unsigned int v5; // ebx
  struct CVisual **v6; // rsi
  unsigned int v7; // ebp
  int Touch; // eax
  CContactManager *v9; // rcx
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) <= 0x14u )
  {
    v6 = this + 39;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v4, this[39]);
    v7 = *((_DWORD *)this + 80);
    this[39] = 0LL;
    *((_DWORD *)this + 80) = v7 + 1;
    GetDesktopID(1LL, &v11);
    Touch = CreateTouchVisual<CFlickVisual>(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v11,
              this + 39);
    v5 = Touch;
    if ( Touch >= 0 )
    {
      CContactManager::AddToTouchNode(v9, v11, *v6);
      CFlickVisual::Start(*v6, (char *)a2 + 8, *((unsigned int *)a2 + 1), v7);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x33Du);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
