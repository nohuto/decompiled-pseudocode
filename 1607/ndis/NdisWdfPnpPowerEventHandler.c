/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00D29F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006C230 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C006C56C (ndisSelectiveSuspendStop.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int PowerCompleteStatus; // ebx
  enum _NDIS_DEVICE_POWER_STATE v11; // r8d
  unsigned int started; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  a1->PowerCompleteStatus = -1073741637;
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous(a1);
    goto LABEL_22;
  }
  v5 = a2 - 6;
  if ( !v5 )
  {
    started = ndisPnPIrpSurpriseRemoval(v4, (__int64)a1, 0LL, &v15, &v15);
    goto LABEL_22;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, (__int64)&v15);
LABEL_22:
    PowerCompleteStatus = started;
    goto LABEL_23;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          PowerCompleteStatus = -1073741811;
          goto LABEL_23;
        }
        if ( a1->SelectiveSuspend )
          ndisSelectiveSuspendStop(a1, 9);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisSelectiveSuspendClearStop((__int64)a1, 9);
      }
      PowerCompleteStatus = 0;
      goto LABEL_23;
    }
    v11 = NdisDeviceStateD3;
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    v11 = NdisDeviceStateD0;
  }
  a1->PowerCompleteEvent = &Event;
  PowerCompleteStatus = ndisSetDevicePower(0LL, 0LL, v11, (__int64)a1);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  a1->PowerCompleteEvent = 0LL;
  if ( PowerCompleteStatus == 259 || PowerCompleteStatus == -1073741802 )
    PowerCompleteStatus = a1->PowerCompleteStatus;
LABEL_23:
  ndisDereferencePackage((__int64)&ndisPkgs);
  return PowerCompleteStatus;
}
