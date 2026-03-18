/*
 * XREFs of HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070DC8
 * Callers:
 *     HUBDSM_InstallingMsOs20RegistryValues @ 0x1C001D6A0 (HUBDSM_InstallingMsOs20RegistryValues.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C006E1C4 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C006E284 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 *     HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1C0072960 (HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C0072A14 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteValueToDeviceHardwareKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
          WdfDriverGlobals,
          v10,
          1LL,
          131078LL,
          0LL,
          &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, __int64))(WdfFunctions_01015
                                                                                                 + 1928))(
            WdfDriverGlobals,
            v16,
            a2,
            a3,
            a4,
            a5);
    v12 = v11;
    if ( v11 >= 0 )
      goto LABEL_6;
    v13 = 70;
  }
  else
  {
    v13 = 69;
  }
  LODWORD(v15) = v11;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v13,
    (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
    v15);
LABEL_6:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v12;
}
