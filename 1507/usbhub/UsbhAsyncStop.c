/*
 * XREFs of UsbhAsyncStop @ 0x1C004AC0C
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0021690 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001E124 (UsbhAcquireFdoPnpLock.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0021FC8 (Usbh_HubRootHubInitNotification.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00447D8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x1C00467DC (UsbhDisableHardReset.c)
 *     UsbhSshDisabled @ 0x1C00561C4 (UsbhSshDisabled.c)
 */

void __fastcall UsbhAsyncStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  _DWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // r9
  int v16; // eax
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  int Timeout; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]

  v5 = a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  Log(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  UsbhDisableTimerObject(*(_QWORD *)(a1 + 8), *((_QWORD *)v6 + 346), v7, v8);
  if ( (unsigned int)Usbh_HubRootHubInitNotification(*(_QWORD *)(a1 + 8), 0LL, 0LL, v9) == -1073741536 )
  {
    v13 = FdoExt(*(_QWORD *)(a1 + 8), v10, v11, v12);
    v6[640] |= 0x400u;
    v14 = v13;
    KeSetEvent((PRKEVENT)(v6 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), v14 + 390, 0x20u);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v16 = UsbhWaitEventWithTimeoutEx(
          *(struct _DEVICE_OBJECT **)(a1 + 8),
          v6 + 644,
          5000,
          1667394391,
          (unsigned int)v15 & Timeout,
          v15 & v24);
  Log(*(_QWORD *)(a1 + 8), 2, 1667379249, v16, 5000LL);
  if ( v17 == 258 )
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v19 = *(_QWORD *)(a1 + 8);
    if ( (v6[640] & 0x400) != 0 )
    {
      Log(v19, 2, 1667379252, v18, 5000LL);
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    Log(v19, 2, 1667379251, v18, 5000LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v20, v21);
    KeWaitForSingleObject(v6 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 12LL, 1330933353LL, 1);
    if ( v5 == 5 )
    {
      UsbhDisableHardReset(*(_QWORD *)(a1 + 8));
      Usbh_SSH_Event(*(PDEVICE_OBJECT *)(a1 + 8), 6u, a1, v22);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 5);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
