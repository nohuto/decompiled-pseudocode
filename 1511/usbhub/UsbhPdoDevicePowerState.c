/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C000C4B4
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C000C3B0 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000B818 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhSetPdoPowerState @ 0x1C000D064 (UsbhSetPdoPowerState.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000D644 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C00111D8 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhSetPdoIdleReady @ 0x1C001C3B0 (UsbhSetPdoIdleReady.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F0D8 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoSetDx @ 0x1C001FC88 (UsbhPdoSetDx.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024810 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040C00 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  POWER_STATE v8; // r12d
  int v9; // r15d
  KIRQL v10; // al
  bool v11; // zf
  KIRQL v12; // dl
  int v13; // r15d
  unsigned int v14; // r15d
  int v15; // edx
  __int64 v16; // rax
  const EVENT_DESCRIPTOR *v17; // r8
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r15d
  int v23; // eax
  int v24; // r8d
  __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  BOOLEAN v28; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  v6 = PdoExt(a2);
  FdoExt(a1);
  v7 = PdoExt(a2) + 944;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v8.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  Log(a1, 16, 1885622372, (_DWORD)a2, (__int64)a3);
  v9 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  if ( (v9 & 0xC0000000) != 0xC0000000 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v7 + 136) = 1;
    *(_BYTE *)(v7 + 132) = v10;
    *(_DWORD *)(v7 + 88) = 2018460752;
    *(_DWORD *)(v7 + 92) = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v7;
    *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
    v11 = *(_DWORD *)(PdoExt(a2) + 1124) == 3;
    *(_DWORD *)(v7 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v7 + 88) = 1734964085;
    v12 = *(_BYTE *)(v7 + 132);
    if ( !v11 )
    {
      v14 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
LABEL_13:
      if ( (unsigned __int8)Usb_Disconnected(v14) )
        UsbhPCE_BusDisconnect(a1, v7, *(unsigned __int16 *)(v6 + 1420));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          1,
          22,
          (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
          *(_WORD *)(v6 + 1420),
          v8.SystemState);
      UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Power.State);
      *(_QWORD *)(v6 + 2536) = MEMORY[0xFFFFF78000000014];
      v16 = PdoExt(a2);
      UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v16 + 1176), (__int64)a2, a3, 2101);
      v17 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
      if ( v8.SystemState != PowerSystemWorking )
        v17 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
      UsbhEtwLogDevicePowerEvent(v6, (__int64)a3, v17);
      a3->IoStatus.Status = v14;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
      return v14;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    v13 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v8.SystemState != PowerSystemWorking )
    {
      if ( (unsigned int)(v8.SystemState - 2) > 2 )
      {
        v14 = -1073741811;
      }
      else
      {
        UsbhEtwLogDevicePowerEvent(v6, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH);
        if ( *(_DWORD *)(PdoExt(a2) + 788) == v8.SystemState )
        {
          v14 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v6 + 1144) == 2 )
          {
            if ( !CurrentStackLocation->Parameters.Create.EaLength )
            {
              if ( !*(_BYTE *)(v6 + 2709) )
              {
                *(_BYTE *)(v6 + 2709) = 1;
                UsbhQueueWorkItemEx(
                  a1,
                  1,
                  (unsigned int)&UsbhSetPdoSelectiveSuspendedKey,
                  (_DWORD)a2,
                  0,
                  2001228627,
                  0LL);
              }
              if ( v8.SystemState == PowerSystemSleeping3
                && (*(_DWORD *)(PdoExt(a2) + 1172) & 0x10) != 0
                && (*(_DWORD *)(v6 + 1412) & 0xC00000) == 0xC00000 )
              {
                KeSetEvent((PRKEVENT)(v6 + 2888), 0, 0);
                *(_DWORD *)(v6 + 1412) = *(_DWORD *)(v6 + 1412) & 0xFAFFFFFF | 0x4000000;
              }
            }
            v14 = UsbhPdoSetDx(v7, a2, a3);
            goto LABEL_13;
          }
          v14 = -1073741130;
        }
      }
      goto LABEL_43;
    }
    UsbhEtwLogDevicePowerEvent(v6, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH);
    *(_QWORD *)(v6 + 2528) = MEMORY[0xFFFFF78000000014];
    v22 = v13 - 1;
    if ( !v22 )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v21, 1, 2);
      goto LABEL_49;
    }
    if ( v22 == 6 )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v21, 7, 13);
      UsbhReleaseFdoPwrLock(a1, v7);
      Log(a1, 16, 2003059760, 0, *(unsigned __int16 *)(v6 + 1420));
      KeWaitForSingleObject((PVOID)(v6 + 2352), Executive, 0, v28, 0LL);
LABEL_50:
      v14 = 0;
      goto LABEL_13;
    }
    v23 = GET_FDO_POWER_STATE(v7);
    if ( v23 == 201 || v23 == 206 )
      goto LABEL_20;
    if ( v23 <= 208 )
    {
LABEL_46:
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v19, 6, 3);
LABEL_49:
      UsbhReleaseFdoPwrLock(a1, v7);
      goto LABEL_50;
    }
    if ( v23 <= 211 )
    {
LABEL_20:
      if ( (int)UsbhSet_D0_wQueued_Action(a1, v7, a2, a3, 0) >= 0 )
      {
        KeResetEvent((PRKEVENT)(v6 + 2352));
        UsbhSetPdoPowerState(v7, (_DWORD)a2, v20, 2, 6);
        UsbhReleaseFdoPwrLock(a1, v7);
        return 259LL;
      }
    }
    else if ( v23 > 213 )
    {
      goto LABEL_46;
    }
    UsbhSetPdoPowerState(v7, (_DWORD)a2, v19, 6, 3);
    v26 = GET_FDO_POWER_STATE(v7);
    v27 = 0;
    if ( v26 == 213 )
      v27 = -1073741810;
    v14 = v27;
LABEL_43:
    UsbhReleaseFdoPwrLock(a1, v7);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v6 + 2716) )
  {
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    if ( v8.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v24, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v24, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, v8);
  }
  Log(a1, 16, 1886545441, v9, (__int64)a3);
  *(_QWORD *)(v6 + 2536) = MEMORY[0xFFFFF78000000014];
  v25 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v25 + 1176), (__int64)a2, a3, 1910);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
