/*
 * XREFs of ndisRequestedDevicePowerIrpComplete @ 0x1C00107B0
 * Callers:
 *     ndisSetSystemPower @ 0x1C009B6DC (ndisSetSystemPower.c)
 * Callees:
 *     ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C001089C (-NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     Template_qq @ 0x1C0049538 (Template_qq.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B078 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _IO_STATUS_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  unsigned __int64 Information; // rbp
  struct _NDIS_MINIPORT_BLOCK *v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ecx

  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(55LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, DeviceObject);
  Information = Context[11].Information;
  v8 = *(struct _NDIS_MINIPORT_BLOCK **)(*(_QWORD *)(Information + 40) + 64LL);
  Context[3] = *IoStatus;
  NdisTraceLoggingCompletedDxState(v8, IoStatus->Status);
  if ( IoStatus->Status < 0 )
  {
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
      WPP_SF_q(57LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, DeviceObject);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&v8->MiniportOwner);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_qqq(
        v11,
        (unsigned int)&IrpSetPowerFailed,
        (unsigned int)&NDIS_PROVIDER_ID,
        IoStatus->Status,
        103,
        (char)DeviceObject);
    IofCompleteRequest((PIRP)Context, 0);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_qD(
        56LL,
        &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids,
        DeviceObject,
        *(unsigned int *)(Information + 24));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_qq(v9, &PowerIrpComplete, &NDIS_PROVIDER_ID, (unsigned int)DeviceObject, *(_DWORD *)(Information + 24));
    PoSetPowerState(*(PDEVICE_OBJECT *)(Information + 40), SystemPowerState, *(POWER_STATE *)(Information + 24));
    v10 = Context[11].Information;
    *(_OWORD *)(v10 - 72) = *(_OWORD *)v10;
    *(_OWORD *)(v10 - 56) = *(_OWORD *)(v10 + 16);
    *(_OWORD *)(v10 - 40) = *(_OWORD *)(v10 + 32);
    *(_QWORD *)(v10 - 24) = *(_QWORD *)(v10 + 48);
    *(_BYTE *)(v10 - 69) = 0;
    IofCallDriver(v8->NextDeviceObject, (PIRP)Context);
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(58LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, DeviceObject);
}
