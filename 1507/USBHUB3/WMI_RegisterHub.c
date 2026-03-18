/*
 * XREFs of WMI_RegisterHub @ 0x1C006F4D8
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall WMI_RegisterHub(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-31h]
  int v6; // [rsp+30h] [rbp-31h]
  _QWORD v7[8]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v8[10]; // [rsp+78h] [rbp+17h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057140);
  memset(v8, 0, sizeof(v8));
  v8[0] = 40;
  *(GUID *)&v8[1] = GUID_USB_WMI_STD_DATA;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 64;
  v7[2] = v8;
  BYTE1(v7[3]) = 1;
  v7[7] = WMI_ExecuteMethodUsbWmiStdData;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
         WdfDriverGlobals,
         a1,
         v7,
         0LL,
         v2 + 2456);
  if ( v3 < 0 )
  {
    v6 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 2440),
      2u,
      3u,
      0xFu,
      (__int64)&WPP_0aebd9e813344ad5cfb424a7bef6ec1b_Traceguids,
      v6);
  }
  memset(v8, 0, sizeof(v8));
  v8[0] = 40;
  *(GUID *)&v8[1] = GUID_USB_WMI_NODE_INFO;
  memset(v7, 0, sizeof(v7));
  v7[2] = v8;
  LODWORD(v7[0]) = 64;
  v7[4] = WMI_QueryInstanceHubNodeInfo;
  BYTE1(v7[3]) = 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v7,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    LODWORD(v5) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v2 + 2440),
             2u,
             3u,
             0x10u,
             (__int64)&WPP_0aebd9e813344ad5cfb424a7bef6ec1b_Traceguids,
             v5);
  }
  return result;
}
