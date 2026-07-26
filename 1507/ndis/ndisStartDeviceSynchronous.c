/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00AC4C4
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C009FF2C (ndisPnPIrpStartDevice.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AC570 (ndisStartDeviceWorkItem.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D3570 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0068720 (ndisSelectiveSuspendClearStop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CE160 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(_QWORD *DeferredContext, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int16 v7; // dx
  __int64 v9; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)DeferredContext);
  v6 = DeferredContext[477];
  v7 = *(_WORD *)(v6 + 26);
  if ( (v7 & 0x21) == 1 )
  {
    *((_DWORD *)DeferredContext + 30) |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v6, DeferredContext + 483, &v11) )
    {
      KeWaitForSingleObject((PVOID)(DeferredContext[477] + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(DeferredContext[477] + 472LL) = KeGetCurrentThread();
      v5 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(DeferredContext[477] + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DeferredContext[477] + 416LL), 0);
    }
  }
  else if ( (v7 & 0x20) == 0 || *(_QWORD **)(v6 + 816) != DeferredContext )
  {
    v5 = ndisPnPStartDevice((char *)DeferredContext, a2, a3);
    if ( v5 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[15] & 0x20000) != 0 )
      {
        v9 = *((int *)DeferredContext + 116);
        if ( !ndisMediaTypeCl[v9] && (_DWORD)v9 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(
        (struct _NDIS_MINIPORT_BLOCK *)DeferredContext,
        1,
        Reason_RemovingMiniport|Reason_DriverNotReady,
        RunSynchronous);
      if ( DeferredContext[564] )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x40u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)DeferredContext, v5);
  return v5;
}
