/*
 * XREFs of Command_CreateCommandTimeoutTimer @ 0x1C0050500
 * Callers:
 *     Command_Create @ 0x1C00503E4 (Command_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall Command_CreateCommandTimeoutTimer(_QWORD *a1)
{
  int v2; // ebx
  _QWORD v4[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v5[7]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v4, 0, sizeof(v4));
  LODWORD(v4[0]) = 40;
  v4[1] = Command_WdfEvtTimerFunction;
  LODWORD(v4[2]) = 1000;
  BYTE4(v4[2]) = 1;
  LODWORD(v4[3]) = 500;
  memset(v5, 0, sizeof(v5));
  v5[4] = *a1;
  LODWORD(v5[0]) = 56;
  v5[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 2544))(
         WdfDriverGlobals,
         v4,
         v5,
         a1 + 3);
  if ( v2 < 0 )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 64LL),
      2u,
      6u,
      0xCu,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v2,
      v4[0],
      v4[1],
      v4[2],
      v4[3]);
  return (unsigned int)v2;
}
