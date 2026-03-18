/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x1C00544B0
 * Callers:
 *     <none>
 * Callees:
 *     SET_PDO_SWPNPSTATE @ 0x1C00084E0 (SET_PDO_SWPNPSTATE.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0021280 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0029084 (UsbhSyncResumeDeviceInternal.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044404 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054970 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r15
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  struct _DEVICE_OBJECT *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r9
  _QWORD v31[2]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0LL;
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
      v31[0] = *((_QWORD *)v11 + 377);
      memset(&v31[1], 0, 5);
      ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, v31, 13LL, 0LL, 0LL);
      v15[356] &= ~0x40000u;
    }
    if ( (v15[356] & 0x80000) != 0 )
    {
      v31[0] = v15;
      LOWORD(v31[1]) = 0;
      BYTE2(v31[1]) = 0;
      ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_DEVICE_STATE, v31, 11LL, 0LL, 0LL);
      v15[356] &= ~0x80000u;
    }
    if ( v16 )
    {
      UsbhSetPdo_FailIo((__int64)DeviceObject, v14, v12, v13);
      if ( v15[286] == 2 || PdoExt((__int64)DeviceObject, v18, v19, v20)[197] != 1 )
        v5 = (_QWORD *)UsbhIncHubBusy(v16, v17, (__int64)DeviceObject, 1381200755LL, 1);
      if ( PdoExt((__int64)DeviceObject, v21, v22, v23)[197] != 1 )
      {
        UsbhSyncResumeDeviceInternal((__int64)v16, v17, DeviceObject, v24);
        UsbhAcquireFdoPwrLock((__int64)v16, v17, 137LL, 1148020050LL);
        UsbhSetPdoPowerState(v17, (__int64)DeviceObject, v25, 1LL, 15);
        UsbhReleaseFdoPwrLock((__int64)v16, v17, v26, v27);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 2);
    Usbh_PdoRemove_PdoEvent(v16, (__int64)DeviceObject, v17);
    if ( v5 )
      UsbhDecHubBusy((__int64)v16, v28, v5, v29);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg((__int64)v16, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
