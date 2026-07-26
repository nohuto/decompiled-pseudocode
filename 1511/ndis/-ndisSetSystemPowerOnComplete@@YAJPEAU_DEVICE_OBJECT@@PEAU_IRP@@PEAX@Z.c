/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(
        PDEVICE_OBJECT DeviceObject,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v7; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(59LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3);
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(60LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v7,
        (unsigned int)&SystemPowerOnComplete,
        (_DWORD)a3 + 4064,
        (_DWORD)a3 + 4064,
        a3->IfIndex,
        a3->NetLuid.Value,
        CurrentStackLocation->Parameters.Create.Options,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(61LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
  return 0LL;
}
