/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0020C10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoSetD0_Finish @ 0x1C0004C44 (UsbhPdoSetD0_Finish.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C0015DA0 (GET_FDO_POWER_STATE.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001BF04 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F1D8 (UsbhClearPdoIdleReady.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0021280 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C002220C (UsbhCompletePdoIdleIrp.c)
 *     UsbhDisableDeviceForWake @ 0x1C0022390 (UsbhDisableDeviceForWake.c)
 *     UsbhReleasePowerContext @ 0x1C0022434 (UsbhReleasePowerContext.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0029084 (UsbhSyncResumeDeviceInternal.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
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
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // r8d
  __int64 v27; // r9
  KIRQL v28; // al
  KSPIN_LOCK *v29; // r14
  KSPIN_LOCK **v30; // r8
  int v31; // ebp
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r9
  unsigned int v41; // eax
  int v42; // ebp
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  BOOLEAN v47; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  int v49; // [rsp+48h] [rbp-40h]
  int v50; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+20h]

  v4 = (struct _DEVICE_OBJECT *)a3[6];
  v6 = (unsigned int)a2;
  v8 = PdoExt((__int64)v4, a2, (__int64)a3, a4);
  v12 = (KSPIN_LOCK *)FdoExt(*((_QWORD *)v8 + 147), v9, v10, v11);
  v51 = *(_QWORD *)(a3[8] + 184);
  Log((__int64)DeviceObject, 16, 1346651184, (__int64)a3, (__int64)v4);
  v16 = PdoExt((__int64)v4, v13, v14, v15) + 236;
  UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 1381131376LL);
  UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v17, 8, 8);
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
    UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, v21, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v42 = -1073741101;
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
        UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        Log((__int64)DeviceObject, 16, 1999782960, 0LL, *((unsigned __int16 *)v8 + 710));
        KeWaitForSingleObject(v8 + 588, Executive, 0, v47, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, 7, 8);
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
          UsbhSet_Pdo_Dx(v4, 1LL, v32, v33);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v16, 126LL, 809792336LL);
        PdoExt(a3[6], v34, v35, v36);
        v8[594] = *((_DWORD *)v12 + 1054);
        UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v37, 1, 8);
        KeSetEvent((PRKEVENT)v8 + 98, 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v16);
        UsbhCompletePdoIdleIrp(DeviceObject, v4, 0LL);
        UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v4, (__int64)a3, v38);
        if ( (v8[353] & 0x100) != 0 )
        {
          v41 = UsbhDisableDeviceForWake(*((_QWORD *)v16 + 1), v4, &v50);
          v39 = v41;
          if ( (v41 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v41) )
          {
            LOBYTE(v49) = 0;
            UsbhException(
              *((_QWORD *)v16 + 1),
              *((unsigned __int16 *)v8 + 710),
              49,
              0,
              0,
              v39,
              v50,
              usbfile_pdopwr_c,
              1186,
              v49);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, 1, 13);
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
        v42 = -1073741810;
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
    UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, v21, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v16);
    v42 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v39,
        1,
        15,
        (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
        *((_WORD *)v8 + 710),
        211);
    goto LABEL_19;
  }
  UsbhSetPdoPowerState((_DWORD)v16, (_DWORD)v4, v26, 3, 7);
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
    v42 = 0;
LABEL_19:
    *((_QWORD *)v8 + 316) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy((__int64)DeviceObject, v39, (_QWORD *)a3[14], v40);
    v43 = v51;
    v44 = a3[8];
    a3[14] = 0LL;
    LODWORD(Timeout) = v42;
    UsbhEtwLogDevicePowerEvent(
      (__int64)v8,
      v44,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v43 + 24),
      Timeout);
    *(_DWORD *)(a3[8] + 48) = v42;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount((ULONG_PTR)v4, a3[8], v45, v46);
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v29 = (KSPIN_LOCK *)(a3 + 12);
  v30 = (KSPIN_LOCK **)v12[525];
  *v29 = (KSPIN_LOCK)(v12 + 524);
  v29[1] = (KSPIN_LOCK)v30;
  if ( *v30 != v12 + 524 )
    __fastfail(3u);
  *v30 = v29;
  v12[525] = (KSPIN_LOCK)v29;
  KeReleaseSpinLock(v12 + 522, v28);
}
