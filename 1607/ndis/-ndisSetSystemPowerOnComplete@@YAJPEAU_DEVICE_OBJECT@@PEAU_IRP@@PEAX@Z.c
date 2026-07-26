/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012160
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(
        PDEVICE_OBJECT DeviceObject,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v7; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(60LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3);
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(61LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
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
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(62LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
  return 0LL;
}
