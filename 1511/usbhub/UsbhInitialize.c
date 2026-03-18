/*
 * XREFs of UsbhInitialize @ 0x1C000F6C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhInitializeTtHub @ 0x1C000503C (UsbhInitializeTtHub.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0006538 (UsbhGetHubDeviceInformation.c)
 *     UsbhCheckHubErrata @ 0x1C00075B8 (UsbhCheckHubErrata.c)
 *     UsbhRegisterPowerCallback @ 0x1C0009E20 (UsbhRegisterPowerCallback.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
 *     UsbhGetHubPowerStatus @ 0x1C001CA44 (UsbhGetHubPowerStatus.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001CC20 (UsbhGetHubClassDescriptor.c)
 *     UsbhConfigureUsbHub @ 0x1C001D394 (UsbhConfigureUsbHub.c)
 *     UsbhGetTopOfBusStack @ 0x1C001E2F0 (UsbhGetTopOfBusStack.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhGetHubCount @ 0x1C001F5F8 (UsbhGetHubCount.c)
 *     UsbhGetExtendedHubInformation @ 0x1C0022C30 (UsbhGetExtendedHubInformation.c)
 *     UsbhQueryParentHubConfig @ 0x1C0024FC4 (UsbhQueryParentHubConfig.c)
 *     Usbh_UsbdQueryContollerType @ 0x1C0026B70 (Usbh_UsbdQueryContollerType.c)
 *     UsbhIsHighSpeedCapable @ 0x1C0027224 (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x1C003C578 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitialize(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rbx
  __int16 v6; // r9
  unsigned int TopOfBusStack; // esi
  unsigned int HubCount; // esi
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned __int16 v12; // r10
  unsigned int ExtendedHubInformation; // esi
  __int64 v14; // rax
  char *Src; // rax
  int v16; // r9d
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 8, 1749634633, 0, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack(DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(
      (int)DeviceObject,
      TopOfBusStack,
      3,
      5474,
      (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "GetRootHubPdo");
    return TopOfBusStack;
  }
  HubCount = UsbhGetHubCount(DeviceObject, &v17);
  if ( (HubCount & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v16 = 5485;
LABEL_40:
    UsbhLogStartFailure((int)DeviceObject, HubCount, 3, v16, (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return HubCount;
  }
  if ( v17 <= 6 )
  {
    HubCount = UsbhGetHubDeviceInformation((__int64)DeviceObject, a2);
    if ( (HubCount & 0xC0000000) == 0xC0000000 )
    {
      Src = "GetHubDeviceInformation";
      v16 = 5502;
    }
    else
    {
      if ( *(_DWORD *)(v5 + 2532) == 1 )
      {
        if ( *(_DWORD *)(v5 + 2536) == 2 )
          *(_DWORD *)(v5 + 2560) |= 0x40u;
        if ( (unsigned __int8)UsbhIsHighSpeedCapable(DeviceObject) )
          *(_DWORD *)(v5 + 2560) |= 0x8000u;
      }
      UsbhCheckHubErrata(v5);
      HubCount = UsbhConfigureUsbHub((_DWORD)DeviceObject);
      if ( (HubCount & 0xC0000000) != 0xC0000000 )
      {
        do
        {
          result = UsbhGetHubClassDescriptor((_DWORD)DeviceObject, (void *)(v5 + 2936));
          v10 = result;
          if ( (_DWORD)result == -1073741810 || (_DWORD)result == -1073741667 )
            return result;
          v11 = (unsigned int)result >> 30;
          if ( (unsigned int)result >> 30 == 3 && v4 > 3 )
          {
            UsbhLogStartFailure(
              (int)DeviceObject,
              result,
              3,
              5554,
              (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "GetHubClassDescriptor");
            return v10;
          }
          if ( v4 )
            UsbhWait(DeviceObject, 10LL);
          ++v4;
        }
        while ( v11 == 3 );
        Log((_DWORD)DeviceObject, 8, 1749634633, *(unsigned __int16 *)(v5 + 2939), *(unsigned __int16 *)(v5 + 2552));
        if ( *(_WORD *)(v5 + 2542) >= 0x200u )
        {
          if ( (v12 & 1) != 0 )
            *(_BYTE *)(v5 + 3007) = 1;
          if ( (v12 & 8) != 0 )
            *(_BYTE *)(v5 + 3009) = 1;
          if ( (v12 & 0x80u) != 0 )
            *(_BYTE *)(v5 + 3008) = 1;
          if ( (*(_DWORD *)(v5 + 2560) & 0x40) != 0 )
          {
            switch ( (v12 >> 5) & 3 )
            {
              case 0:
LABEL_28:
                *(_DWORD *)(v5 + 3012) = 8;
                break;
              case 1:
                *(_DWORD *)(v5 + 3012) = 16;
                break;
              case 2:
                *(_DWORD *)(v5 + 3012) = 24;
                break;
              case 3:
                *(_DWORD *)(v5 + 3012) = 32;
                break;
              default:
                goto LABEL_28;
            }
          }
        }
        UsbhGetHubPowerStatus(DeviceObject);
        if ( (*(_DWORD *)(v5 + 2560) & 0x40) != 0
          && (ExtendedHubInformation = UsbhInitializeTtHub((__int64)DeviceObject, a2),
              (ExtendedHubInformation & 0xC0000000) == 0xC0000000) )
        {
          UsbhLogStartFailure(
            (int)DeviceObject,
            ExtendedHubInformation,
            3,
            5622,
            (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
            "InitializeTtHub");
        }
        else
        {
          ExtendedHubInformation = UsbhGetExtendedHubInformation(DeviceObject);
          if ( (ExtendedHubInformation & 0xC0000000) == 0xC0000000 )
          {
            UsbhLogStartFailure(
              (int)DeviceObject,
              ExtendedHubInformation,
              3,
              5633,
              (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "Get Port attributes");
          }
          else
          {
            Usbh_UsbdQueryContollerType(DeviceObject);
            if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
              *(_DWORD *)(v5 + 2560) &= ~0x100000u;
            else
              *(_DWORD *)(v5 + 2560) |= 0x100000u;
            *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
            *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
            *(_DWORD *)(v5 + 4172) = 201;
            KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 4176));
            *(_BYTE *)(v5 + 4184) = 0;
            *(_QWORD *)(v5 + 4200) = v5 + 4192;
            *(_QWORD *)(v5 + 4192) = v5 + 4192;
            KeInitializeEvent((PRKEVENT)(v5 + 4896), NotificationEvent, 1u);
            KeInitializeEvent((PRKEVENT)(v5 + 4920), SynchronizationEvent, 1u);
            *(_DWORD *)(v5 + 4884) = 1;
            UsbhQueryParentHubConfig(DeviceObject);
            v14 = FdoExt(DeviceObject);
            UsbhSyncSendInternalIoctl(DeviceObject, 2229311LL, v14 + 5192, 0LL);
            *(_DWORD *)(v5 + 5256) = dword_1C0067690;
            UsbhRegisterPowerCallback(DeviceObject);
            *(_DWORD *)(v5 + 2560) |= 0x40000000u;
          }
        }
        return ExtendedHubInformation;
      }
      Src = "ConfigureUsbHub";
      v16 = 5535;
    }
    goto LABEL_40;
  }
  UsbhLogStartFailure(
    (int)DeviceObject,
    -1073741823,
    7,
    5492,
    (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    "hubCount > 6");
  return 3221225473LL;
}
