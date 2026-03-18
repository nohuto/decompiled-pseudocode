/*
 * XREFs of UsbhReset2Complete @ 0x1C0010B30
 * Callers:
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhInitializeDevice @ 0x1C0009770 (UsbhInitializeDevice.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     UsbhBusUnlatchPdo @ 0x1C0010990 (UsbhBusUnlatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRawWait @ 0x1C001BFE0 (UsbhRawWait.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001E948 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001F21C (UsbhAllocateTimeoutObject.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C00272F0 (UsbhBusIf_GetContainerIdForPort.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhBuildContainerID @ 0x1C00277DC (UsbhBuildContainerID.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0040CCC (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044EB4 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C004FC90 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 v8; // r13
  KSPIN_LOCK *v9; // rdi
  KIRQL v10; // al
  int FrameCounter; // eax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r13
  __int64 v19; // rdi
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  KSPIN_LOCK *v31; // rax
  KSPIN_LOCK *v32; // r15
  _DWORD *v33; // rax
  __int64 v34; // r9
  _DWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  KSPIN_LOCK *v40; // r13
  int v41; // r12d
  KIRQL v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // r9d
  __int64 v53; // rdi
  unsigned int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r9
  int v58; // [rsp+20h] [rbp-A8h]
  int v59; // [rsp+20h] [rbp-A8h]
  int v60; // [rsp+28h] [rbp-A0h]
  int v61; // [rsp+30h] [rbp-98h]
  int v62; // [rsp+38h] [rbp-90h]
  int v63; // [rsp+48h] [rbp-80h]
  char v64; // [rsp+50h] [rbp-78h]
  KIRQL v65; // [rsp+51h] [rbp-77h]
  __int64 v66; // [rsp+58h] [rbp-70h]
  unsigned int v67; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+70h] [rbp-58h] BYREF
  int v70[2]; // [rsp+78h] [rbp-50h] BYREF
  __int16 v71; // [rsp+80h] [rbp-48h]

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
  Log(a1, 1024, 1884435043, a2, 0LL);
  v66 = FdoExt(a1);
  v8 = v66;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeReleaseSpinLock(v9, v10);
  UsbhCancelResetTimeout(a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v12 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v70[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v70[1] = v12;
  v71 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v12);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait(a1, 100LL);
  }
  else
  {
    Log(a1, 8, 2002872692, 15, 0LL);
    UsbhRawWait(v13);
  }
  HIWORD(v60) = 0;
  v14 = (int)UsbhInitializeDevice(a1, a3, a2);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE);
  Log(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v14);
  if ( (int)v14 < 0 )
  {
LABEL_14:
    if ( (v14 & 0xC0000000) == 0xC0000000 )
    {
      v52 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v52, (int)v14);
      v53 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v54 = *(_DWORD *)(a2 + 544);
      if ( v54 < 3 && (int)v53 >= 0 )
      {
        Log(a1, 1024, 1936025138, v54, v53);
        UsbhDisablePort(a1);
        v55 = *(unsigned __int16 *)(a2 + 4);
        v56 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v56, v55);
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo(a1, a3, a2, v57, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
        UsbhResetPort(a1);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE);
      UsbhSetEnumerationFailed(a1, (int)v70, v53, v61, v62, 2050);
    }
    else
    {
      v33 = PdoExt(a3, v15, v16, v17);
      v35 = v33;
      if ( !*((_BYTE *)v33 + 2708) && (v33[353] & 0x200) != 0 && (v33[293] & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( !*((_BYTE *)v35 + 2708) )
        goto LABEL_18;
      if ( (*(_DWORD *)(v8 + 2560) & 1) != 0 )
        UsbhBusIf_SetContainerIdForPort(a1, *((unsigned __int16 *)v35 + 710), v35 + 673);
      if ( !*((_BYTE *)v35 + 2708) )
      {
LABEL_18:
        if ( (*(_DWORD *)(v8 + 2560) & 1) != 0
          && (int)UsbhBusIf_GetContainerIdForPort(a1, *((unsigned __int16 *)v35 + 710), v35 + 673) >= 0 )
        {
          *((_BYTE *)v35 + 2708) = 1;
        }
      }
      UsbhBusUnlatchPdo(a1, a3, a2, v34, 0LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE);
      PdoExt(a3, v36, v37, v38)[699] = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v18 = 0;
  v64 = 0;
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  v19 = *(_QWORD *)(a2 + 376);
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v19 + 136) = 1;
  *(_BYTE *)(v19 + 132) = v20;
  *(_DWORD *)(v19 + 88) = 2018460752;
  *(_DWORD *)(v19 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v19;
  *(_QWORD *)(v19 + 24) = KeGetCurrentThread();
  if ( a3 && PdoExt(a3, v21, v22, v23)[281] == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v47 = *(_QWORD *)(a2 + 376);
    v64 = 1;
    LODWORD(v14) = 0;
    v18 = 1;
    *(_DWORD *)(v47 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v47 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v47 + 132));
  }
  else
  {
    v24 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v24 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v24 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v24 + 132));
    v25 = UsbhSetupDevice(a1, a3, &v67);
    v14 = v25;
    HIWORD(v60) = HIWORD(v25);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v14);
  }
  while ( 1 )
  {
    if ( (int)v14 >= 0 )
    {
      v14 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v69, v26, v27);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v14);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    v30 = (unsigned int)v14 >> 30;
    if ( (_DWORD)v30 != 3 )
      goto LABEL_12;
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v14) )
      break;
    if ( (_DWORD)v30 == 3 )
    {
      Log(a1, 1024, 1701725522, *(unsigned __int16 *)(a2 + 4), (int)v14);
      UsbhDisablePort(a1);
LABEL_13:
      v8 = v66;
      goto LABEL_14;
    }
LABEL_12:
    v31 = (KSPIN_LOCK *)PdoExt(a3, v28, v30, v29);
    v32 = v31;
    if ( (*((_DWORD *)v31 + 353) & 0x200) == 0 || v18 == 1 )
      goto LABEL_13;
    v40 = v31 + 348;
    v67 = v7 + 1;
    v41 = 4;
    v42 = KeAcquireSpinLockRaiseToDpc(v31 + 348);
    v65 = v42;
    if ( !*((_DWORD *)v32 + 698) )
    {
      v46 = PdoExt(a3, v43, v44, v45);
      if ( (v46[353] & 0x200) != 0 )
      {
        v61 = (_DWORD)v46 + 2120;
        LOWORD(v60) = *((_WORD *)v46 + 701);
        LOWORD(v58) = *((_WORD *)v46 + 700);
        v41 = USBD_AddDeviceToGlobalList(a3, a1, *((unsigned __int16 *)v46 + 710), 0LL, v58, v60);
        if ( v41 == 1 )
          goto LABEL_28;
      }
      else
      {
        v41 = 1;
LABEL_28:
        *((_DWORD *)v32 + 698) = 1;
      }
      v42 = v65;
    }
    KeReleaseSpinLock(v40, v42);
    if ( v41 == 3 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER);
      LOBYTE(v63) = 0;
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        v32[266],
        *((_DWORD *)v32 + 531),
        v14,
        0,
        usbfile_busfunc_c,
        1917,
        v63);
      UsbhFreeID((__int64)(v32 + 265));
      *((_DWORD *)v32 + 353) &= ~0x200u;
      goto LABEL_13;
    }
    if ( v41 != 2 )
    {
      v8 = v66;
      if ( v41 == 4 )
        LODWORD(v14) = -1073741823;
      goto LABEL_14;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v14) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_13;
    }
    UsbhWait(a1, LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc));
    v7 = v67;
    if ( v67 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v14) = -1073741823;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT);
      LOBYTE(v63) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1972, v63);
      PdoExt(a3, v49, v50, v51)[699] = 1073807363;
      goto LABEL_13;
    }
    v18 = v64;
  }
  Log(a1, 1024, 1701720644, *(unsigned __int16 *)(a2 + 4), (int)v14);
  UsbhBusUnlatchPdo(a1, a3, a2, v48, 0LL);
  v59 = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376), v59, v14);
  return 3LL;
}
