/*
 * XREFs of IoControl_Create @ 0x1C004A948
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C00487D0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

__int64 __fastcall IoControl_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 *v9; // rbx
  _QWORD v11[8]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v12[12]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+108h] [rbp+7Fh] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = 0x100000060LL;
  LODWORD(v12[1]) = 2;
  BYTE5(v12[1]) = 1;
  v12[5] = IoControl_WdfEvtIoDeviceControl;
  memset(v11, 0, 0x38uLL);
  v11[6] = off_1C00411B0;
  LODWORD(v11[0]) = 56;
  v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 1216);
  v11[3] = 0x100000001LL;
  v7 = v6(WdfDriverGlobals, a1, v12, v11, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 4u, 0xAu, (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids, v7);
  }
  else
  {
    v9 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v13,
                      off_1C00411B0);
    *v9 = v13;
    v9[1] = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      4u,
      0xBu,
      (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
      v13);
    *a3 = v9;
  }
  return v8;
}
