/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00D3570
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *DeferredContext, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  unsigned int PowerCompleteStatus; // ebx
  enum _NDIS_DEVICE_POWER_STATE v10; // r8d
  unsigned int started; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  DeferredContext->PowerCompleteStatus = -1073741637;
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous(DeferredContext, 0LL, v5);
    goto LABEL_15;
  }
  v6 = a2 - 6;
  if ( !v6 )
  {
    started = ndisPnPIrpSurpriseRemoval(v4, (__int64)DeferredContext, 0LL, &v14, &v14);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    started = ndisPnPIrpRemoveDevice(DeferredContext->DeviceObject, DeferredContext, 0LL, (__int64)&v14);
LABEL_15:
    PowerCompleteStatus = started;
    goto LABEL_16;
  }
  v8 = v7 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      PowerCompleteStatus = -1073741811;
      goto LABEL_16;
    }
    v10 = NdisDeviceStateD3;
    _InterlockedOr((volatile signed __int32 *)&DeferredContext->InterlockedFlags, 4u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&DeferredContext->InterlockedFlags, 2u);
    v10 = NdisDeviceStateD0;
  }
  DeferredContext->PowerCompleteEvent = &Event;
  PowerCompleteStatus = ndisSetDevicePower(0LL, 0LL, v10, (__int64)DeferredContext);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  DeferredContext->PowerCompleteEvent = 0LL;
  if ( PowerCompleteStatus == 259 || PowerCompleteStatus == -1073741802 )
    PowerCompleteStatus = DeferredContext->PowerCompleteStatus;
LABEL_16:
  ndisDereferencePackage((__int64)&ndisPkgs);
  return PowerCompleteStatus;
}
