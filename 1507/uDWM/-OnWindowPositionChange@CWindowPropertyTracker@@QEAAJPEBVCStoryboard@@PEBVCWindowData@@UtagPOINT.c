/*
 * XREFs of ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x180097A2C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180067B04 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180009AA0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowPositionChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        struct tagPOINT a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp-10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (unsigned int)v11;
    *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v11) + 100LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v9) + 40LL) |= 4u;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x35u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v8;
}
