/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180010C2C
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002F140 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18000AF50 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000EB20 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000FFD0 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     Template_pqq @ 0x180091990 (Template_pqq.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        CTopLevelWindow **a2,
        unsigned __int8 a3,
        bool a4,
        bool *a5)
{
  int v9; // edx
  CAnimationScheduler *v10; // rcx
  char *v11; // r14
  signed int v12; // r15d
  __int64 v13; // rbx
  const struct CStoryboard *v15; // r12
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = (char *)a5;
  v12 = 0;
  v13 = 0LL;
  for ( *a5 = 0; (unsigned int)v13 < *((_DWORD *)this + 10); v13 = (unsigned int)(v13 + 1) )
  {
    v15 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v13);
    if ( CAnimationScheduler::_ShouldTrack(v10, (HWND *)a2, v15, 1) )
    {
      v12 = CWindowPropertyTracker::OnWindowCloakChange((CAnimationScheduler *)((char *)this + 48), v15, a2, a3, a4);
      LOBYTE(v10) = v12 >= 0;
      *v11 |= v12 >= 0;
    }
    else if ( a3 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        a2[48],
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_pqq((_DWORD)v10, v9, (unsigned int)a2[5], a3, *v11);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return (unsigned int)v12;
}
