/*
 * XREFs of Command_Create @ 0x1C00503E4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004FFB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0050500 (Command_CreateCommandTimeoutTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  memset(v11, 0, 0x38uLL);
  v11[6] = off_1C00451B0;
  LODWORD(v11[0]) = 56;
  v11[3] = 0x100000001LL;
  v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656);
  v11[4] = a1;
  v7 = v6(WdfDriverGlobals, v11, &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 6u, 0xBu, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids, v7);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v12,
           off_1C00451B0);
    *(_QWORD *)v9 = v12;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 64),
        5u,
        6u,
        0xAu,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        v12);
    *(_QWORD *)(v9 + 8) = a2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 128));
    *(_DWORD *)(v9 + 36) = 1;
    *a3 = v9;
    return (unsigned int)Command_CreateCommandTimeoutTimer(v9);
  }
  return v8;
}
