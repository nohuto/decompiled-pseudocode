/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C009EAEC
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C009DE9C (ndisPnPIrpStartDevice.c)
 *     ndisStartDeviceWorkItem @ 0x1C009E9F0 (ndisStartDeviceWorkItem.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D29F0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006C230 (ndisSelectiveSuspendClearStop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00ACA60 (ndisPnPStartDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CCE50 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CD13C (ndisIMInitializeDeviceInstance_ea_1C00CD13C.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(_QWORD *DeferredContext)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int16 v4; // dx
  __int64 v6; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)DeferredContext);
  v3 = DeferredContext[477];
  v4 = *(_WORD *)(v3 + 26);
  if ( (v4 & 0x21) == 1 )
  {
    *((_DWORD *)DeferredContext + 30) |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v3, DeferredContext + 483, &v8) )
    {
      KeWaitForSingleObject((PVOID)(DeferredContext[477] + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(DeferredContext[477] + 472LL) = KeGetCurrentThread();
      v2 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(DeferredContext[477] + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DeferredContext[477] + 416LL), 0);
    }
  }
  else if ( (v4 & 0x20) == 0 || *(_QWORD **)(v3 + 816) != DeferredContext )
  {
    v2 = ndisPnPStartDevice(DeferredContext);
    if ( v2 )
    {
      v2 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[15] & 0x20000) != 0 )
      {
        v6 = *((int *)DeferredContext + 116);
        if ( !ndisMediaTypeCl[v6] && (_DWORD)v6 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)DeferredContext);
      if ( (*((_DWORD *)DeferredContext + 30) & 0x80u) == 0 && DeferredContext[564] )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x40u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)DeferredContext, v2);
  return v2;
}
