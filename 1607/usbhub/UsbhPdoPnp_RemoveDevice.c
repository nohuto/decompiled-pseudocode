/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B744 (SET_PDO_SWPNPSTATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028704 (UsbhSyncResumeDeviceInternal.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044874 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045434 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054ED8 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _QWORD *v6; // r15
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  struct _DEVICE_OBJECT *v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  char v33; // [rsp+48h] [rbp-40h]
  int v34; // [rsp+49h] [rbp-3Fh]

  v6 = 0LL;
  v7 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4)[281];
  v11 = PdoExt((__int64)DeviceObject, v8, v9, v10);
  v14 = 0x40000LL;
  v15 = v11;
  if ( (v11[353] & 0x40000) != 0 )
    v16 = 0LL;
  else
    v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)v11 + 147);
  if ( v7 != 6 )
  {
    v17 = (__int64)(v11 + 236);
    if ( (v11[356] & 0x40000) != 0 )
    {
      v18 = *((_QWORD *)v11 + 378);
      v34 = 0;
      v32 = v18;
      v33 = 0;
      ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v32, 13LL, 0LL, 0LL);
      v15[356] &= ~0x40000u;
    }
    if ( v16 )
    {
      UsbhSetPdo_FailIo((__int64)DeviceObject, v14, v12, v13);
      if ( v15[286] == 2 || PdoExt((__int64)DeviceObject, v19, v20, v21)[197] != 1 )
        v6 = (_QWORD *)UsbhIncHubBusy(v16, v17, (__int64)DeviceObject, 1381200755LL, 1);
      if ( PdoExt((__int64)DeviceObject, v22, v23, v24)[197] != 1 )
      {
        UsbhSyncResumeDeviceInternal((__int64)v16, v17, DeviceObject, v25);
        UsbhAcquireFdoPwrLock((__int64)v16, v17, 137LL, 1148020050LL);
        UsbhSetPdoPowerState(v17, (__int64)DeviceObject, v26, 1LL, 15);
        UsbhReleaseFdoPwrLock((__int64)v16, v17, v27, v28);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102LL, 2LL, v13);
    Usbh_PdoRemove_PdoEvent(v16, (__int64)DeviceObject, v17);
    if ( v6 )
      UsbhDecHubBusy((__int64)v16, v29, v6, v30);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg((__int64)v16, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
