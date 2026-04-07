/*
 * XREFs of ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180080D14
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180080134 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800845CC (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIF.c)
 */

__int64 __fastcall CWindowList::OnWindowArrangementEnd(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  int v3; // eax
  const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *v4; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = CWindowArrangementTransition::OnWindowArrangementEnd(this[65], v4);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x19A1u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x19A0u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
