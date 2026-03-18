/*
 * XREFs of Command_CreateCommandTimeoutTimer @ 0x1C004E7F8
 * Callers:
 *     Command_Create @ 0x1C004E6E4 (Command_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall Command_CreateCommandTimeoutTimer(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v6[7]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = 40;
  v5[1] = Command_WdfEvtTimerFunction;
  LODWORD(v5[2]) = 1000;
  BYTE4(v5[2]) = 1;
  LODWORD(v5[3]) = 500;
  memset(v6, 0, sizeof(v6));
  v6[4] = *a1;
  LODWORD(v6[0]) = 56;
  v6[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 2544))(
         WdfDriverGlobals,
         v5,
         v6,
         a1 + 3);
  v3 = v2;
  if ( v2 < 0 )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 64LL),
      2u,
      6u,
      0xCu,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v2,
      v5[0],
      v5[1],
      v5[2],
      v5[3]);
  return v3;
}
