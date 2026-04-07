/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18000B604
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18000AED0 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  PVOID ViewBase; // r11
  int v8; // eax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(_QWORD *)((char *)a2 + 4);
  v6 = -2147467259;
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 1 && *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 1 )
    {
      if ( a3->ViewSize )
      {
        ViewBase = a3->ViewBase;
        if ( ViewBase )
        {
          v8 = CTransitionVisualController::RegisterTransitionBitmap(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                 v5,
                 *((_DWORD *)a2 + 3),
                 (_DWORD *)a2 + 12,
                 (__int128 *)a2 + 1,
                 (__int128 *)a2 + 2,
                 ViewBase,
                 a3->ViewSize);
          v6 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF90u);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v6;
}
