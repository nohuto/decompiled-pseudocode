/*
 * XREFs of UsbhReset2Complete @ 0x1C0016FE0
 * Callers:
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhFreeID @ 0x1C000758C (UsbhFreeID.c)
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhRawWait @ 0x1C000A400 (UsbhRawWait.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C000A4C0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000B6D4 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0027B44 (UsbhAllocateTimeoutObject.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C002826C (UsbhBusIf_GetContainerIdForPort.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhBuildContainerID @ 0x1C002881C (UsbhBuildContainerID.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0040AB0 (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044D84 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C004FD30 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Complete(struct _DEVICE_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  KSPIN_LOCK *v15; // rdi
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int FrameCounter; // eax
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // r13
  __int64 v28; // rdi
  KIRQL v29; // al
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  KSPIN_LOCK *v40; // rax
  KSPIN_LOCK *v41; // r15
  _DWORD *v42; // rax
  int v43; // r9d
  _DWORD *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  KSPIN_LOCK *v49; // r13
  int v50; // r12d
  KIRQL v51; // al
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _DWORD *v55; // rax
  __int64 v56; // rax
  int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r9
  __int64 v62; // rdi
  unsigned int v63; // eax
  unsigned __int16 v64; // r8
  __int64 v65; // rdx
  int v66; // r9d
  int v67; // [rsp+20h] [rbp-A8h]
  int v68; // [rsp+28h] [rbp-A0h]
  int v69; // [rsp+30h] [rbp-98h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+48h] [rbp-80h]
  char v72; // [rsp+50h] [rbp-78h]
  KIRQL v73; // [rsp+51h] [rbp-77h]
  _DWORD *v74; // [rsp+58h] [rbp-70h]
  unsigned int v75; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v77; // [rsp+70h] [rbp-58h] BYREF
  int v78[2]; // [rsp+78h] [rbp-50h] BYREF
  __int16 v79; // [rsp+80h] [rbp-48h]

  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  v7 = 0;
  Log((__int64)a1, 1024, 1884435043, a2, 0LL);
  v74 = FdoExt((__int64)a1, v8, v9, v10);
  v11 = v74;
  v15 = (KSPIN_LOCK *)(FdoExt((__int64)a1, v12, v13, v14) + 766);
  v16 = KeAcquireSpinLockRaiseToDpc(v15);
  KeReleaseSpinLock(v15, v16);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = (unsigned int)Usbh_UsbdReadFrameCounter((__int64)a1, v17, v18, v19);
  v21 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v78[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v78[1] = v21;
  v79 = FrameCounter;
  Log((__int64)a1, 1024, 1701720625, a2, v21);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait((int)a1, 100);
  }
  else
  {
    Log((__int64)a1, 8, 2002872692, 15LL, 0LL);
    UsbhRawWait(v22);
  }
  v23 = (int)UsbhInitializeDevice((_DWORD)a1);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log((__int64)a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v23);
  if ( (int)v23 < 0 )
  {
LABEL_14:
    if ( (v23 & 0xC0000000) == 0xC0000000 )
    {
      v61 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log((__int64)a1, 1024, 1936025137, v61, (int)v23);
      v62 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v63 = *(_DWORD *)(a2 + 544);
      if ( v63 < 3 && (int)v62 >= 0 )
      {
        Log((__int64)a1, 1024, 1936025138, v63, v62);
        UsbhDisablePort((_DWORD)a1);
        v64 = *(_WORD *)(a2 + 4);
        v65 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v65, v64);
        UsbhUnlinkPdoDeviceHandle((__int64)a1, (__int64)a3, 2017740897, 1);
        UsbhBusUnlatchPdo((_DWORD)a1, (_DWORD)a3, a2, v66, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v62);
        UsbhResetPort((__int64)a1, a2, (__int64)P);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v62);
      UsbhSetEnumerationFailed((int)a1, (int)v78, v62, v69, v70, 2050);
    }
    else
    {
      v42 = PdoExt((__int64)a3, v24, v25, v26);
      v44 = v42;
      if ( !*((_BYTE *)v42 + 2700) && (v42[353] & 0x200) != 0 && (v42[293] & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( !*((_BYTE *)v44 + 2700) )
        goto LABEL_18;
      if ( (v11[640] & 1) != 0 )
        UsbhBusIf_SetContainerIdForPort(a1, *((unsigned __int16 *)v44 + 710), v44 + 671);
      if ( !*((_BYTE *)v44 + 2700) )
      {
LABEL_18:
        if ( (v11[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *((unsigned __int16 *)v44 + 710), v44 + 671) >= 0 )
            *((_BYTE *)v44 + 2700) = 1;
          LODWORD(v23) = 0;
        }
      }
      UsbhBusUnlatchPdo((_DWORD)a1, (_DWORD)a3, a2, v43, 0LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v23);
      PdoExt((__int64)a3, v45, v46, v47)[697] = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v27 = 0;
  v72 = 0;
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  v28 = *(_QWORD *)(a2 + 376);
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v28 + 136) = 1;
  *(_BYTE *)(v28 + 132) = v29;
  *(_DWORD *)(v28 + 88) = 2018460752;
  *(_DWORD *)(v28 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v28;
  *(_QWORD *)(v28 + 24) = KeGetCurrentThread();
  if ( a3 && PdoExt((__int64)a3, v30, v31, v32)[281] == 3 )
  {
    Log((__int64)a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v56 = *(_QWORD *)(a2 + 376);
    v72 = 1;
    LODWORD(v23) = 0;
    v27 = 1;
    *(_DWORD *)(v56 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v56 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v56 + 132));
  }
  else
  {
    v33 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v33 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v33 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v33 + 132));
    v34 = UsbhSetupDevice((__int64)a1, a3, &v75);
    v23 = v34;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v34);
    Log((__int64)a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v23);
  }
  while ( 1 )
  {
    if ( (int)v23 >= 0 )
    {
      v23 = (int)UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v77, v35, v36);
      Log((__int64)a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v23);
    }
    Log((__int64)a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    v39 = (unsigned int)v23 >> 30;
    if ( (_DWORD)v39 != 3 )
      goto LABEL_12;
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v23) )
      break;
    if ( (_DWORD)v39 == 3 )
    {
      Log((__int64)a1, 1024, 1701725522, *(unsigned __int16 *)(a2 + 4), (int)v23);
      UsbhDisablePort((_DWORD)a1);
LABEL_13:
      v11 = v74;
      goto LABEL_14;
    }
LABEL_12:
    v40 = (KSPIN_LOCK *)PdoExt((__int64)a3, v37, v39, v38);
    v41 = v40;
    if ( (*((_DWORD *)v40 + 353) & 0x200) == 0 || v27 == 1 )
      goto LABEL_13;
    v49 = v40 + 347;
    v75 = v7 + 1;
    v50 = 4;
    v51 = KeAcquireSpinLockRaiseToDpc(v40 + 347);
    v73 = v51;
    if ( !*((_DWORD *)v41 + 696) )
    {
      v55 = PdoExt((__int64)a3, v52, v53, v54);
      if ( (v55[353] & 0x200) != 0 )
      {
        v69 = (_DWORD)v55 + 2120;
        LOWORD(v68) = *((_WORD *)v55 + 701);
        LOWORD(v67) = *((_WORD *)v55 + 700);
        v50 = USBD_AddDeviceToGlobalList(a3, a1, *((unsigned __int16 *)v55 + 710), 0LL, v67, v68);
        if ( v50 == 1 )
          goto LABEL_29;
      }
      else
      {
        v50 = 1;
LABEL_29:
        *((_DWORD *)v41 + 696) = 1;
      }
      v51 = v73;
    }
    KeReleaseSpinLock(v49, v51);
    if ( v50 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v71) = 0;
      UsbhException(
        (int)a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        v41[266],
        *((_DWORD *)v41 + 531),
        v23,
        0,
        usbfile_busfunc_c,
        1917,
        v71);
      UsbhFreeID((__int64)(v41 + 265));
      *((_DWORD *)v41 + 353) &= ~0x200u;
      goto LABEL_13;
    }
    if ( v50 != 2 )
    {
      v11 = v74;
      if ( v50 == 4 )
        LODWORD(v23) = -1073741823;
      goto LABEL_14;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v23) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_13;
    }
    UsbhWait((int)a1, (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v7 = v75;
    if ( v75 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v23) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v71) = 0;
      UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1972, v71);
      PdoExt((__int64)a3, v58, v59, v60)[697] = 1073807363;
      goto LABEL_13;
    }
    v27 = v72;
  }
  Log((__int64)a1, 1024, 1701720644, *(unsigned __int16 *)(a2 + 4), (int)v23);
  UsbhBusUnlatchPdo((_DWORD)a1, (_DWORD)a3, a2, v57, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v23);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
