/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00E09D0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00E0B40 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00E0BB0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0167480 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  bool v8; // zf
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 3158LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_25;
  if ( (int)v2 <= 3 )
  {
    v5 = *(_QWORD *)(a1 + 2136);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8, 0xFFFFFFFF, 0);
    v6 = *(ADAPTER_DISPLAY **)(a1 + 2128);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v6, *(struct ADAPTER_RENDER **)(a1 + 2136));
    v7 = *(ADAPTER_RENDER **)(a1 + 2136);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = *(_DWORD *)(a1 + 136) == 1;
        v9 = 4;
        v10 = 32;
      }
      else
      {
        v9 = 0;
        v10 = 2;
        v8 = (_DWORD)v2 == 2;
      }
      if ( v8 )
        v9 = v10;
      v11 = v9 | 1;
      if ( *(_BYTE *)(a1 + 184) )
        v11 |= 0x40u;
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2136), 9, 0xFFFFFFFF, 0);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
      {
        if ( *(_BYTE *)(a1 + 2091) )
        {
          memset(v15, 0, 0x28uLL);
          v15[4] = g_TdrRecoveryInProgress;
          *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(v15);
        }
      }
      ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 2136), v11, 0LL);
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
LABEL_25:
    v14 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v14 + 24) = v2;
    WdLogEvent5_WdError(v14);
    return;
  }
  v13 = *(_QWORD *)(a1 + 2136);
  if ( v13 )
    ADAPTER_RENDER::FlushScheduler(v13, 6, 0xFFFFFFFF, 0);
}
