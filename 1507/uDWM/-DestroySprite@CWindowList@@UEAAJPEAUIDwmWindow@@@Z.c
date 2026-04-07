/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180008598 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180008AD0 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180018458 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180027994 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC90 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007ABA4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007AE94 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007AF54 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
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
    v12 = 1645;
    goto LABEL_26;
  }
  v6 = v13;
  if ( !v13 )
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x66Fu);
    goto LABEL_9;
  }
  if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)v6 + 554) & 0x10) != 0 )
  {
    CDwmWinSqm::AdjustTimeScaledCount(v7);
    --dword_1800BD1E4;
    if ( (*((_DWORD *)v6 + 25) & 0x20000000) != 0 )
      --dword_1800BD1E0;
    if ( CDwmWinSqm::TestCounter(v10) )
      CDwmWinSqm::RecordMinimizedWndRatio(v11);
    *((_BYTE *)v6 + 554) &= ~0x10u;
  }
  v8 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 47);
  LOBYTE(v13) = 1;
  if ( !v8 )
    goto LABEL_7;
  SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v8, (bool *)&v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v12 = 1661;
    goto LABEL_26;
  }
  if ( (_BYTE)v13 )
  {
LABEL_7:
    CWindowList::ImmediateDestroySprite(this, v6);
    goto LABEL_8;
  }
  *((_BYTE *)v6 + 552) |= 4u;
  if ( !*((_QWORD *)v6 + 48) && !CWindowData::IsImmersiveWindow(v6) )
    CWindowData::SnapshotWindow(v6);
  SyncedWindowData = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 280), (__int64)v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v12 = 1680;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, v12);
    goto LABEL_9;
  }
LABEL_8:
  if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    SyncedWindowData = CWindowList::DestroyWindow(this, a2);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v12 = 1685;
      goto LABEL_26;
    }
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
