/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1C0002F90
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 * Callees:
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncBusReset @ 0x1C0003444 (UsbhSyncBusReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0017580 (UsbhSyncPowerOnPorts.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x1C001C360 (UsbhSyncBusResume.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhResetHubUpstreamPort @ 0x1C0046BD8 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046C70 (UsbhResetNotifyCompletion.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  __int64 v6; // r12
  int v7; // r9d
  int v8; // ebp
  unsigned int v9; // eax
  int started; // r15d
  unsigned __int16 v11; // di
  __int64 PortData; // r14
  __int64 v13; // rsi
  KIRQL v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  KIRQL v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edi
  int v28; // ecx
  unsigned __int16 v29; // di
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r14
  int v33; // [rsp+48h] [rbp-30h]

  v6 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1668246628, 0, 0LL);
  v8 = v7 + 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v8,
      27,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, 0, 0);
  if ( a3 )
  {
    v26 = UsbhResetHubUpstreamPort(a1);
    v27 = v26;
    if ( (v26 & 0xC0000000) == 0xC0000000 )
    {
      if ( !(unsigned __int8)Usb_Disconnected(v26) )
      {
        LOBYTE(v33) = 0;
        UsbhException((int)a1, 0, 54, 0, 0, v28, 0, usbfile_fdopwr_c, 3274, v33);
      }
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, v27);
      return v27;
    }
  }
  UsbhSyncBusReset(a1, a2);
  v9 = UsbhSyncPowerOnPorts((_DWORD)a1);
  started = v9;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(v9) )
    {
      LOBYTE(v33) = 0;
      UsbhException((int)a1, 0, 53, 0, 0, started, 0, usbfile_fdopwr_c, 3298, v33);
    }
LABEL_23:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
    return (unsigned int)started;
  }
  UsbhWait(a1, 100LL);
  v11 = v8;
  while ( v11 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
  {
    PortData = UsbhGetPortData(a1, v11);
    if ( !PortData )
      goto LABEL_13;
    v13 = 0LL;
    Log((_DWORD)a1, 256, 1817199695, v11, 1129270340LL);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    v15 = UsbhGetPortData(a1, v11);
    if ( v15 )
    {
      v13 = *(_QWORD *)(v15 + 392);
      if ( v13 )
        v13 = UsbhRefPdo(v16, *(_QWORD *)(v15 + 392), 0LL, 1129270340LL);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
    Log((_DWORD)a1, 16, 1668047921, *(unsigned __int16 *)(PortData + 4), v13);
    if ( v13 )
    {
      started = UsbhFdoColdStartPdo((_DWORD)a1);
      if ( (started & 0xC0000000) == 0xC0000000 )
      {
        UsbhUnlatchPdo(a1, v13, 0LL, 1129270340LL);
        break;
      }
      UsbhUnlatchPdo(a1, v13, 0LL, 1129270340LL);
      ++v11;
    }
    else
    {
      started = UsbhFdoColdStartCheckPort((_DWORD)a1);
      if ( (started & 0xC0000000) == 0xC0000000 )
        break;
LABEL_13:
      ++v11;
    }
  }
  UsbhSyncBusResume(a1, a2);
  if ( !*(_BYTE *)(v6 + 5268) )
    goto LABEL_15;
  v29 = v8;
  while ( 2 )
  {
    if ( v29 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_15:
          if ( (unsigned __int16)v8 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
            goto LABEL_23;
          v17 = 0LL;
          Log((_DWORD)a1, 256, 1817199695, (unsigned __int16)v8, 1129071666LL);
          v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
          v19 = UsbhGetPortData(a1, (unsigned __int16)v8);
          if ( v19 )
          {
            v17 = *(_QWORD *)(v19 + 392);
            if ( v17 )
              v17 = UsbhRefPdo(v20, *(_QWORD *)(v19 + 392), 0LL, 1129071666LL);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
          Log((_DWORD)a1, 16, 1919249969, (unsigned __int16)v8, v17);
          if ( v17 )
            break;
          v21 = UsbhGetPortData(a1, (unsigned __int16)v8);
          if ( *(_BYTE *)(v21 + 2841) )
          {
            *(_BYTE *)(v21 + 2841) = 0;
            UsbhQueueSoftConnectChange((_DWORD)a1);
          }
LABEL_22:
          LOWORD(v8) = v8 + 1;
        }
        v23 = PdoExt(v17);
        v24 = v23;
        if ( *(_BYTE *)(v23 + 2708) )
        {
          UsbhUnlatchPdo(a1, v17, 0LL, 1129071666LL);
          goto LABEL_22;
        }
        if ( (*(_DWORD *)(v23 + 1412) & 0x4000) != 0 )
        {
          Log((_DWORD)a1, 16, 1346654803, 0, 0LL);
          UsbhEtwLogHubIrpEvent(
            a1,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            *(unsigned __int16 *)(v24 + 1420),
            0);
          v25 = UsbhSyncResetDeviceInternal(a1);
          started = v25;
          if ( (v25 & 0xC0000000) == 0xC0000000 )
          {
            Log((_DWORD)a1, 16, 1919249970, 0, v25);
            UsbhQueueSoftConnectChange((_DWORD)a1);
            *(_DWORD *)(v24 + 1412) &= ~0x4000u;
            LOBYTE(v33) = 0;
            UsbhException((int)a1, 0, 88, 0, 0, started, 0, usbfile_fdopwr_c, 3445, v33);
            started = 0;
          }
          else
          {
            *(_DWORD *)(v24 + 1412) &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo(a1, v17, 0LL, 1129071666LL);
        LOWORD(v8) = v8 + 1;
      }
    }
    v30 = UsbhLatchPdo(a1, v29, 0LL, 1129071666LL);
    v31 = v30;
    if ( !v30 )
      goto LABEL_47;
    v32 = PdoExt(v30);
    if ( !*(_BYTE *)(v32 + 2708) )
      goto LABEL_46;
    started = UsbhSyncResetDeviceInternal(a1);
    if ( started >= 0 )
    {
      UsbhResetNotifyCompletion(*(_QWORD *)(a2 + 8));
LABEL_46:
      UsbhUnlatchPdo(a1, v31, 0LL, 1129071666LL);
LABEL_47:
      ++v29;
      continue;
    }
    break;
  }
  UsbhQueueSoftConnectChange((_DWORD)a1);
  *(_DWORD *)(v32 + 1412) &= ~0x4000u;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
  UsbhUnlatchPdo(a1, v31, 0LL, 1129071666LL);
  return (unsigned int)started;
}
