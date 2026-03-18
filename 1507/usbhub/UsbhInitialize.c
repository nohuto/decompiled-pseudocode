/*
 * XREFs of UsbhInitialize @ 0x1C00189A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCheckHubErrata @ 0x1C000671C (UsbhCheckHubErrata.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhGetTopOfBusStack @ 0x1C0009EA0 (UsbhGetTopOfBusStack.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0018E48 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001C710 (UsbhGetExtendedHubInformation.c)
 *     UsbhRegisterPowerCallback @ 0x1C001D818 (UsbhRegisterPowerCallback.c)
 *     UsbhConfigureUsbHub @ 0x1C001F340 (UsbhConfigureUsbHub.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001F960 (UsbhSyncSendInternalIoctl.c)
 *     UsbhGetHubPowerStatus @ 0x1C002010C (UsbhGetHubPowerStatus.c)
 *     UsbhGetHubClassDescriptor @ 0x1C00205F8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubCount @ 0x1C00207A4 (UsbhGetHubCount.c)
 *     UsbhInitializeTtHub @ 0x1C002555C (UsbhInitializeTtHub.c)
 *     UsbhQueryParentHubConfig @ 0x1C002615C (UsbhQueryParentHubConfig.c)
 *     Usbh_UsbdQueryContollerType @ 0x1C0027990 (Usbh_UsbdQueryContollerType.c)
 *     UsbhIsHighSpeedCapable @ 0x1C00281F4 (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x1C003C34C (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitialize(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  __int16 v8; // r9
  unsigned int TopOfBusStack; // esi
  unsigned int HubCount; // esi
  __int64 result; // rax
  unsigned int v12; // ebp
  unsigned int v13; // esi
  unsigned __int16 v14; // r10
  unsigned int ExtendedHubInformation; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  char *Src; // rax
  int v27; // r9d
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v7 = FdoExt((__int64)a1, a2, a3, a4);
  Log((__int64)a1, 8, 1749634633, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v8 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack((__int64)a1);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(
      (int)a1,
      TopOfBusStack,
      3,
      5480,
      (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "GetRootHubPdo");
    return TopOfBusStack;
  }
  HubCount = UsbhGetHubCount(a1, &v28);
  if ( (HubCount & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v27 = 5491;
LABEL_40:
    UsbhLogStartFailure((int)a1, HubCount, 3, v27, (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return HubCount;
  }
  if ( v28 <= 6 )
  {
    HubCount = UsbhGetHubDeviceInformation((_DWORD)a1);
    if ( (HubCount & 0xC0000000) == 0xC0000000 )
    {
      Src = "GetHubDeviceInformation";
      v27 = 5508;
    }
    else
    {
      if ( v7[633] == 1 )
      {
        if ( v7[634] == 2 )
          v7[640] |= 0x40u;
        if ( (unsigned __int8)UsbhIsHighSpeedCapable(a1) )
          v7[640] |= 0x8000u;
      }
      UsbhCheckHubErrata((__int64)v7);
      HubCount = UsbhConfigureUsbHub((_DWORD)a1);
      if ( (HubCount & 0xC0000000) != 0xC0000000 )
      {
        do
        {
          result = UsbhGetHubClassDescriptor((_DWORD)a1, v7 + 734);
          v12 = result;
          if ( (_DWORD)result == -1073741810 || (_DWORD)result == -1073741667 )
            return result;
          v13 = (unsigned int)result >> 30;
          if ( (unsigned int)result >> 30 == 3 && v6 > 3 )
          {
            UsbhLogStartFailure(
              (int)a1,
              result,
              3,
              5560,
              (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "GetHubClassDescriptor");
            return v12;
          }
          if ( v6 )
            UsbhWait((int)a1, 10);
          ++v6;
        }
        while ( v13 == 3 );
        Log((__int64)a1, 8, 1749634633, *(unsigned __int16 *)((char *)v7 + 2939), *((unsigned __int16 *)v7 + 1276));
        if ( *((_WORD *)v7 + 1271) >= 0x200u )
        {
          if ( (v14 & 1) != 0 )
            *((_BYTE *)v7 + 3007) = 1;
          if ( (v14 & 8) != 0 )
            *((_BYTE *)v7 + 3009) = 1;
          if ( (v14 & 0x80u) != 0 )
            *((_BYTE *)v7 + 3008) = 1;
          if ( (v7[640] & 0x40) != 0 )
          {
            switch ( (v14 >> 5) & 3 )
            {
              case 0:
LABEL_28:
                v7[753] = 8;
                break;
              case 1:
                v7[753] = 16;
                break;
              case 2:
                v7[753] = 24;
                break;
              case 3:
                v7[753] = 32;
                break;
              default:
                goto LABEL_28;
            }
          }
        }
        UsbhGetHubPowerStatus(a1);
        if ( (v7[640] & 0x40) != 0
          && (ExtendedHubInformation = UsbhInitializeTtHub(a1, a2), (ExtendedHubInformation & 0xC0000000) == 0xC0000000) )
        {
          UsbhLogStartFailure(
            (int)a1,
            ExtendedHubInformation,
            3,
            5628,
            (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
            "InitializeTtHub");
        }
        else
        {
          ExtendedHubInformation = UsbhGetExtendedHubInformation(a1);
          if ( (ExtendedHubInformation & 0xC0000000) == 0xC0000000 )
          {
            UsbhLogStartFailure(
              (int)a1,
              ExtendedHubInformation,
              3,
              5639,
              (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "Get Port attributes");
          }
          else
          {
            Usbh_UsbdQueryContollerType(a1);
            if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
              v7[640] &= ~0x100000u;
            else
              v7[640] |= 0x100000u;
            FdoExt((__int64)a1, v16, v17, v18)[1053] = 1;
            FdoExt((__int64)a1, v19, v20, v21)[1052] = 1;
            v7[1043] = 201;
            KeInitializeSpinLock((PKSPIN_LOCK)v7 + 522);
            *((_BYTE *)v7 + 4184) = 0;
            *((_QWORD *)v7 + 525) = v7 + 1048;
            *((_QWORD *)v7 + 524) = v7 + 1048;
            KeInitializeEvent((PRKEVENT)v7 + 204, NotificationEvent, 1u);
            KeInitializeEvent((PRKEVENT)v7 + 205, SynchronizationEvent, 1u);
            v7[1221] = 1;
            UsbhQueryParentHubConfig(a1);
            v25 = FdoExt((__int64)a1, v22, v23, v24);
            UsbhSyncSendInternalIoctl(a1, 2229311LL, v25 + 1298, 0LL);
            v7[1314] = dword_1C0066690;
            UsbhRegisterPowerCallback(a1);
            v7[640] |= 0x40000000u;
          }
        }
        return ExtendedHubInformation;
      }
      Src = "ConfigureUsbHub";
      v27 = 5541;
    }
    goto LABEL_40;
  }
  UsbhLogStartFailure((int)a1, -1073741823, 7, 5498, (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c", "hubCount > 6");
  return 3221225473LL;
}
