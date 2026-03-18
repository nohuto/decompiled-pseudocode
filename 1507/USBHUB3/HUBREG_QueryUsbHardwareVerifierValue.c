/*
 * XREFs of HUBREG_QueryUsbHardwareVerifierValue @ 0x1C0069958
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0065B94 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0069100 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F284 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryUsbHardwareVerifierValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int16 v10; // dx
  void *v11; // rdi
  void *v12; // rax
  int v13; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // r14
  NTSTATUS v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-79h]
  __int64 v21; // [rsp+40h] [rbp-61h] BYREF
  __int64 v22; // [rsp+48h] [rbp-59h] BYREF
  __int64 v23; // [rsp+50h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-41h] BYREF
  char v26; // [rsp+70h] [rbp-31h] BYREF

  v24 = a5;
  *(_DWORD *)&DestinationString.Length = 3407872;
  *a7 = 0;
  v10 = *(_WORD *)(a1 + 2);
  DestinationString.Buffer = (unsigned __int16 *)&v26;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( v10 )
  {
    if ( v10 > 0x200u )
    {
      v12 = &g_HwVerifierUsb2XName;
      if ( v10 >= 0x300u )
        v12 = &g_HwVerifierUsb30Name;
      v11 = v12;
    }
    else
    {
      v11 = &g_HwVerifierUsbUpto20Name;
    }
  }
  else
  {
    v11 = &g_HwVerifierUsb30Name;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          0LL,
          &g_HwVerifierKeyName,
          131097LL,
          0LL,
          &v23);
  if ( v13 < 0 )
  {
    v23 = 0LL;
    goto LABEL_12;
  }
  v14 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a2, a3, a4);
  v13 = v14;
  if ( v14 < 0 )
  {
    LODWORD(v20) = v14;
    WPP_RECORDER_SF_d(a6, 2u, 5u, 0xDu, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v20);
    goto LABEL_12;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          v23,
          &DestinationString,
          131097LL,
          0LL,
          &v22);
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v22,
            v11,
            131097LL,
            0LL,
            &v21);
    if ( v13 >= 0 )
    {
      v15 = v24;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
              WdfDriverGlobals,
              v21,
              v24,
              4LL,
              a7,
              0LL,
              0LL);
      if ( v13 >= 0 )
        goto LABEL_45;
      goto LABEL_21;
    }
    v21 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  v15 = v24;
LABEL_21:
  if ( v13 == -1073741772 )
  {
    if ( v21 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v21 = 0LL;
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v22 = 0LL;
    }
    v16 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a2, a3);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
              WdfDriverGlobals,
              v23,
              &DestinationString,
              131097LL,
              0LL,
              &v22);
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                WdfDriverGlobals,
                v22,
                v11,
                131097LL,
                0LL,
                &v21);
        v17 = v21;
        if ( v13 < 0 )
          v17 = 0LL;
        v21 = v17;
      }
      else
      {
        v22 = 0LL;
      }
      *a7 = 0;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                WdfDriverGlobals,
                v21,
                v15,
                4LL,
                a7,
                0LL,
                0LL);
        if ( v13 >= 0 )
          goto LABEL_45;
      }
      if ( v13 == -1073741772 )
      {
        if ( v21 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
          v21 = 0LL;
        }
        if ( v22 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
          v22 = 0LL;
        }
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                WdfDriverGlobals,
                v23,
                &g_HwVerifierGlobalName,
                131097LL,
                0LL,
                &v22);
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                  WdfDriverGlobals,
                  v22,
                  v11,
                  131097LL,
                  0LL,
                  &v21);
          if ( v13 >= 0 )
          {
            v18 = v21;
            *a7 = 0;
            v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                    WdfDriverGlobals,
                    v18,
                    v15,
                    4LL,
                    a7,
                    0LL,
                    0LL);
          }
          else
          {
            v21 = 0LL;
          }
        }
        else
        {
          v22 = 0LL;
        }
      }
    }
    else
    {
      LODWORD(v20) = v16;
      WPP_RECORDER_SF_d(a6, 2u, 5u, 0xEu, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v20);
    }
  }
LABEL_12:
  if ( v13 >= 0 )
  {
LABEL_45:
    LODWORD(v20) = *a7;
    WPP_RECORDER_SF_d(a6, 2u, 5u, 0x10u, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v20);
    goto LABEL_46;
  }
  *a7 = 0;
  if ( v13 != -1073741772 )
  {
    LODWORD(v20) = v13;
    WPP_RECORDER_SF_d(a6, 2u, 5u, 0xFu, (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids, v20);
  }
LABEL_46:
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v22 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v23 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v13;
}
