/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x1C0054480
 * Callers:
 *     <none>
 * Callees:
 *     SET_PDO_SWPNPSTATE @ 0x1C000BD7C (SET_PDO_SWPNPSTATE.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhSetPdoPowerState @ 0x1C000D064 (UsbhSetPdoPowerState.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044534 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00450F4 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPdoRemoveCleanup @ 0x1C00548A8 (UsbhPdoRemoveCleanup.c)
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
  __int64 v16; // rdi
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
    v16 = *((_QWORD *)v11 + 147);
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
        UsbhSyncResumeDeviceInternal(v16, v17, DeviceObject, v25);
        UsbhAcquireFdoPwrLock(v16, v17, 137LL, 1148020050LL);
        UsbhSetPdoPowerState(v17, (__int64)DeviceObject, v26, 1, 15);
        UsbhReleaseFdoPwrLock(v16, v17, v27, v28);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 2);
    Usbh_PdoRemove_PdoEvent(v16, (__int64)DeviceObject, v17);
    if ( v6 )
      UsbhDecHubBusy(v16, v29, v6, v30);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg(v16, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
