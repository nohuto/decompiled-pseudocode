/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C0063290
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisCompleteWaitWake @ 0x1C0063200 (ndisCompleteWaitWake.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi

  Status = IoStatus->Status;
  LOBYTE(DeviceObject) = byte_1C00895D5;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_qqd(0x1Au, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context, Context->WaitWakeIrp, IoStatus->Status);
    LOBYTE(DeviceObject) = byte_1C00895D5;
  }
  if ( Status < 0 )
  {
    if ( (unsigned __int8)DeviceObject >= 4u )
      WPP_SF_qD(0x1Eu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context, Status);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqqq(
        DeviceObject,
        &WaitWakeIrpFailed,
        &Context->InterfaceGuid,
        (unsigned __int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        Status,
        34,
        0);
  }
  else
  {
    if ( (unsigned __int8)DeviceObject >= 4u )
    {
      WPP_SF_q(0x1Bu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
      LOBYTE(DeviceObject) = byte_1C00895D5;
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      Template_jqxq(
        DeviceObject,
        &WaitWakeComplete,
        &Context->InterfaceGuid,
        (unsigned __int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        238);
      LOBYTE(DeviceObject) = byte_1C00895D5;
    }
    if ( (Context->PnPFlags & 0x800) != 0 || (unsigned int)(Context->CurrentDevicePowerState - 2) > 2 )
    {
      if ( (unsigned __int8)DeviceObject >= 4u )
        WPP_SF_q(0x1Du, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
      if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
        Template_jqxq(
          DeviceObject,
          &WakeByMiniport,
          &Context->InterfaceGuid,
          (unsigned __int64)&Context->InterfaceGuid,
          Context->IfIndex,
          Context->NetLuid.Value,
          17);
    }
    else
    {
      if ( (unsigned __int8)DeviceObject >= 4u )
        WPP_SF_q(0x1Cu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          DeviceObject,
          &MiniportPoweringUp,
          &Context->InterfaceGuid,
          (unsigned __int64)&Context->InterfaceGuid,
          Context->IfIndex,
          Context->NetLuid.Value,
          251);
      ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DWake);
    }
  }
  ndisCompleteWaitWake((__int64)Context);
}
