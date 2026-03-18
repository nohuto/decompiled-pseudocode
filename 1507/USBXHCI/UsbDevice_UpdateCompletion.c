/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x1C00318A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0031A1C (UsbDevice_UpdateUsbDevice.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0031F1C (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dqDL @ 0x1C0032008 (WPP_RECORDER_SF_dqDL.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(v2 + 440);
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v5,
    v12);
  v9 = v12[1];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      4u,
      0xBu,
      0x1Fu,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      *(unsigned __int8 *)(v2 + 135),
      *(_QWORD *)v2);
LABEL_7:
    v10 = 3221225473LL;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 68) != 1 )
  {
    WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL), *(unsigned __int8 *)(a1 + 69), v7, v8);
    if ( *(_BYTE *)(a1 + 68) == 29 )
      *(_DWORD *)(v9 + 56) |= 1u;
    goto LABEL_7;
  }
  WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL), v6, *(unsigned __int8 *)(a1 + 69), 32);
  UsbDevice_UpdateUsbDevice(v2, v9);
  v10 = 0LL;
LABEL_8:
  *(_QWORD *)(v2 + 440) = 0LL;
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           v5,
           v10);
}
