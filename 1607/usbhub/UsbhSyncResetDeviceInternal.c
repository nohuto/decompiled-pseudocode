/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C0003774
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0016910 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001B6A8 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0044354 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Usbh_HubRestoreDevice @ 0x1C0003AD4 (Usbh_HubRestoreDevice.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0003B50 (UsbhPCE_QueueDriverReset.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhFreeID @ 0x1C00059B4 (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C0009738 (UsbhLinkPdoDeviceHandle.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000C0C4 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000C21C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000DC70 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C00202C0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     UsbhQueueWorkItemEx @ 0x1C0025074 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C003D9E4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhWaitForBootDevice @ 0x1C0044A00 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // si
  __int64 v10; // r15
  int v11; // edx
  __int64 PortData; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // rbx
  KIRQL v17; // al
  int v18; // edx
  PDEVICE_OBJECT v19; // rcx
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  int v25; // edx
  int v26; // [rsp+48h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0;
  v6 = PdoExt(a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      71,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
        v21,
        72,
        (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
        *(_WORD *)(v6 + 1420),
        a3);
  }
  v7 = FdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v8 = (KSPIN_LOCK *)(v7 + 5168);
  SpinLock = v8;
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *(_QWORD *)(v6 + 864) )
  {
    Log((_DWORD)DeviceObject, 4, 1380214068, 0, *(_QWORD *)(v6 + 864));
    KeReleaseSpinLock(v8, v9);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, 2147483665LL);
    return 2147483665LL;
  }
  else
  {
    *(_DWORD *)(v6 + 872) = -1;
    *(_QWORD *)(v6 + 864) = &Event;
    *(_QWORD *)(v6 + 880) = KeGetCurrentThread();
    KeReleaseSpinLock(v8, v9);
    v10 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
    Log((_DWORD)DeviceObject, 4, 1869374568, 0, v10);
    Usbh_SSH_Event(DeviceObject);
    v11 = *(unsigned __int16 *)(v6 + 1420);
    *(_DWORD *)(v6 + 1412) &= ~0x8000u;
    UsbhPCE_QueueDriverReset((_DWORD)DeviceObject, v11, 0x20000, a2, a3);
    Log((_DWORD)DeviceObject, 4, 1380218740, 0, 0LL);
    PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v6 + 1420));
    UsbhWaitEventWithTimeoutEx(DeviceObject, &Event, 0LL, 1380210548LL, 11, PortData);
    v15 = *(int *)(v6 + 872);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        v14,
        73,
        (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
        a3,
        *(_DWORD *)(v6 + 872));
    if ( (v15 & 0xC0000000) == 0xC0000000 )
    {
      Log((_DWORD)DeviceObject, 4, 1380214124, 0, v15);
      UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v10 )
      {
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
        UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
      }
      if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v15) )
      {
        LOBYTE(v26) = 0;
        UsbhException((int)DeviceObject, *(unsigned __int16 *)(v6 + 1420), 67, 0, 0, v15, -1, usbfile_bus_c, 6726, v26);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          v23,
          74,
          (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
          a3,
          v15);
    }
    else
    {
      UsbhAcquireEnumBusLock(DeviceObject);
      v16 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
      if ( v16 )
      {
        if ( v10 )
        {
          UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
          Log((_DWORD)DeviceObject, 4, 1381192786, v10, v16);
          v15 = (int)Usbh_HubRestoreDevice(DeviceObject, a3, v10, v16);
          if ( *(_BYTE *)(v6 + 2716) )
          {
            if ( (int)v15 >= 0 && (*(_DWORD *)(v6 + 1412) & 0x204) == 0x200 )
            {
              Length[0] = 0LL;
              Length[1] = 0LL;
              UsbhGetSerialNumber((_DWORD)DeviceObject);
              if ( *(_DWORD *)(v6 + 2124) )
                v4 = 1;
              UsbhFreeID(Length);
            }
            if ( (_DWORD)v15 == -1073741823 )
              v4 = 1;
          }
          Log((_DWORD)DeviceObject, 4, 1380217445, 0, v15);
          UsbhDerefPdoDeviceHandle(DeviceObject, v16, a3, 1212446574LL);
          if ( (v15 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v26) = 0;
            UsbhException(
              (int)DeviceObject,
              *(unsigned __int16 *)(v6 + 1420),
              66,
              0,
              0,
              v15,
              -1,
              usbfile_bus_c,
              6805,
              v26);
            LOBYTE(v24) = 1;
            UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, v24);
            UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
          }
        }
        else
        {
          Log((_DWORD)DeviceObject, 4, 1380216684, 0, v15);
          LODWORD(v15) = 0;
          UsbhDerefPdoDeviceHandle(DeviceObject, v16, a3, 1212446574LL);
        }
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1380200497, 0, v10);
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
        UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
        LODWORD(v15) = -1073741823;
      }
      if ( (int)v15 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 2716) )
        {
          if ( !v4 )
          {
            if ( byte_1C0067688 )
            {
              if ( (*(_DWORD *)(v6 + 1412) & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v15) = UsbhQueueWorkItemEx(
                                 (_DWORD)DeviceObject,
                                 1,
                                 (unsigned int)UsbhUpdateRegSurpriseRemovalCount,
                                 (unsigned int)&byte_1C0067688,
                                 *(unsigned __int16 *)(v6 + 1420),
                                 2001555795,
                                 0LL);
                if ( (v15 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C0067688 = 0;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      75,
                      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
                      v15);
                }
              }
            }
          }
        }
      }
      UsbhReleaseEnumBusLockEx(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1420));
      v8 = SpinLock;
    }
    v17 = KeAcquireSpinLockRaiseToDpc(v8);
    *(_QWORD *)(v6 + 864) = 0LL;
    KeReleaseSpinLock(v8, v17);
    if ( v4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          3,
          76,
          (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
          (char)DeviceObject);
      Log((_DWORD)DeviceObject, 4, 1397905220, v15, (__int64)DeviceObject);
      UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          3,
          77,
          (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
          (char)DeviceObject);
        v19 = WPP_GLOBAL_Control;
      }
    }
    else
    {
      v19 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v19->DeviceType) )
      WPP_RECORDER_SF_d(v19->DeviceExtension, 0, 1, 78, (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids, v15);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, (unsigned int)v15);
    return (unsigned int)v15;
  }
}
