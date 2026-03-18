/*
 * XREFs of HUBREG_UpdateSqmFlags @ 0x1C006D1A8
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0014C60 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBREG_UpdateSqmFlags(__int64 a1)
{
  __int64 v2; // rax
  int result; // eax
  unsigned __int16 v4; // r9
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v2,
             1LL,
             131103LL,
             0LL,
             &v12);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
               WdfDriverGlobals,
               v12,
               L"\b\n",
               131103LL,
               0,
               0LL,
               0LL,
               &v11);
    if ( result >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, int *))(WdfFunctions_01015 + 1920))(
             WdfDriverGlobals,
             v11,
             L"\"$",
             &v10);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v8 = v10;
      }
      else
      {
        if ( v5 != -1073741772 )
        {
          v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 WdfDriverGlobals->Driver,
                 off_1C0057090);
          LODWORD(v9) = v6;
          result = WPP_RECORDER_SF_d(
                     *(_QWORD *)(v7 + 64),
                     2u,
                     2u,
                     0x5Cu,
                     (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids,
                     v9);
          goto LABEL_30;
        }
        v8 = 0;
      }
      v10 = *(_DWORD *)(a1 + 1624) | 8 | v8;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *))(WdfFunctions_01015 + 1968))(
                 WdfDriverGlobals,
                 v11,
                 L"\"$");
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD))(WdfFunctions_01015
                                                                                                  + 1968))(
                   WdfDriverGlobals,
                   v11,
                   L"(*",
                   *(unsigned int *)(*(_QWORD *)(a1 + 8) + 216LL));
        if ( result >= 0 )
        {
          result = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2568));
          if ( !result )
            goto LABEL_30;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                     WdfDriverGlobals,
                     v11,
                     L"24",
                     4LL,
                     4,
                     a1 + 2584);
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                       WdfDriverGlobals,
                       v11,
                       L"24",
                       4LL,
                       4,
                       a1 + 2588);
            if ( result >= 0 )
            {
              result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                         WdfDriverGlobals,
                         v11,
                         L"24",
                         4LL,
                         4,
                         a1 + 2592);
              if ( result >= 0 )
              {
                result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                           WdfDriverGlobals,
                           v11,
                           L"24",
                           4LL,
                           4,
                           a1 + 2596);
                if ( result >= 0 )
                {
                  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                             WdfDriverGlobals,
                             v11,
                             L"24",
                             4LL,
                             4,
                             a1 + 2600);
                  if ( result >= 0 )
                  {
                    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                               WdfDriverGlobals,
                               v11,
                               L"24",
                               4LL,
                               4,
                               a1 + 2604);
                    if ( result >= 0 )
                    {
                      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                                 WdfDriverGlobals,
                                 v11,
                                 L"24",
                                 4LL,
                                 4,
                                 a1 + 2608);
                      if ( result >= 0 )
                        goto LABEL_30;
                      v4 = 101;
                    }
                    else
                    {
                      v4 = 100;
                    }
                  }
                  else
                  {
                    v4 = 99;
                  }
                }
                else
                {
                  v4 = 98;
                }
              }
              else
              {
                v4 = 97;
              }
            }
            else
            {
              v4 = 96;
            }
          }
          else
          {
            v4 = 95;
          }
        }
        else
        {
          v4 = 94;
        }
      }
      else
      {
        v4 = 93;
      }
    }
    else
    {
      v4 = 91;
    }
  }
  else
  {
    v4 = 90;
  }
  LODWORD(v9) = result;
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             v4,
             (__int64)&WPP_f82bbd93e8fe66f2423ffa453a54785f_Traceguids,
             v9);
LABEL_30:
  if ( v11 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v12 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
