/*
 * XREFs of UsbhSshSuspendHub @ 0x1C001068C
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010858 (UsbhArmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C00110D0 (UsbhSetHubRemoteWake.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
 *     UsbhSyncBusResume @ 0x1C0021708 (UsbhSyncBusResume.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0025B2C (UsbhDisarmHubWakeOnConnect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  __int64 v8; // rdi
  int v9; // r9d
  int v10; // eax
  int v11; // r10d
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // [rsp+48h] [rbp-10h]
  int v23; // [rsp+70h] [rbp+18h] BYREF

  v23 = 0;
  v4 = FdoExt(a1);
  v5 = UsbhSyncSendInternalIoctl(a1, 2228243LL, &v23, 0LL);
  Log((_DWORD)a1, 8, 1970303827, v23, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v6);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event((__int64)a1, v18 + 3, a2, v18);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((_DWORD)a1, 0x10000, 1400206152, a2, 0LL);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START);
    v8 = FdoExt(a1);
    if ( (*(_DWORD *)(v8 + 2560) & 0x80000) == 0 )
    {
      UsbhArmHubForWakeDetect(a1);
      if ( (int)UsbhSetHubRemoteWake((_DWORD)a1) >= 0 )
        *(_DWORD *)(v8 + 2560) |= 0x80000u;
    }
    FdoExt(a1);
    Log((_DWORD)a1, 2048, 1346458174, 2, a2);
    *(_DWORD *)(a2 + 128) = v9;
    v10 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v9 + 5));
    Log((_DWORD)a1, 2048, 1346458172, 0, v10);
    if ( v11 == 4 )
    {
      v12 = FdoExt(a1);
      if ( *(_QWORD *)(v12 + 4720) )
        v13 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 4720))(*(_QWORD *)(v12 + 1192));
      else
        v13 = -1073741637;
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE);
      if ( v13 < 0 )
      {
        UsbhSyncBusResume(a1, a2);
        UsbhDisarmHubWakeOnConnect(a1);
        Usbh_SSH_Event((__int64)a1, 3u, a2, v20);
        KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
        LOBYTE(v22) = 0;
        UsbhException((int)a1, 0, 136, 0, 0, v13, 0, usbfile_sshub_c, 2224, v22);
        v21 = FdoExt(a1);
        UsbhEnableTimerObject((__int64)a1, v4 + 3200, *(unsigned int *)(v4 + 5256), 0LL, v21 + 1912, 0x77485353u);
      }
      else
      {
        UsbhDisableTimerObject((__int64)a1, v4 + 3200, v14, v15);
        Usbh_SSH_Event((__int64)a1, 2u, a2, v16);
      }
    }
    else
    {
      v13 = -1073741823;
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED);
      UsbhDisarmHubWakeOnConnect(a1);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE);
      *(_BYTE *)(v4 + 3416) = 1;
      Usbh_SSH_Event((__int64)a1, 3u, a2, v19);
      KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    }
    return (unsigned int)v13;
  }
}
