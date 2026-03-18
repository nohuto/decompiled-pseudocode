/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C001D504
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C0020E04 (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021450 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00216F0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C00219F0 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0021CD0 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0022050 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00221B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0022B70 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0022CF0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0023FE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0024C70 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0024F20 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     TR_WdfEvtCleanupCallback @ 0x1C0028A50 (TR_WdfEvtCleanupCallback.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0030A70 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C00357B0 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C00358F0 (Crashdump_UcxEvtGetDumpData.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00491C0 (Interrupter_PrepareInterrupter.c)
 *     Command_PrepareHardware @ 0x1C004B4E0 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C004F1D4 (Command_ReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0050700 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_ReleaseHardware @ 0x1C005086C (DeviceSlot_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0051AD8 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  *(_QWORD *)(a2 + 72) = 0LL;
  v5 = v4;
  *(_DWORD *)(a2 + 64) = 0;
  v6 = *(_DWORD *)(a2 + 40);
  if ( v6 == 512 )
  {
    v7 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 8) = a1 + 168;
    if ( *(_QWORD *)(v7 + 8) != a1 + 168 )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = a2;
    *(_QWORD *)(a1 + 168) = a2;
    ++*(_DWORD *)(a1 + 164);
  }
  else if ( v6 == 4096 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = a1 + 128;
    if ( *(_QWORD *)(v8 + 8) != a1 + 128 )
      __fastfail(3u);
    *(_QWORD *)(v8 + 8) = a2;
    *(_QWORD *)(a1 + 128) = a2;
    ++*(_DWORD *)(a1 + 116);
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      7u,
      0x1Eu,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      *(_DWORD *)(a2 + 40));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v5);
}
