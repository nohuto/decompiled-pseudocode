/*
 * XREFs of UsbhPortConnect @ 0x1C001BDA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhRawWait @ 0x1C001BFE0 (UsbhRawWait.c)
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001F21C (UsbhAllocateTimeoutObject.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044FA4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhPortConnect(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  int Pdo; // ebp
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  int v18; // [rsp+48h] [rbp-40h]
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
  Log(a1, 1024, 1883459406, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_START);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2 + 24, a1, 1129345907LL, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v5 )
    UsbhDecHubBusy(a1, v6, v5, v8);
  if ( Pdo < 0 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE);
    LOBYTE(v18) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, Pdo, -1, usbfile_busfunc_c, 551, v18);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
    return 0LL;
  }
  else
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v9 = MEMORY[0xFFFFF78000000008];
    v10 = MEMORY[0xFFFFF78000000008];
    v11 = MEMORY[0xFFFFF78000000008];
LABEL_7:
    v12 = 0LL;
    do
    {
      if ( (unsigned __int64)(v11 - v9) > 0x1E8480 && v3 > 1 )
      {
        UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE);
        Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
        Log(a1, 1024, 1145205871, a2, *(unsigned __int16 *)(a2 + 4));
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
          v13 = *(_QWORD *)(a1 + 64);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
            *(_DWORD *)v14 = 1953063287;
            *(_QWORD *)(v14 + 8) = 0LL;
            *(_QWORD *)(v14 + 16) = 20LL;
            *(_QWORD *)(v14 + 24) = 0LL;
          }
        }
      }
      UsbhRawWait(20LL);
      v11 = MEMORY[0xFFFFF78000000008];
      v15 = MEMORY[0xFFFFF78000000008] - v10;
      v10 = MEMORY[0xFFFFF78000000008];
      v12 += v15;
      if ( _InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
      {
        ++v3;
        goto LABEL_7;
      }
    }
    while ( v12 < 0xF4240 );
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE);
    v16 = UsbhAllocateTimeoutObject(a1, a2, &P);
    if ( v16 >= 0 )
    {
      UsbhResetPort(a1);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    UsbhDisablePort(a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE);
    LOBYTE(v18) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, v16, -1, usbfile_busfunc_c, 650, v18);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
    return 0LL;
  }
}
