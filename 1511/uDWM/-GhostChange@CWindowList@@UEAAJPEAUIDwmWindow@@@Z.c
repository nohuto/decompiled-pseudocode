/*
 * XREFs of ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180040BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::GhostChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v7; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v7);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1277u);
  else
    *((_BYTE *)v7 + 568) |= 0x40u;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
