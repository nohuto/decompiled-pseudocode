/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004BD50
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C004BC9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_xd @ 0x1C00204E4 (WPP_RECORDER_SF_xd.c)
 */

PDEVICE_OBJECT __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  PDEVICE_OBJECT result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2 == 2;
  v3 = *a1;
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 312))(WdfDriverGlobals, v3);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 952))(
           WdfDriverGlobals,
           v5,
           131097LL,
           0LL,
           &v15);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
           WdfDriverGlobals,
           v3,
           1LL,
           131097LL,
           0LL,
           &v15);
  }
  if ( v6 < 0 )
  {
    LODWORD(v12) = v6;
    WPP_RECORDER_SF_d(a1[8], 3u, 3u, 0x9Fu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v15,
           &DestinationString,
           &v14) >= 0 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
          a1[29] |= 0x8000000000000000uLL;
      }
      else
      {
        a1[29] &= ~0x8000000000000000uLL;
      }
    }
  }
  v9 = v15;
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return (PDEVICE_OBJECT)WPP_RECORDER_SF_xd(a1[8], v9, v7, v8, v11);
  return result;
}
