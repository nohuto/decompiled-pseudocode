/*
 * XREFs of ?RemoveSwapchainTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RemoveSwapchainTargetFromWindow(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  CBaseObject *v7; // rcx
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( v9 && (v6 = *((_QWORD *)v9 + 48)) != 0 )
    {
      v7 = *(CBaseObject **)(v6 + 800);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(v6 + 800) = 0LL;
      }
      *(_DWORD *)(v6 + 792) = 0;
      *(_BYTE *)(v6 + 796) = 0;
    }
    else
    {
      v5 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x13CBu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x13C8u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
