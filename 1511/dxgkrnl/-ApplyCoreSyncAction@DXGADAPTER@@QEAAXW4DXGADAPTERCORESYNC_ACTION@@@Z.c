/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00CC154
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00CC404 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC714 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
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

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 13510LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_22;
  if ( (int)v2 <= 3 )
  {
    v5 = *(_QWORD *)(a1 + 1992);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8, 0xFFFFFFFF, 0);
    v6 = *(ADAPTER_DISPLAY **)(a1 + 1984);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v6, *(struct ADAPTER_RENDER **)(a1 + 1992));
    v7 = *(ADAPTER_RENDER **)(a1 + 1992);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = *(_DWORD *)(a1 + 120) == 1;
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
      if ( *(_BYTE *)(a1 + 168) )
        v11 |= 0x40u;
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 1992), 6, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 1992), v11, 0LL);
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
LABEL_22:
    v14 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v14 + 24) = v2;
    WdLogEvent5_WdError(v14);
    return;
  }
  v13 = *(_QWORD *)(a1 + 1992);
  if ( v13 )
    ADAPTER_RENDER::FlushScheduler(v13, 6, 0xFFFFFFFF, 0);
}
