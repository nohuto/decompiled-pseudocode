/*
 * XREFs of ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180031094
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800106BC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CWindowList::EndTransition(
        struct _RTL_CRITICAL_SECTION *this,
        const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // esi
  CAnimationScheduler *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = this;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)a2 + 1);
  v5 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v3, &UdwmEndTransitionRequest, v4);
  if ( v4 != -1 )
  {
    v8 = &CDesktopManager::s_csDwmInstance;
    v6 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v5 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v6, v4, 0LL);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
