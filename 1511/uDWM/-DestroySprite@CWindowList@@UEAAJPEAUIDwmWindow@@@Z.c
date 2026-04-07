/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180035CD8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x18003EBD4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18003F0F0 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x1800825D0 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x1800828C0 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180082980 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  CDwmWinSqm *v7; // rcx
  CTopLevelWindow3D *v8; // rcx
  CWindowData *v10; // rcx
  CDwmWinSqm *v11; // rcx
  CDwmWinSqm *v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v13 = 1637;
    goto LABEL_26;
  }
  v6 = v14;
  if ( v14 )
  {
    if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)v6 + 570) & 0x10) != 0 )
    {
      CDwmWinSqm::AdjustTimeScaledCount(v7);
      --dword_1800BF1F4;
      if ( (*((_DWORD *)v6 + 25) & 0x20000000) != 0 )
        --dword_1800BF1F0;
      if ( CDwmWinSqm::TestCounter(v11) )
        CDwmWinSqm::RecordMinimizedWndRatio(v12);
      *((_BYTE *)v6 + 570) &= ~0x10u;
    }
    v8 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 49);
    LOBYTE(v14) = 1;
    if ( !v8 )
      goto LABEL_7;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v8, (bool *)&v14);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v13 = 1653;
      goto LABEL_26;
    }
    if ( !(_BYTE)v14 )
    {
      *((_BYTE *)v6 + 568) |= 4u;
      if ( !*((_QWORD *)v6 + 50) && !CWindowData::IsImmersiveWindow(v6) )
        CWindowData::SnapshotWindow(v10);
      SyncedWindowData = CGenericSet<CWindowData *>::Add((char *)this + 280, v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v13 = 1672;
LABEL_26:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, v13);
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
        v13 = 1677;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x667u);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v5;
}
