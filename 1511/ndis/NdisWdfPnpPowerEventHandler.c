/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00CCD00
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  unsigned int PowerCompleteStatus; // ebx
  enum _NDIS_DEVICE_POWER_STATE v9; // r8d
  unsigned int started; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  a1->PowerCompleteStatus = -1073741637;
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous(a1);
    goto LABEL_15;
  }
  v5 = a2 - 6;
  if ( !v5 )
  {
    started = ndisPnPIrpSurpriseRemoval(v4, (__int64)a1, 0LL, &v13, &v13);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, (__int64)&v13);
LABEL_15:
    PowerCompleteStatus = started;
    goto LABEL_16;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      PowerCompleteStatus = -1073741811;
      goto LABEL_16;
    }
    v9 = NdisDeviceStateD3;
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    v9 = NdisDeviceStateD0;
  }
  a1->PowerCompleteEvent = &Event;
  PowerCompleteStatus = ndisSetDevicePower(0LL, 0LL, v9, (__int64)a1);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  a1->PowerCompleteEvent = 0LL;
  if ( PowerCompleteStatus == 259 || PowerCompleteStatus == -1073741802 )
    PowerCompleteStatus = a1->PowerCompleteStatus;
LABEL_16:
  ndisDereferencePackage((__int64)&ndisPkgs);
  return PowerCompleteStatus;
}
