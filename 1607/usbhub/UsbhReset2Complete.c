/*
 * XREFs of UsbhReset2Complete @ 0x1C00183B0
 * Callers:
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhFreeID @ 0x1C00059B4 (UsbhFreeID.c)
 *     UsbhAllocateTimeoutObject @ 0x1C00077A8 (UsbhAllocateTimeoutObject.c)
 *     UsbhCancelResetTimeout @ 0x1C0009144 (UsbhCancelResetTimeout.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009B18 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhResetPort @ 0x1C0009B6C (UsbhResetPort.c)
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     UsbhRawWait @ 0x1C000A000 (UsbhRawWait.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000C0C4 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000C21C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C0021174 (UsbhBusConnectPdo.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0022AB0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhInitializeDevice @ 0x1C0026B94 (UsbhInitializeDevice.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C0027A4C (UsbhBusIf_GetContainerIdForPort.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhBuildContainerID @ 0x1C0027E9C (UsbhBuildContainerID.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0041004 (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C004366C (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C00451F4 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C0050400 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Complete(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
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
  char v24; // r13
  __int64 v25; // rdi
  KIRQL v26; // al
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // r14
  KSPIN_LOCK *v35; // r13
  int v36; // r12d
  KIRQL v37; // al
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r9
  __int64 v43; // rdi
  unsigned int v44; // eax
  unsigned __int16 v45; // r8
  __int64 v46; // rdx
  int v47; // r9d
  int v48; // [rsp+20h] [rbp-A8h]
  int v49; // [rsp+28h] [rbp-A0h]
  int v50; // [rsp+30h] [rbp-98h]
  int v51; // [rsp+38h] [rbp-90h]
  int v52; // [rsp+48h] [rbp-80h]
  KIRQL v53; // [rsp+50h] [rbp-78h]
  char v54; // [rsp+51h] [rbp-77h]
  _DWORD *v55; // [rsp+58h] [rbp-70h]
  unsigned int v56; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v58[8]; // [rsp+70h] [rbp-58h] BYREF
  int v59[2]; // [rsp+78h] [rbp-50h] BYREF
  __int16 v60; // [rsp+80h] [rbp-48h]

  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  v7 = 0;
  Log((__int64)a1, 1024, 1884435043, a2, 0LL);
  v55 = FdoExt((__int64)a1, v8, v9, v10);
  v11 = v55;
  v15 = (KSPIN_LOCK *)(FdoExt((__int64)a1, v12, v13, v14) + 766);
  v16 = KeAcquireSpinLockRaiseToDpc(v15);
  KeReleaseSpinLock(v15, v16);
  UsbhCancelResetTimeout((__int64)a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = (unsigned int)Usbh_UsbdReadFrameCounter((__int64)a1, v17, v18, v19);
  v21 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v59[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v59[1] = v21;
  v60 = FrameCounter;
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
      v42 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log((__int64)a1, 1024, 1936025137, v42, (int)v23);
      v43 = (int)UsbhAllocateTimeoutObject((int)a1, a2, &P);
      v44 = *(_DWORD *)(a2 + 544);
      if ( v44 < 3 && (int)v43 >= 0 )
      {
        Log((__int64)a1, 1024, 1936025138, v44, v43);
        UsbhDisablePort((_DWORD)a1);
        v45 = *(_WORD *)(a2 + 4);
        v46 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v46, v45);
        UsbhUnlinkPdoDeviceHandle((__int64)a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v47, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v43);
        UsbhResetPort((__int64)a1, a2, (__int64)P);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v43);
      UsbhSetEnumerationFailed((int)a1, (int)v59, v43, v50, v51, 2065);
    }
    else
    {
      v31 = PdoExt(a3);
      v33 = v31;
      if ( !*(_BYTE *)(v31 + 2708) && (*(_DWORD *)(v31 + 1412) & 0x200) != 0 && (*(_DWORD *)(v31 + 1172) & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( !*(_BYTE *)(v33 + 2708) )
        goto LABEL_18;
      if ( (v11[640] & 1) != 0 )
        UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v33 + 1420), v33 + 2692);
      if ( !*(_BYTE *)(v33 + 2708) )
      {
LABEL_18:
        if ( (v11[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v33 + 1420), v33 + 2692) >= 0 )
            *(_BYTE *)(v33 + 2708) = 1;
          LODWORD(v23) = 0;
        }
      }
      UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v32, 0LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v23);
      *(_DWORD *)(PdoExt(a3) + 2796) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v24 = 0;
  v54 = 0;
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  v25 = *(_QWORD *)(a2 + 376);
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v25 + 136) = 1;
  *(_BYTE *)(v25 + 132) = v26;
  *(_DWORD *)(v25 + 88) = 2018460752;
  *(_DWORD *)(v25 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v25;
  *(_QWORD *)(v25 + 24) = KeGetCurrentThread();
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log((__int64)a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v39 = *(_QWORD *)(a2 + 376);
    v54 = 1;
    LODWORD(v23) = 0;
    v24 = 1;
    *(_DWORD *)(v39 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v39 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v39 + 132));
  }
  else
  {
    v27 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v27 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v27 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v27 + 132));
    v28 = UsbhSetupDevice((__int64)a1, a3, &v56);
    v23 = v28;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v28);
    Log((__int64)a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v23);
  }
  while ( 1 )
  {
    if ( (int)v23 >= 0 )
    {
      v23 = (int)UsbhFdoCheckUpstreamConnectionState(a1, v58);
      Log((__int64)a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v23);
    }
    Log((__int64)a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (unsigned int)v23 >> 30 != 3 )
      goto LABEL_12;
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v23) )
      break;
    if ( v40 == 3 )
    {
      Log((__int64)a1, 1024, 1701725522, *(unsigned __int16 *)(a2 + 4), (int)v23);
      UsbhDisablePort((_DWORD)a1);
LABEL_13:
      v11 = v55;
      goto LABEL_14;
    }
LABEL_12:
    v29 = PdoExt(a3);
    v30 = v29;
    if ( (*(_DWORD *)(v29 + 1412) & 0x200) == 0 || v24 == 1 )
      goto LABEL_13;
    v35 = (KSPIN_LOCK *)(v29 + 2784);
    v56 = v7 + 1;
    v36 = 4;
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 2784));
    v53 = v37;
    if ( !*(_DWORD *)(v30 + 2792) )
    {
      v38 = PdoExt(a3);
      if ( (*(_DWORD *)(v38 + 1412) & 0x200) != 0 )
      {
        v50 = v38 + 2120;
        LOWORD(v49) = *(_WORD *)(v38 + 1402);
        LOWORD(v48) = *(_WORD *)(v38 + 1400);
        v36 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v38 + 1420), 0LL, v48, v49);
        if ( v36 == 1 )
          goto LABEL_29;
      }
      else
      {
        v36 = 1;
LABEL_29:
        *(_DWORD *)(v30 + 2792) = 1;
      }
      v37 = v53;
    }
    KeReleaseSpinLock(v35, v37);
    if ( v36 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v52) = 0;
      UsbhException(
        (int)a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v30 + 2128),
        *(_DWORD *)(v30 + 2124),
        v23,
        0,
        usbfile_busfunc_c,
        1932,
        v52);
      UsbhFreeID(v30 + 2120);
      *(_DWORD *)(v30 + 1412) &= ~0x200u;
      goto LABEL_13;
    }
    if ( v36 != 2 )
    {
      v11 = v55;
      if ( v36 == 4 )
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
    v7 = v56;
    if ( v56 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v23) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v52) = 0;
      UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, v52);
      *(_DWORD *)(PdoExt(a3) + 2796) = 1073807363;
      goto LABEL_13;
    }
    v24 = v54;
  }
  Log((__int64)a1, 1024, 1701720644, *(unsigned __int16 *)(a2 + 4), (int)v23);
  UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v41, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v23);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
