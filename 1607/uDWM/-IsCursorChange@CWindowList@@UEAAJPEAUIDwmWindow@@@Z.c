/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180020AE4 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  char v7; // al
  CVisual *v8; // rcx
  struct CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x1637u);
  }
  else
  {
    v6 = v10;
    if ( v10 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
      *((_BYTE *)v6 + 580) &= ~2u;
      *((_BYTE *)v6 + 580) |= 2 * (v7 & 1);
      v8 = (CVisual *)*((_QWORD *)v6 + 48);
      if ( v8 )
        CVisual::SetIsCursor(v8, (*((_BYTE *)v6 + 580) & 2) != 0);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
