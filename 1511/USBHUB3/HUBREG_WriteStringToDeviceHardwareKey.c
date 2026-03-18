/*
 * XREFs of HUBREG_WriteStringToDeviceHardwareKey @ 0x1C006C880
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00664B0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteStringToDeviceHardwareKey(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v5,
         1LL,
         131078LL,
         0LL,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1960))(
           WdfDriverGlobals,
           v11,
           &g_SymbolicName,
           a3);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v8 = 70;
  }
  else
  {
    v8 = 69;
  }
  LODWORD(v10) = v6;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v8,
    (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
    v10);
LABEL_6:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v7;
}
