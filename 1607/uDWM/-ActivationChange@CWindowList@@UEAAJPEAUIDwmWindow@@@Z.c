/*
 * XREFs of ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E010
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x18001B144 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ActivationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  char v7; // al
  CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0xF14u);
  }
  else
  {
    v6 = v9;
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)v6 + 576) &= ~2u;
      *((_BYTE *)v6 + 576) |= 2 * (v7 & 1);
      CWindowData::OnWindowStyleUpdated(v6);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
