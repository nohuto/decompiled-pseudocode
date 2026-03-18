/*
 * XREFs of HUBREG_WriteValueToDeviceHardwareKey @ 0x1C006BADC
 * Callers:
 *     HUBDSM_InstallingMsOs20RegistryValues @ 0x1C001AC90 (HUBDSM_InstallingMsOs20RegistryValues.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C00691F4 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C0069234 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 *     HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1C006D610 (HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C006D6BC (HUBREG_UpdateSqmEnumerationFailureCode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteValueToDeviceHardwareKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
          WdfDriverGlobals,
          v9,
          1LL,
          131078LL,
          0LL,
          &v15);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, __int64))(WdfFunctions_01015
                                                                                                 + 1928))(
            WdfDriverGlobals,
            v15,
            a2,
            a3,
            a4,
            a5);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    v12 = 68;
  }
  else
  {
    v12 = 67;
  }
  LODWORD(v14) = v10;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v12,
    (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids,
    v14);
LABEL_6:
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v11;
}
