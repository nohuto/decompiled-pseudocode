/*
 * XREFs of HUBREG_WriteDeviceWerThrottleMask @ 0x1C006D8B4
 * Callers:
 *     WER_UpdateThrottlePolicy @ 0x1C002F844 (WER_UpdateThrottlePolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteDeviceWerThrottleMask(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         a1,
         1LL,
         131103LL,
         0LL,
         v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, int, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v10[0],
           &g_DeviceWerKey,
           131103LL,
           1,
           0LL,
           0LL,
           &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, _QWORD))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v11,
             &g_ThrottleMask,
             a2);
      v6 = v5;
      if ( v5 >= 0 )
        goto LABEL_8;
      v7 = 107;
    }
    else
    {
      v7 = 106;
    }
  }
  else
  {
    v7 = 105;
  }
  LODWORD(v9) = v5;
  WPP_RECORDER_SF_d(a3, 2u, 5u, v7, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v9);
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v10[0] )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v6;
}
