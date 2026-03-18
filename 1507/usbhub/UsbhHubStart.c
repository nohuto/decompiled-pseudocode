/*
 * XREFs of UsbhHubStart @ 0x1C0021B28
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C00218F0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BAC0 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0021FC8 (Usbh_HubRootHubInitNotification.c)
 *     UsbhReinitialize @ 0x1C003C5CC (UsbhReinitialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS inited; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  int v14; // edi
  _DWORD *v15; // rax
  __int64 *v16; // rbx
  int v17; // r10d
  __int64 v18; // r8
  __int64 v19; // r9

  v5 = a2;
  v7 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  if ( v5 )
  {
    v14 = v5 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
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
      v15 = FdoExt(*(_QWORD *)(a1 + 8), v6, v8, v9);
      v16 = (__int64 *)(v15 + 390);
      Log(*((_QWORD *)v15 + 196), 2, 1635341140, 0LL, (__int64)(v15 + 390));
      inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), v16, &File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v16[1], 8, 1700023634, *((_QWORD *)v7 + 346), 0LL);
        UsbhEnableTimerObject(v16[1], *((_QWORD *)v7 + 346), 1000LL, 0LL, (__int64)v16, 0x49577473u);
        inited = Usbh_HubRootHubInitNotification(v16[1], v16, UsbhInitCallback);
        Log(v16[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && inited != -1073741536 )
        {
          Log(v16[1], v17, 2018790738, *((_QWORD *)v7 + 346), 0LL);
          UsbhDisableTimerObject(v16[1], *((_QWORD *)v7 + 346), v18, v19);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              14,
              (__int64)&WPP_0699480349a52c2338640249ccf2c1c3_Traceguids,
              inited);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), v16, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    inited = UsbhFinishStart(*(_QWORD *)(a1 + 8));
    v12 = 5LL;
    if ( inited < 0 )
      v12 = 9LL;
    UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, v12, v11);
  }
  return (unsigned int)inited;
}
