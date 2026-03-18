/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004E670
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C004E590 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dx @ 0x1C0008F04 (WPP_RECORDER_SF_dx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v5; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r8
  _QWORD *v10; // rdi
  PDEVICE_OBJECT result; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2 == 2;
  v5 = *a1;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 312))(WdfDriverGlobals, v5);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 952))(
           WdfDriverGlobals,
           v7,
           131097LL,
           0LL,
           &v16);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
           WdfDriverGlobals,
           v5,
           1LL,
           131097LL,
           0LL,
           &v16);
  }
  if ( v8 < 0 )
  {
    LODWORD(v13) = v8;
    WPP_RECORDER_SF_d(a1[8], 3u, 3u, 0xA0u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v13);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v16,
           &DestinationString,
           &v15) >= 0 )
    {
      if ( v15 )
      {
        if ( v15 == 1 )
          a1[29] |= 0x8000000000000000uLL;
      }
      else
      {
        a1[29] &= ~0x8000000000000000uLL;
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = a2;
    WPP_RECORDER_SF_d(a1[8], 5u, 3u, 0xA1u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v13);
  }
  v10 = a1 + 29;
  do
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dx(a1[8], 5u, v9, 0xA2u, v12);
    ++v2;
    ++v10;
  }
  while ( v2 < 2 );
  return result;
}
