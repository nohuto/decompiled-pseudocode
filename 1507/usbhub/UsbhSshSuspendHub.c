/*
 * XREFs of UsbhSshSuspendHub @ 0x1C0017B8C
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x1C0016ECC (UsbhSetHubRemoteWake.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0017A5C (UsbhArmHubForWakeDetect.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x1C001C360 (UsbhSyncBusResume.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C001F018 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001F960 (UsbhSyncSendInternalIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v6; // rbp
  int v7; // eax
  __int64 v8; // r11
  int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  _DWORD *v25; // rax
  int v26; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rax
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+48h] [rbp-10h]
  unsigned int v34; // [rsp+70h] [rbp+18h] BYREF

  v34 = 0;
  v6 = (struct _KEVENT *)FdoExt((__int64)DeviceObject, a2, a3, a4);
  v7 = UsbhSyncSendInternalIoctl(DeviceObject, 2228243LL, &v34, 0LL);
  Log((__int64)DeviceObject, 8, 1970303827, v34, v7);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 0x10000, 1400198008, 0LL, v8);
    Usbh_SSH_Event(DeviceObject);
    KeSetEvent(v6 + 141, 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((__int64)DeviceObject, 0x10000, 1400206152, a2, 0LL);
    UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0, 0);
    v14 = FdoExt((__int64)DeviceObject, v10, v11, v12);
    if ( (v14[640] & 0x80000) == 0 )
    {
      UsbhArmHubForWakeDetect(DeviceObject, v13, v15, v16);
      if ( (int)UsbhSetHubRemoteWake((__int64)DeviceObject, 1, v17, v18) >= 0 )
        v14[640] |= 0x80000u;
    }
    FdoExt((__int64)DeviceObject, v13, v15, v16);
    Log((__int64)DeviceObject, 2048, 1346458174, 2LL, a2);
    *(_DWORD *)(a2 + 128) = v19;
    v20 = UsbhDispatch_BusEvent(DeviceObject, a2, (unsigned int)(v19 + 5));
    Log((__int64)DeviceObject, 2048, 1346458172, 0LL, v20);
    if ( v24 == 4 )
    {
      v25 = FdoExt((__int64)DeviceObject, v21, v22, v23);
      if ( *((_QWORD *)v25 + 590) )
        v26 = (*((__int64 (__fastcall **)(_QWORD))v25 + 590))(*((_QWORD *)v25 + 149));
      else
        v26 = -1073741637;
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, v26);
      if ( v26 < 0 )
      {
        UsbhSyncBusResume(DeviceObject, a2);
        UsbhDisarmHubWakeOnConnect(DeviceObject);
        Usbh_SSH_Event(DeviceObject);
        KeSetEvent(v6 + 141, 0, 0);
        LOBYTE(v33) = 0;
        UsbhException((int)DeviceObject, 0, 136, 0, 0, v26, 0, usbfile_sshub_c, 2218, v33);
        v31 = FdoExt((__int64)DeviceObject, v28, v29, v30);
        UsbhEnableTimerObject(
          (_DWORD)DeviceObject,
          (_DWORD)v6 + 3200,
          v6[219].Header.LockNV,
          0,
          (__int64)(v31 + 478),
          2001228627);
      }
      else
      {
        UsbhDisableTimerObject(DeviceObject, &v6[133].Header.WaitListHead);
        Usbh_SSH_Event(DeviceObject);
      }
    }
    else
    {
      v26 = -1073741823;
      UsbhEtwLogHubIrpEvent(
        DeviceObject,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED,
        v23 & v32,
        -1073741823);
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      Usbh_SSH_Event(DeviceObject);
      KeSetEvent(v6 + 141, 0, 0);
    }
    return (unsigned int)v26;
  }
}
