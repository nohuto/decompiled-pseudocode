/*
 * XREFs of ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180070490
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180003610 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180005EA8 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowPositionChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagPOINT a3,
        bool *a4)
{
  CAnimationScheduler *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  const struct CStoryboard *v10; // rbp
  _QWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v17; // [rsp+90h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  v9 = 0LL;
  for ( *a4 = 0; (unsigned int)v9 < *((_DWORD *)this + 10); v9 = (unsigned int)(v9 + 1) )
  {
    v10 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v9);
    if ( CAnimationScheduler::_ShouldTrack(v7, (HWND *)a2, v10, 0) )
    {
      v18 = &CDesktopManager::s_csDwmInstance;
      v11 = (_QWORD *)((char *)this + 48);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v12 = CWindowPropertyTracker::_EnsureRecordExists((CAnimationScheduler *)((char *)this + 48), v10, a2, &v16);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v13 = (unsigned int)v16;
        *(struct tagPOINT *)(*(_QWORD *)(*v11 + 8LL * (unsigned int)v16) + 104LL) = v17;
        *(_DWORD *)(*(_QWORD *)(*v11 + 8 * v13) + 40LL) |= 4u;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x35u);
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
      LOBYTE(v7) = v8 >= 0;
      *a4 |= v8 >= 0;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return (unsigned int)v8;
}
