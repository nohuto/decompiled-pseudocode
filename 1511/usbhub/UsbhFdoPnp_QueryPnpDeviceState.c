/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0026A00
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  int v9; // [rsp+48h] [rbp-10h]

  v6 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  Log(a1, 2, 1934650960, *((unsigned int *)v6 + 643), (__int64)a2);
  v7 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
    v7 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v6 + 643) )
  {
    if ( LOWORD(v7->DeviceType) )
      WPP_RECORDER_SF_d(
        v7->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids,
        *((_DWORD *)v6 + 643));
    a2->IoStatus.Information |= *((unsigned int *)v6 + 643);
    LOBYTE(v9) = 0;
    a2->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, (_DWORD)a2 + 56, 8, 0, 0, usbfile_pnp_c, 2267, v9);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v6[151], a2);
}
