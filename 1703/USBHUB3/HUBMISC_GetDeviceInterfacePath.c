/*
 * XREFs of HUBMISC_GetDeviceInterfacePath @ 0x1C002A0E8
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0065940 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006832C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBMISC_GetDeviceInterfacePath(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v11, 0, 0x38uLL);
  *a3 = 0LL;
  v11[3] = 0x100000001LL;
  LODWORD(v11[0]) = 56;
  v11[4] = a2;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, _QWORD *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v11,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 632))(
           WdfDriverGlobals,
           a2,
           a1,
           0LL,
           *a3);
  else
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x5Eu, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids, v8);
  if ( v9 < 0 && *a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
