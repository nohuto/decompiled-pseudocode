/*
 * XREFs of InitPep @ 0x1C0014AD8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     PepNotifyQueryCapabilities @ 0x1C0014BE4 (PepNotifyQueryCapabilities.c)
 *     RegisterPepDevice @ 0x1C0014C58 (RegisterPepDevice.c)
 *     PepQueryVetoList @ 0x1C0014FE8 (PepQueryVetoList.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001503C (ProcLibTraceGetPlatformIdleStates.c)
 *     PepNotifyQueryPlatformIdleStates @ 0x1C0015090 (PepNotifyQueryPlatformIdleStates.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001ADB8 (ProcLibTraceQueryCapabilities.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int VetoList; // edi
  char v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  VetoList = RegisterPepDevice(a1);
  if ( VetoList >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000DD08,
      0LL);
    if ( !PepPlatformStatesQueried )
    {
      PepNotifyQueryPlatformIdleStates(a1);
      PepPlatformStatesQueried = 1;
      ProcLibTraceGetPlatformIdleStates(0LL);
      VetoList = PepQueryVetoList(a1);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000DD08);
    if ( VetoList >= 0 )
    {
      VetoList = PepNotifyQueryCapabilities(a1, (unsigned int)&v7, (unsigned int)&v6, (unsigned int)&v5, (__int64)&v4);
      if ( VetoList >= 0 )
      {
        *(_BYTE *)(a1 + 1065) = v4;
        *(_BYTE *)(a1 + 1064) = v5;
        *(_DWORD *)(a1 + 1056) = v6;
        *(_DWORD *)(a1 + 1060) = v7;
        ProcLibTraceQueryCapabilities(a1, 0LL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)VetoList;
}
