/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C00029A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshExitSx @ 0x1C0002D34 (UsbhSshExitSx.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002DFC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhResumeHardReset @ 0x1C0002F58 (UsbhResumeHardReset.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C002058C (UsbhSetFdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C00206A0 (UsbhReleasePowerContext.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0025B78 (UsbhDisarmHubForWakeDetect.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F420 (UsbhSyncBusDisconnect.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // r10d
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-30h]

  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 4) != 0 )
  {
    v5 = FdoExt(a1);
    if ( *(_QWORD *)(v5 + 4448) )
      v6 = (*(__int64 (__fastcall **)(_QWORD))(v5 + 4448))(*(_QWORD *)(v5 + 4232));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v7 = FdoExt(a1);
  v8 = FdoExt(a1);
  v9 = v8 + 1384;
  *(_QWORD *)(v8 + 1408) = KeGetCurrentThread();
  Log((_DWORD)a1, 16, 1349731376, v8 + 1384, (int)v6);
  if ( !(unsigned __int8)Usb_Disconnected(v6) )
    v6 = UsbhCheckHubPowerStatus((_DWORD)a1);
  if ( (unsigned __int8)Usb_Disconnected(v6) )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND, 0, v6);
    UsbhAcquireFdoPwrLock(a1, v9, 114LL, 846671972LL);
    UsbhSetFdoPowerState(a1, v6, 213LL);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v6);
      v14 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v14 & 0x10) != 0 )
        *(_DWORD *)(v7 + 2560) = v14 & 0xFFFFFFEF;
      LOBYTE(v16) = 0;
      if ( (*(_DWORD *)(v7 + 2560) & 1) != 0 )
        UsbhException((int)a1, 0, 46, 0, 0, v6, 0, usbfile_fdopwr_c, 4034, v16);
      else
        UsbhException((int)a1, 0, 45, 0, 0, v6, 0, usbfile_fdopwr_c, 4039, v16);
      Log((_DWORD)a1, 16, 1346720304, 0, (int)v6);
    }
    v15 = *(int *)(v7 + 4216);
    if ( (v15 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v15);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v16) = 0;
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4082, v16);
      }
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v15);
      v6 = UsbhFdoSetD0Cold((_DWORD)a1);
      UsbhResumeHardReset(a1, v9);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v16) = 0;
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4065, v16);
      }
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    if ( (unsigned int)UsbhAcquireFdoPwrLock(a1, v9, 114LL, 829894756LL) == 210 )
    {
      if ( *(_DWORD *)(FdoExt(a1) + 4212) == 1 )
      {
        v11 = FdoExt(a1);
        v12 = 201LL;
      }
      else
      {
        v11 = FdoExt(a1);
        v12 = 206LL;
      }
      UsbhSetFdoPowerState(a1, *(unsigned int *)(v11 + 4212), v12);
    }
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, v13, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v9);
  if ( (v6 & 0x80000000) == 0 )
    UsbhCompletePdoWakeIrps((_DWORD)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), a3, 0x20u);
}
