/*
 * XREFs of ndisMediaDisconnectComplete @ 0x1C00634A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 *     ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z @ 0x1C00124E8 (-NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisMediaDisconnectComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _TlgProvider_t *Context)
{
  KIRQL v5; // al
  KIRQL v6; // si
  int AnnotationFunc_high; // ecx
  enum _DEVICE_POWER_STATE SystemState; // [rsp+40h] [rbp+18h]

  SystemState = PowerState.SystemState;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_q(0x11u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
    PowerState.SystemState = SystemState;
  }
  NdisTraceLoggingCompletedDxState(Context, 0LL, PowerState.DeviceState);
  v5 = KeAcquireSpinLockRaiseToDpc(&Context[1].RegHandle);
  v6 = v5;
  Context[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
  AnnotationFunc_high = HIDWORD(Context[1].AnnotationFunc);
  Context[29].LevelPlus1 = 1704369;
  if ( (AnnotationFunc_high & 0x200) != 0 )
  {
    Context[8].ProviderMetadataPtr = 0LL;
    Context[29].LevelPlus1 = 0;
    HIDWORD(Context[1].AnnotationFunc) = AnnotationFunc_high & 0xFFFFFDFF;
    KeReleaseSpinLock(&Context[1].RegHandle, v5);
    if ( (HIDWORD(Context[1].AnnotationFunc) & 0x800) == 0 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_q(0x13u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
      ndisRequestDevicePowerD0((struct _NDIS_MINIPORT_BLOCK *)Context, NdisMEventD0_D3DCancel);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(0x12u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
    Context[8].ProviderMetadataPtr = 0LL;
    Context[29].LevelPlus1 = 0;
    KeReleaseSpinLock(&Context[1].RegHandle, v6);
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x14u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
}
