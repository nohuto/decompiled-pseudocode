/*
 * XREFs of UsbhHubStart @ 0x1C000A268
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C000A030 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C00276BC (Usbh_HubRootHubInitNotification.c)
 *     UsbhReinitialize @ 0x1C003C7FC (UsbhReinitialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubStart(__int64 a1, int a2)
{
  __int64 v4; // rsi
  NTSTATUS inited; // edi
  __int64 v6; // r8
  int v8; // edi
  __int64 v9; // rax
  _QWORD *v10; // rbx
  int v11; // r10d

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0, 0LL);
        inited = UsbhReinitialize(*(_QWORD *)(a1 + 8));
        if ( inited >= 0 )
          return (unsigned int)UsbhFdoSetD0Cold(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v9 = FdoExt(*(_QWORD *)(a1 + 8));
      v10 = (_QWORD *)(v9 + 1560);
      Log(*(_QWORD *)(v9 + 1568), 2, 1635341140, 0, v9 + 1560);
      inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), v10, &File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v10[1], 8, 1700023634, *(_QWORD *)(v4 + 2768), 0LL);
        UsbhEnableTimerObject(v10[1], *(_QWORD *)(v4 + 2768), 1000, 0, (__int64)v10, 1230468211);
        inited = Usbh_HubRootHubInitNotification(v10[1], v10, UsbhInitCallback);
        Log(v10[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && inited != -1073741536 )
        {
          Log(v10[1], v11, 2018790738, *(_QWORD *)(v4 + 2768), 0LL);
          UsbhDisableTimerObject(v10[1], *(_QWORD *)(v4 + 2768));
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              14,
              (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids,
              inited);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), v10, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0, 0LL);
    inited = UsbhFinishStart(*(_QWORD *)(a1 + 8));
    v6 = 5LL;
    if ( inited < 0 )
      v6 = 9LL;
    UsbhDispatch_BusEvent(*(_QWORD *)(a1 + 8), a1, v6);
  }
  return (unsigned int)inited;
}
