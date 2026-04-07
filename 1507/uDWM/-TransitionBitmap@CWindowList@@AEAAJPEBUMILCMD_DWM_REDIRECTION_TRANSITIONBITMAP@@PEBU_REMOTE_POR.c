/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A078
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18008CE48 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 */

__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(_QWORD *)((char *)a2 + 4);
  v6 = -2147467259;
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 1 && *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 1 )
    {
      if ( a3->ViewSize )
      {
        if ( a3->ViewBase )
        {
          v7 = CTransitionVisualController::RegisterTransitionBitmap(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                 v5,
                 *((unsigned int *)a2 + 3));
          v6 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xF93u);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
