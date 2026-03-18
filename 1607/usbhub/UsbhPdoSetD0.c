/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0021930
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoSetD0_Finish @ 0x1C00010E4 (UsbhPdoSetD0_Finish.c)
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C001783C (GET_FDO_POWER_STATE.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019FA4 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001E330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhClearPdoIdleReady @ 0x1C00210BC (UsbhClearPdoIdleReady.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0023040 (UsbhCompletePdoIdleIrp.c)
 *     UsbhDisableDeviceForWake @ 0x1C00231C4 (UsbhDisableDeviceForWake.c)
 *     UsbhReleasePowerContext @ 0x1C0023268 (UsbhReleasePowerContext.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028704 (UsbhSyncResumeDeviceInternal.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D488 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 *a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // rsi
  __int64 v6; // r12
  _DWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KSPIN_LOCK *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  KIRQL v28; // al
  KSPIN_LOCK *v29; // r14
  KSPIN_LOCK **v30; // r8
  unsigned int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r9
  unsigned int v39; // eax
  int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  BOOLEAN v45; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  int v47; // [rsp+48h] [rbp-40h]
  int v48; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+20h]

  v4 = (struct _DEVICE_OBJECT *)a3[6];
  v6 = (unsigned int)a2;
  v8 = PdoExt((__int64)v4, a2, (__int64)a3, a4);
  v12 = (KSPIN_LOCK *)FdoExt(*((_QWORD *)v8 + 147), v9, v10, v11);
  v49 = *(_QWORD *)(a3[8] + 184);
  Log((__int64)DeviceObject, 16, 1346651184, (__int64)a3, (__int64)v4);
  v16 = PdoExt((__int64)v4, v13, v14, v15) + 236;
  UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 1381131376LL);
  UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v17, 8LL, 8);
  UsbhReleaseFdoPwrLock(DeviceObject, v16);
  a3[14] = UsbhIncHubBusy(DeviceObject, (__int64)v16, (__int64)v4, 1430414448LL, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 809792336LL);
  v21 = PdoExt(a3[6], v18, v19, v20)[282];
  v25 = GET_FDO_POWER_STATE((__int64)v16, v22, v23, v24);
  if ( v25 == 201 )
    goto LABEL_10;
  if ( v25 <= 201 )
  {
LABEL_25:
    UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, v21, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v40 = -1073741101;
    goto LABEL_19;
  }
  if ( v25 <= 205 )
    goto LABEL_28;
  if ( v25 == 206 )
  {
LABEL_10:
    v31 = v21 - 1;
    if ( v31 )
    {
      if ( v31 == 6 )
      {
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, 7LL, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        Log((__int64)DeviceObject, 16, 1999782960, 0LL, *((unsigned __int16 *)v8 + 710));
        KeWaitForSingleObject(v8 + 588, Executive, 0, v45, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, 7LL, 8);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        if ( (v8[353] & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(DeviceObject, v4);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(DeviceObject, v16, v4);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
              *((_WORD *)v8 + 710));
          UsbhSet_Pdo_Dx(v4, (POWER_STATE)1);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 809792336LL);
        PdoExt(a3[6], v32, v33, v34);
        v8[594] = *((_DWORD *)v12 + 1054);
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v35, 1LL, 8);
        KeSetEvent((PRKEVENT)v8 + 98, 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        UsbhCompletePdoIdleIrp(DeviceObject, v4, 0LL);
        UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v4, (__int64)a3, v36);
        if ( (v8[353] & 0x100) != 0 )
        {
          v39 = UsbhDisableDeviceForWake(*((_QWORD *)v16 + 1), v4, &v48);
          v37 = v39;
          if ( (v39 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v39) )
          {
            LOBYTE(v47) = 0;
            UsbhException(
              *((_QWORD *)v16 + 1),
              *((unsigned __int16 *)v8 + 710),
              49,
              0,
              0,
              v37,
              v48,
              usbfile_pdopwr_c,
              1186,
              v47);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, 1LL, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v16);
      Log((__int64)DeviceObject, 16, 1999848496, 0LL, *((unsigned __int16 *)v8 + 710));
    }
    goto LABEL_18;
  }
  if ( v25 <= 208 )
    goto LABEL_25;
  if ( v25 > 211 )
  {
    if ( v25 != 212 )
    {
      if ( v25 == 213 )
      {
        v40 = -1073741810;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            14,
            (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
            *((_WORD *)v8 + 710),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        goto LABEL_19;
      }
      goto LABEL_25;
    }
LABEL_28:
    UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, v21, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v40 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v37,
        1,
        15,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        *((_WORD *)v8 + 710),
        211);
    goto LABEL_19;
  }
  UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v26, 3LL, 7);
  UsbhReleaseFdoPwrLock(DeviceObject, v16);
  Log((__int64)DeviceObject, 16, 1349862448, (__int64)a3, (__int64)v4);
  UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v4, (__int64)a3, v27);
  Log((__int64)DeviceObject, 16, 2003321904, 0LL, v6);
  v28 = KeAcquireSpinLockRaiseToDpc(v12 + 522);
  if ( !*((_BYTE *)v12 + 4184) )
  {
    KeReleaseSpinLock(v12 + 522, v28);
    UsbhPdoSetD0_Finish((__int64)v16, v4, a3[8]);
LABEL_18:
    v40 = 0;
LABEL_19:
    *((_QWORD *)v8 + 317) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy((__int64)DeviceObject, v37, (_QWORD *)a3[14], v38);
    v41 = v49;
    v42 = a3[8];
    a3[14] = 0LL;
    LODWORD(Timeout) = v40;
    UsbhEtwLogDevicePowerEvent(
      (__int64)v8,
      v42,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v41 + 24),
      Timeout);
    *(_DWORD *)(a3[8] + 48) = v40;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount((ULONG_PTR)v4, a3[8], v43, v44);
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v29 = (KSPIN_LOCK *)(a3 + 12);
  v30 = (KSPIN_LOCK **)v12[525];
  if ( *v30 != v12 + 524 )
    __fastfail(3u);
  *v29 = (KSPIN_LOCK)(v12 + 524);
  v29[1] = (KSPIN_LOCK)v30;
  *v30 = v29;
  v12[525] = (KSPIN_LOCK)v29;
  KeReleaseSpinLock(v12 + 522, v28);
}
