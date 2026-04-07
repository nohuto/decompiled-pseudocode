/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001A854 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002A3B8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C3C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032490 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800411C4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180041A80 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x180082DBC (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x180083098 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180083158 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  CDwmWinSqm *v7; // rcx
  CTopLevelWindow3D *v8; // rcx
  CDwmWinSqm *v10; // rcx
  CDwmWinSqm *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v12 = 1482;
    goto LABEL_26;
  }
  v6 = v13;
  if ( v13 )
  {
    if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)v6 + 578) & 0x10) != 0 )
    {
      CDwmWinSqm::AdjustTimeScaledCount(v7);
      --dword_1800BB204;
      if ( (*((_DWORD *)v6 + 25) & 0x20000000) != 0 )
        --dword_1800BB200;
      if ( CDwmWinSqm::TestCounter(v10) )
        CDwmWinSqm::RecordMinimizedWndRatio(v11);
      *((_BYTE *)v6 + 578) &= ~0x10u;
    }
    v8 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 49);
    LOBYTE(v13) = 1;
    if ( !v8 )
      goto LABEL_7;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v8, (bool *)&v13);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v12 = 1494;
      goto LABEL_26;
    }
    if ( !(_BYTE)v13 )
    {
      *((_BYTE *)v6 + 576) |= 4u;
      if ( !*((_QWORD *)v6 + 51) && !CWindowData::IsImmersiveWindow(v6) )
        CWindowData::SnapshotWindow(v6);
      SyncedWindowData = CGenericSet<CWindowData *>::Add((char *)this + 280, v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v12 = 1513;
LABEL_26:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, v12);
        goto LABEL_9;
      }
    }
    else
    {
LABEL_7:
      CWindowList::ImmediateDestroySprite(this, v6);
    }
    if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      SyncedWindowData = CWindowList::DestroyWindow(this, a2);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v12 = 1518;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x5CBu);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
