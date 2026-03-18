/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C001ACE0
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C001B340 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C00074E0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C001783C (GET_FDO_POWER_STATE.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019FA4 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001E330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhSetPdoIdleReady @ 0x1C00201FC (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x1C00210BC (UsbhClearPdoIdleReady.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024F24 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhQueueWorkItemEx @ 0x1C0025074 (UsbhQueueWorkItemEx.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0025310 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D488 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040F38 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  POWER_STATE v15; // r12d
  int v16; // eax
  __int64 v17; // r15
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  KIRQL v23; // dl
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r15d
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rax
  void *v40; // r8
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // r15d
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // eax
  int v60; // ecx
  BOOLEAN v61; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  v7 = PdoExt((__int64)a2, (__int64)a2, (__int64)a3, a4);
  FdoExt(a1, v8, v9, v10);
  v14 = PdoExt((__int64)a2, v11, v12, v13) + 236;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v15.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  Log(a1, 16, 1885622372, (__int64)a2, (__int64)a3);
  v16 = UsbhIncPdoIoCount((__int64)a2, (__int64)a3, 1884311383LL, 0LL);
  v17 = v16;
  if ( (v16 & 0xC0000000) != 0xC0000000 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v14[34] = 1;
    *((_BYTE *)v14 + 132) = v18;
    v14[22] = 2018460752;
    v14[23] = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v14;
    *((_QWORD *)v14 + 3) = KeGetCurrentThread();
    v22 = PdoExt((__int64)a2, v19, v20, v21)[281] == 3;
    v14[34] = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v14[22] = 1734964085;
    v23 = *((_BYTE *)v14 + 132);
    if ( !v22 )
    {
      v34 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
LABEL_13:
      if ( (unsigned __int8)Usb_Disconnected(v34) )
        UsbhPCE_BusDisconnect(a1, v14, *((unsigned __int16 *)v7 + 710));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          1,
          22,
          (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
          *((_WORD *)v7 + 710),
          v15.SystemState);
      UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Power.State);
      *((_QWORD *)v7 + 317) = MEMORY[0xFFFFF78000000014];
      v39 = PdoExt((__int64)a2, v36, v37, v38);
      UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v39 + 147), a2, a3, 2101LL);
      v40 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
      if ( v15.SystemState != PowerSystemWorking )
        v40 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
      UsbhEtwLogDevicePowerEvent(v7, a3, v40, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
      a3->IoStatus.Status = v34;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3, v41, v42);
      return v34;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
    UsbhAcquireFdoPwrLock(a1, v14, 126LL, 1986356304LL);
    v27 = PdoExt((__int64)a2, v24, v25, v26)[282];
    if ( v15.SystemState != PowerSystemWorking )
    {
      if ( (unsigned int)(v15.SystemState - 2) > 2 )
      {
        v34 = -1073741811;
      }
      else
      {
        UsbhEtwLogDevicePowerEvent(
          v7,
          a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          0);
        if ( PdoExt((__int64)a2, v28, v29, v30)[197] == v15.SystemState )
        {
          v34 = 0;
        }
        else
        {
          if ( v7[286] == 2 )
          {
            if ( !CurrentStackLocation->Parameters.Create.EaLength )
            {
              if ( !*((_BYTE *)v7 + 2709) )
              {
                *((_BYTE *)v7 + 2709) = 1;
                UsbhQueueWorkItemEx(
                  a1,
                  1,
                  (unsigned int)&UsbhSetPdoSelectiveSuspendedKey,
                  (_DWORD)a2,
                  0,
                  2001228627,
                  0LL);
              }
              if ( v15.SystemState == PowerSystemSleeping3
                && (PdoExt((__int64)a2, v31, v32, v33)[293] & 0x10) != 0
                && (v7[353] & 0xC00000) == 0xC00000 )
              {
                KeSetEvent((PRKEVENT)(v7 + 722), 0, 0);
                v7[353] = v7[353] & 0xFAFFFFFF | 0x4000000;
              }
            }
            v34 = UsbhPdoSetDx(v14, a2, a3);
            goto LABEL_13;
          }
          v34 = -1073741130;
        }
      }
      goto LABEL_42;
    }
    UsbhEtwLogDevicePowerEvent(
      v7,
      a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      0);
    *((_QWORD *)v7 + 316) = MEMORY[0xFFFFF78000000014];
    v47 = v27 - 1;
    if ( v47 )
    {
      if ( v47 == 6 )
      {
        UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v45, 7LL, 13);
        UsbhReleaseFdoPwrLock(a1, v14);
        Log(a1, 16, 2003059760, 0LL, *((unsigned __int16 *)v7 + 710));
        KeWaitForSingleObject(v7 + 588, Executive, 0, v61, 0LL);
LABEL_49:
        v34 = 0;
        goto LABEL_13;
      }
      v48 = GET_FDO_POWER_STATE((__int64)v14, v44, v45, v46);
      if ( v48 == 201 || v48 == 206 )
      {
LABEL_26:
        if ( (int)UsbhSet_D0_wQueued_Action(a1, v14, a2, a3) >= 0 )
        {
          KeResetEvent((PRKEVENT)v7 + 98);
          UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v50, 2LL, 6);
          UsbhReleaseFdoPwrLock(a1, v14);
          return 259LL;
        }
        goto LABEL_39;
      }
      if ( v48 > 208 )
      {
        if ( v48 <= 211 )
          goto LABEL_26;
        if ( v48 <= 213 )
        {
LABEL_39:
          UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v49, 6LL, 3);
          v59 = GET_FDO_POWER_STATE((__int64)v14, v56, v57, v58);
          v60 = 0;
          if ( v59 == 213 )
            v60 = -1073741810;
          v34 = v60;
LABEL_42:
          UsbhReleaseFdoPwrLock(a1, v14);
          goto LABEL_13;
        }
      }
      UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v49, 6LL, 3);
    }
    else
    {
      UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v45, 1LL, 2);
    }
    UsbhReleaseFdoPwrLock(a1, v14);
    goto LABEL_49;
  }
  if ( *((_BYTE *)v7 + 2716) )
  {
    UsbhAcquireFdoPwrLock(a1, v14, 126LL, 1986356304LL);
    if ( v15.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v51, 1LL, 2);
      UsbhReleaseFdoPwrLock(a1, v14);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState((__int64)v14, (__int64)a2, v51, 4LL, 4);
      UsbhReleaseFdoPwrLock(a1, v14);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, v15);
  }
  Log(a1, 16, 1886545441, v17, (__int64)a3);
  *((_QWORD *)v7 + 317) = MEMORY[0xFFFFF78000000014];
  v55 = PdoExt((__int64)a2, v52, v53, v54);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v55 + 147), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
