/*
 * XREFs of UsbhFdoPnp_RemoveDevice @ 0x1C004B320
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001E0A0 (Usbh_FDO_Pnp_State.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x1C004B684 (UsbhReleaseHubNumber.c)
 *     UsbhSshDisabled @ 0x1C0056334 (UsbhSshDisabled.c)
 */

__int64 __fastcall UsbhFdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  unsigned int v12; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi

  Log((__int64)DeviceObject, 2, 1716667725, 0LL, (__int64)Irp);
  v8 = FdoExt((__int64)DeviceObject, v4, v5, v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
  v11 = FdoExt((__int64)DeviceObject, v7, v9, v10);
  UsbhSshDisabled(DeviceObject, v11 + 346);
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, &File, 1u, 0x20u);
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v12;
    IofCompleteRequest(Irp, 0);
    return v12;
  }
  else
  {
    Log((__int64)DeviceObject, 2, 1769174128, 0LL, 0LL);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v17 = FdoExt((__int64)DeviceObject, v14, v15, v16);
      if ( *((_QWORD *)v17 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64))v17 + 554))(*((_QWORD *)v17 + 529), 0LL, 5LL);
    }
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
    v21 = FdoExt((__int64)DeviceObject, v18, v19, v20);
    Usbh_FDO_Pnp_State((__int64)(v21 + 346), 2u, v22, v23);
    UsbhReleaseHubNumber(DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v24 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), Irp);
    if ( v8[1221] )
      KeWaitForSingleObject(v8 + 1224, Executive, 0, 0, 0LL);
    IoDetachDevice(*((PDEVICE_OBJECT *)v8 + 151));
    IoDeleteDevice(DeviceObject);
    return v24;
  }
}
