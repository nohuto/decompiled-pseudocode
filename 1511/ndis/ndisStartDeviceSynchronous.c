/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00AA688
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C009BC58 (ndisPnPIrpStartDevice.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AA620 (ndisStartDeviceWorkItem.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00CCD00 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00677D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00AA734 (ndisPnPStartDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00C7570 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00C785C (ndisIMInitializeDeviceInstance_ea_1C00C785C.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  unsigned __int16 Flags; // dx
  __int64 MediaType; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
  DriverHandle = a1->DriverHandle;
  Flags = DriverHandle->Flags;
  if ( (Flags & 0x21) == 1 )
  {
    a1->Flags |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(DriverHandle, &a1->MiniportName, &v8) )
    {
      KeWaitForSingleObject(&a1->DriverHandle->IMStartRemoveMutex, Executive, 0, 0, 0LL);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
      v2 = ndisIMInitializeDeviceInstance(a1);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&a1->DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  else if ( (Flags & 0x20) == 0 || DriverHandle->CompositeBusDefaultMiniport != a1 )
  {
    v2 = ndisPnPStartDevice(a1);
    if ( v2 )
    {
      v2 = -1073741823;
    }
    else
    {
      if ( (a1->Flags & 0x20000) != 0 )
      {
        MediaType = a1->MediaType;
        if ( !ndisMediaTypeCl[MediaType] && (_DWORD)MediaType != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)a1, 9);
    }
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x40u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1, v2);
  return v2;
}
