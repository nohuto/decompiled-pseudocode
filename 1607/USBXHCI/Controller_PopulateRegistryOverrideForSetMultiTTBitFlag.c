/*
 * XREFs of Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004DCC4
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009270 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004B06C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-20h]
  unsigned int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         0LL,
         L"vx",
         131097LL,
         0LL,
         &v6);
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 64),
               3u,
               3u,
               0xA3u,
               (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
               v4);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               v6,
               L"HJ",
               4LL,
               &v5,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      result = v5;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          result = 0x2000000000000000LL;
          *(_QWORD *)(a1 + 232) |= 0x2000000000000000uLL;
        }
      }
      else
      {
        result = 0xDFFFFFFFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 232) &= ~0x2000000000000000uLL;
      }
    }
  }
  if ( v6 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
