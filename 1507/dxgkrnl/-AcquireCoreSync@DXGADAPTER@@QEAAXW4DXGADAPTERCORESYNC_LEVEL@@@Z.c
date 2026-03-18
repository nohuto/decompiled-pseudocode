/*
 * XREFs of ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C
 * Callers:
 *     ?DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C001CE70 (-DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01312E0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0092240 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z @ 0x1C00BD548 (-AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C011F4D4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::AcquireCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  ADAPTER_RENDER *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  v2 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = a1;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( !KeReadStateEvent((PRKEVENT)(a1 + 32)) )
  {
    if ( (_DWORD)v2 == 4 )
      return;
    KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, 0LL);
  }
  switch ( (_DWORD)v2 )
  {
    case 1:
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a1);
      break;
    case 2:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2, 1);
      v8 = *(_QWORD *)(a1 + 1984);
      if ( v8 )
        ADAPTER_RENDER::FlushScheduler(v8, 6LL, 0xFFFFFFFFLL, 0LL);
      break;
    case 3:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2, 1);
      break;
    case 4:
      DXGADAPTER::AcquireLocksForPowerStateD3transition((DXGADAPTER *)a1);
      break;
    case 6:
      DXGADAPTER::AcquireLocksForStop((DXGADAPTER *)a1, 0);
      *(_BYTE *)(a1 + 166) = 1;
      break;
    default:
      v10 = WdLogNewEntry5_WdError((unsigned int)(v2 - 4));
      *(_QWORD *)(v10 + 24) = v2;
      WdLogEvent5_WdError(v10);
      break;
  }
  v7 = *(ADAPTER_RENDER **)(a1 + 1984);
  if ( v7 && (_DWORD)v2 == 6 || (_DWORD)v2 == 4 )
    ADAPTER_RENDER::EnableClockCalibration(v7, 0);
}
