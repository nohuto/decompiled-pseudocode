/*
 * XREFs of UsbhHardReset_Action @ 0x1C004688C
 * Callers:
 *     Usbh_HRS_Queued @ 0x1C0046EEC (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F1F0 (UsbhSyncBusDisconnect.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhHardReset_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 20;
  v6 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 4, 1215460146, 0LL, (__int64)DeviceObject);
  v9 = (_QWORD *)UsbhIncHubBusy(DeviceObject, a2, (__int64)DeviceObject, 1430418024LL, 0);
  if ( *((_BYTE *)v6 + 5268) )
    KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v6 + 5268) )
      _InterlockedExchange(v6 + 1315, 0);
    v10 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v20, v7, v8);
    v11 = v10;
    if ( Usb_Disconnected(v10) )
      break;
    UsbhSyncBusPause((__int64)DeviceObject, a2, 6);
    UsbhSyncBusDisconnect(DeviceObject, a2, v12, v13);
    v6[640] &= ~0x10u;
    LODWORD(v11) = Usbh_SSH_Event(DeviceObject, 4u, a2, v14);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v16 = UsbhFdoSetD0Cold(DeviceObject, a2, 1);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v6[1238] = 0;
      goto LABEL_13;
    }
    LOBYTE(v18) = 0;
    UsbhException((int)DeviceObject, 0, 71, (int)&v19, 4, v16, 0, usbfile_reset_c, 1073, v18);
    if ( (_DWORD)v11 != -1073741637 )
    {
      Log((__int64)DeviceObject, 4, 1215460147, v11, (__int64)DeviceObject);
      ++v6[1238];
      v6[640] |= 0x10u;
      UsbhWait((int)DeviceObject, v19);
      v19 *= 2;
      if ( v6[1238] < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)DeviceObject, 4, 1382314851, v11, v20);
LABEL_13:
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v11) )
    {
      LOBYTE(v18) = 0;
      UsbhException((int)DeviceObject, 0, 126, 0, 0, v11, 0, usbfile_reset_c, 1109, v18);
    }
    if ( *((_BYTE *)v6 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)DeviceObject, v15, v9, v8);
  return (unsigned int)v11;
}
