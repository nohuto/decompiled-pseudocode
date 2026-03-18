/*
 * XREFs of UsbhPortConnect @ 0x1C000A1C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhRawWait @ 0x1C000A400 (UsbhRawWait.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000B6D4 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0027B44 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044E74 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhPortConnect(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rdi
  __int64 v6; // rdx
  int Pdo; // ebp
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  void *DeviceExtension; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edi
  int v17; // [rsp+48h] [rbp-40h]
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  Log((_DWORD)a1, 1024, 1883459406, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_START, *(unsigned __int16 *)(a2 + 4), 0);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v5 = UsbhIncHubBusy(a1, 1);
  Pdo = UsbhCreatePdo((__int64)a1, a2);
  if ( v5 )
    UsbhDecHubBusy(a1, v6, v5);
  if ( Pdo < 0 )
  {
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE,
      *(unsigned __int16 *)(a2 + 4),
      Pdo);
    LOBYTE(v17) = 0;
    UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, Pdo, -1, usbfile_busfunc_c, 551, v17);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
    return 0LL;
  }
  else
  {
    UsbhAcquireEnumBusLock(a1);
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v8 = MEMORY[0xFFFFF78000000008];
    v9 = MEMORY[0xFFFFF78000000008];
    v10 = MEMORY[0xFFFFF78000000008];
LABEL_7:
    v11 = 0LL;
    do
    {
      if ( (unsigned __int64)(v10 - v8) > 0x1E8480 && v3 > 1 )
      {
        UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE,
          *(unsigned __int16 *)(a2 + 4),
          -1073741823);
        Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
        Log((_DWORD)a1, 1024, 1145205871, a2, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            15,
            (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
            *(_WORD *)(a2 + 4));
        return 0LL;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          DeviceExtension = a1->DeviceExtension;
          if ( DeviceExtension )
          {
            v13 = *((_QWORD *)DeviceExtension + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
            *(_DWORD *)v13 = 1953063287;
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)(v13 + 16) = 20LL;
            *(_QWORD *)(v13 + 24) = 0LL;
          }
        }
      }
      UsbhRawWait(20LL);
      v10 = MEMORY[0xFFFFF78000000008];
      v14 = MEMORY[0xFFFFF78000000008] - v9;
      v9 = MEMORY[0xFFFFF78000000008];
      v11 += v14;
      if ( _InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
      {
        ++v3;
        goto LABEL_7;
      }
    }
    while ( v11 < 0xF4240 );
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
    v15 = UsbhAllocateTimeoutObject(a1, a2, &P);
    if ( v15 >= 0 )
    {
      UsbhResetPort((__int64)a1, a2, (__int64)P);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    UsbhDisablePort((_DWORD)a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE,
      *(unsigned __int16 *)(a2 + 4),
      v15);
    LOBYTE(v17) = 0;
    UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, v15, -1, usbfile_busfunc_c, 650, v17);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
    return 0LL;
  }
}
