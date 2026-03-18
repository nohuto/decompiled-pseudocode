/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C0019CD4
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C001DCE0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C001DF80 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C001E290 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C001E580 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C001E940 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C001EAB0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001F4A0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001F630 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     TR_WdfEvtCleanupCallback @ 0x1C00256E0 (TR_WdfEvtCleanupCallback.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C002DD40 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C0032CA0 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0032DE0 (Crashdump_UcxEvtGetDumpData.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C004DAF8 (Command_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C0052EE4 (Command_ReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C00544D0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_ReleaseHardware @ 0x1C0054644 (DeviceSlot_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0055768 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  int v6; // edx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  *(_QWORD *)(a2 + 72) = 0LL;
  v5 = v4;
  *(_DWORD *)(a2 + 64) = 0;
  v6 = *(_DWORD *)(a2 + 40);
  if ( v6 == 512 )
  {
    v7 = (_QWORD *)(a1 + 168);
    v8 = *(_QWORD *)(a1 + 168);
    if ( *(_QWORD *)(v8 + 8) != a1 + 168 )
      __fastfail(3u);
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(v8 + 8) = a2;
    *v7 = a2;
    ++*(_DWORD *)(a1 + 164);
  }
  else if ( v6 == 4096 )
  {
    v9 = (_QWORD *)(a1 + 128);
    v10 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(v10 + 8) != a1 + 128 )
      __fastfail(3u);
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a2;
    *v9 = a2;
    ++*(_DWORD *)(a1 + 116);
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      7u,
      0x1Eu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      *(_DWORD *)(a2 + 40));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v5);
}
