/*
 * XREFs of UsbhPdoPower_QueryPower @ 0x1C0004320
 * Callers:
 *     <none>
 * Callees:
 *     UsbhStartThisPowerIrp_Pdo @ 0x1C00043EC (UsbhStartThisPowerIrp_Pdo.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000B818 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003D0A8 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhPdoPower_QueryPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v5; // rbp
  int v6; // r8d
  unsigned int Options; // r9d
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rax
  int v11; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  UsbhStartThisPowerIrp_Pdo(*(_QWORD *)(v5 + 1176), a1, a2, 703LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_3;
    v11 = 10;
LABEL_8:
    WPP_RECORDER_SF_dD(
      v8->DeviceExtension,
      *(unsigned __int16 *)(v5 + 1420),
      v6,
      v11,
      (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
      *(_WORD *)(v5 + 1420),
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    goto LABEL_3;
  }
  if ( Options == 1 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 11;
      goto LABEL_8;
    }
  }
LABEL_3:
  v9 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v9 + 1176), a1, a2, 716LL);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
