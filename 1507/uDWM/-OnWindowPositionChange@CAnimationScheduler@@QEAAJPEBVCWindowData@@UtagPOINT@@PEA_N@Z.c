/*
 * XREFs of ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180067B04
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000BA74 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x180097A2C (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowPositionChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagPOINT a3,
        bool *a4)
{
  CAnimationScheduler *v7; // rcx
  signed int v8; // esi
  __int64 v9; // rbx
  const struct CStoryboard *v10; // r15
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v13; // [rsp+60h] [rbp+18h]

  v13 = a3;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  v9 = 0LL;
  for ( *a4 = 0; (unsigned int)v9 < *((_DWORD *)this + 10); v9 = (unsigned int)(v9 + 1) )
  {
    v10 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v9);
    if ( CAnimationScheduler::_ShouldTrack(v7, (HWND *)a2, v10, 0) )
    {
      v8 = CWindowPropertyTracker::OnWindowPositionChange((CAnimationScheduler *)((char *)this + 48), v10, a2, v13);
      LOBYTE(v7) = v8 >= 0;
      *a4 |= v8 >= 0;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v8;
}
