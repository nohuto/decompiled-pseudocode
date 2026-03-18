/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00BD5B8
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0093DB8 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00BD8A8 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ADAPTER_DISPLAY *v9; // rcx
  ADAPTER_RENDER *v10; // rcx
  bool v11; // zf
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v15 + 24) = 13143LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_22;
  if ( (int)v2 <= 3 )
  {
    v8 = *(_QWORD *)(a1 + 1984);
    if ( v8 )
      ADAPTER_RENDER::FlushScheduler(v8, 8, 0xFFFFFFFF, 0);
    v9 = *(ADAPTER_DISPLAY **)(a1 + 1976);
    if ( v9 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v9, *(struct ADAPTER_RENDER **)(a1 + 1984));
    v10 = *(ADAPTER_RENDER **)(a1 + 1984);
    if ( v10 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v10);
      if ( (_DWORD)v2 == 3 )
      {
        v11 = *(_DWORD *)(a1 + 120) == 1;
        v12 = 4;
        v13 = 32;
      }
      else
      {
        v12 = 0;
        v13 = 2;
        v11 = (_DWORD)v2 == 2;
      }
      if ( v11 )
        v12 = v13;
      v14 = v12 | 1;
      if ( *(_BYTE *)(a1 + 168) )
        v14 |= 0x40u;
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 1984), 6, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 1984), v14, 0LL);
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
LABEL_22:
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = v2;
    WdLogEvent5_WdError(v17);
    return;
  }
  v16 = *(_QWORD *)(a1 + 1984);
  if ( v16 )
    ADAPTER_RENDER::FlushScheduler(v16, 6, 0xFFFFFFFF, 0);
}
