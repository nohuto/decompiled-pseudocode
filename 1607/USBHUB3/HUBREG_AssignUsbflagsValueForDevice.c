/*
 * XREFs of HUBREG_AssignUsbflagsValueForDevice @ 0x1C006BBB0
 * Callers:
 *     HUBDSM_MarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor @ 0x1C0019270 (HUBDSM_MarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00674F0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor @ 0x1C006AD50 (HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor.c)
 *     HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x1C006AD80 (HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0028068 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006B3D8 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_AssignUsbflagsValueForDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h] BYREF
  char v15[8]; // [rsp+50h] [rbp-28h] BYREF
  char v16[8]; // [rsp+58h] [rbp-20h] BYREF
  char v17[8]; // [rsp+60h] [rbp-18h] BYREF

  HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 1972), v17, v16, v15);
  v8 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  v13 = 0LL;
  v9 = HUBREG_OpenCreateUsbflagsDeviceKey(
         (__int64)v17,
         (__int64)v16,
         (__int64)v15,
         0x20006u,
         &v14,
         &v13,
         *(_QWORD *)(v8 + 1432));
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, int, __int64))(WdfFunctions_01015
                                                                                                  + 1928))(
            WdfDriverGlobals,
            v13,
            a2,
            3LL,
            a4,
            a3);
    v9 = v10;
    if ( v10 < 0 )
    {
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x11u,
        (__int64)&WPP_d9e6b8ce2d2d3a2fc161dd0ed8437b42_Traceguids,
        v12);
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
