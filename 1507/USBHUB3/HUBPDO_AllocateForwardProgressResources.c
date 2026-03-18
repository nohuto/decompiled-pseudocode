/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x1C0014B3C
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0014C60 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, 0x38uLL);
  v6[3] = 0x100000001LL;
  LODWORD(v6[0]) = 56;
  v6[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16LL));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, _QWORD *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v6,
         v2,
         a1 + 279);
  v4 = v3;
  if ( v3 >= 0 )
    a1[281] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[279]);
  else
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x71u,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v3);
  return v4;
}
