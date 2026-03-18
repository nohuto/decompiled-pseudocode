/*
 * XREFs of UsbhPdoSetD0 @ 0x1C001FF90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoSetD0_Finish @ 0x1C0004BF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhSetPdoPowerState @ 0x1C000D064 (UsbhSetPdoPowerState.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000D644 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C00111D8 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F0D8 (UsbhClearPdoIdleReady.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001FE08 (UsbhCompletePdoIdleIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C00206A0 (UsbhReleasePowerContext.c)
 *     UsbhDisableDeviceForWake @ 0x1C0020760 (UsbhDisableDeviceForWake.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046430 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
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
  int v21; // ebp
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  KIRQL v25; // al
  KSPIN_LOCK *v26; // r14
  KSPIN_LOCK **v27; // r8
  int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned int v37; // eax
  int v38; // ebp
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  BOOLEAN v42; // r9
  int v43; // [rsp+48h] [rbp-40h]
  int v44; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+20h]

  v4 = (struct _DEVICE_OBJECT *)a3[6];
  v6 = (unsigned int)a2;
  v8 = PdoExt((__int64)v4, a2, (__int64)a3, a4);
  v12 = (KSPIN_LOCK *)FdoExt(*((_QWORD *)v8 + 147), v9, v10, v11);
  v45 = *(_QWORD *)(a3[8] + 184);
  Log((__int64)DeviceObject, 16, 1346651184, (__int64)a3, (__int64)v4);
  v16 = PdoExt((__int64)v4, v13, v14, v15) + 236;
  UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 1381131376LL);
  UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v17, 8, 8);
  UsbhReleaseFdoPwrLock(DeviceObject, v16);
  a3[14] = UsbhIncHubBusy((__int64)DeviceObject, (__int64)v16, (__int64)v4, 1430414448LL, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 809792336LL);
  v21 = PdoExt(a3[6], v18, v19, v20)[282];
  v22 = GET_FDO_POWER_STATE((__int64)v16);
  if ( v22 == 201 )
    goto LABEL_10;
  if ( v22 <= 201 )
  {
LABEL_25:
    UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, v21, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v38 = -1073741101;
    goto LABEL_19;
  }
  if ( v22 <= 205 )
    goto LABEL_28;
  if ( v22 == 206 )
  {
LABEL_10:
    v28 = v21 - 1;
    if ( v28 )
    {
      if ( v28 == 6 )
      {
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        Log((__int64)DeviceObject, 16, 1999782960, 0LL, *((unsigned __int16 *)v8 + 710));
        KeWaitForSingleObject(v8 + 588, Executive, 0, v42, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, 7, 8);
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
              (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
              *((_WORD *)v8 + 710));
          UsbhSet_Pdo_Dx(v4, (POWER_STATE)1);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 809792336LL);
        PdoExt(a3[6], v29, v30, v31);
        v8[594] = *((_DWORD *)v12 + 1054);
        UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v32, 1, 8);
        KeSetEvent((PRKEVENT)v8 + 98, 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        UsbhCompletePdoIdleIrp((__int64)DeviceObject, (__int64)v4, 0LL, v33);
        UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v4, (__int64)a3, v34);
        if ( (v8[353] & 0x100) != 0 )
        {
          v37 = UsbhDisableDeviceForWake(*((_QWORD *)v16 + 1), v4, &v44);
          v35 = v37;
          if ( (v37 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v37) )
          {
            LOBYTE(v43) = 0;
            UsbhException(
              *((_QWORD *)v16 + 1),
              *((unsigned __int16 *)v8 + 710),
              49,
              0,
              0,
              v35,
              v44,
              usbfile_pdopwr_c,
              1186,
              v43);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, 1, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v16);
      Log((__int64)DeviceObject, 16, 1999848496, 0LL, *((unsigned __int16 *)v8 + 710));
    }
    goto LABEL_18;
  }
  if ( v22 <= 208 )
    goto LABEL_25;
  if ( v22 > 211 )
  {
    if ( v22 != 212 )
    {
      if ( v22 == 213 )
      {
        v38 = -1073741810;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            14,
            (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
            *((_WORD *)v8 + 710),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        goto LABEL_19;
      }
      goto LABEL_25;
    }
LABEL_28:
    UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, v21, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v38 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v35,
        1,
        15,
        (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
        *((_WORD *)v8 + 710),
        211);
    goto LABEL_19;
  }
  UsbhSetPdoPowerState((__int64)v16, (__int64)v4, v23, 3, 7);
  UsbhReleaseFdoPwrLock(DeviceObject, v16);
  Log((__int64)DeviceObject, 16, 1349862448, (__int64)a3, (__int64)v4);
  UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v4, (__int64)a3, v24);
  Log((__int64)DeviceObject, 16, 2003321904, 0LL, v6);
  v25 = KeAcquireSpinLockRaiseToDpc(v12 + 522);
  if ( !*((_BYTE *)v12 + 4184) )
  {
    KeReleaseSpinLock(v12 + 522, v25);
    UsbhPdoSetD0_Finish((__int64)v16, v4, a3[8]);
LABEL_18:
    v38 = 0;
LABEL_19:
    *((_QWORD *)v8 + 317) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy((__int64)DeviceObject, v35, (_QWORD *)a3[14], v36);
    v39 = a3[8];
    a3[14] = 0LL;
    UsbhEtwLogDevicePowerEvent((__int64)v8, v39, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE);
    *(_DWORD *)(a3[8] + 48) = v38;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount((ULONG_PTR)v4, a3[8], v40, v41);
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v26 = (KSPIN_LOCK *)(a3 + 12);
  v27 = (KSPIN_LOCK **)v12[525];
  *v26 = (KSPIN_LOCK)(v12 + 524);
  v26[1] = (KSPIN_LOCK)v27;
  if ( *v27 != v12 + 524 )
    __fastfail(3u);
  *v27 = v26;
  v12[525] = (KSPIN_LOCK)v26;
  KeReleaseSpinLock(v12 + 522, v25);
}
