/*
 * XREFs of ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180070B8C
 * Callers:
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F4CC (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18000ABC0 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000ABF8 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowPropertyTracker::StopTrackingWindowImmediately(CWindowPropertyTracker *this, HWND a2)
{
  signed int Record; // eax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, Record);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
}
