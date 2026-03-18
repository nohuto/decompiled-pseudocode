/*
 * XREFs of Command_Create @ 0x1C0047020
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0047134 (Command_CreateCommandTimeoutTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  memset(v10, 0, 0x38uLL);
  v10[6] = off_1C0040090;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v10[4] = a1;
  v6 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v10,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 6u, 0xBu, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids, v6);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           v11,
           off_1C0040090);
    *(_QWORD *)v8 = v11;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 64),
        5u,
        6u,
        0xAu,
        (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
        v11);
    *(_QWORD *)(v8 + 8) = a2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 128));
    *(_DWORD *)(v8 + 36) = 1;
    *a3 = v8;
    return (unsigned int)Command_CreateCommandTimeoutTimer(v8);
  }
  return v7;
}
