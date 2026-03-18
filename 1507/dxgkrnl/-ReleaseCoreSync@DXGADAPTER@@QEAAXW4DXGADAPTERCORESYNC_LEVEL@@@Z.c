/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C001CE90 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0131390 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C001A5F8 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0092240 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C00BD51C (-ReleaseLocksForStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00BD788 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0127D28 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  ADAPTER_RENDER *v7; // rcx
  __int64 v8; // rcx
  ADAPTER_RENDER *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *v12; // rdx

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v10[3] = 275LL;
    v10[4] = 4LL;
    v10[5] = a1;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  switch ( (_DWORD)v2 )
  {
    case 1:
      goto LABEL_4;
    case 2:
      goto LABEL_10;
    case 3:
LABEL_4:
      if ( *(_BYTE *)(a1 + 166) )
      {
        *(_BYTE *)(a1 + 166) = 0;
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)a1);
        DXGADAPTER::ReleaseLocksForStop((DXGADAPTER *)a1);
      }
      else
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)a1);
      }
      goto LABEL_6;
    case 5:
      v9 = *(ADAPTER_RENDER **)(a1 + 1984);
      if ( v9 )
        ADAPTER_RENDER::RestoreFromPurgeSegments(v9, 0);
LABEL_10:
      v8 = *(_QWORD *)(a1 + 1984);
      if ( v8 )
        ADAPTER_RENDER::FlushScheduler(v8, 7LL, 0xFFFFFFFFLL, 0LL);
      if ( *(_DWORD *)(a1 + 120) == 1 )
      {
        DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
        *(_DWORD *)(a1 + 120) = 0;
        *(_DWORD *)(a1 + 2452) = 0;
        DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
        if ( *(_QWORD *)(a1 + 2368) )
          DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)a1, v12);
      }
      goto LABEL_4;
  }
  v11 = WdLogNewEntry5_WdError((unsigned int)(v2 - 3));
  *(_QWORD *)(v11 + 24) = v2;
  WdLogEvent5_WdError(v11);
LABEL_6:
  v7 = *(ADAPTER_RENDER **)(a1 + 1984);
  if ( v7 )
    ADAPTER_RENDER::EnableClockCalibration(v7, 1u);
}
