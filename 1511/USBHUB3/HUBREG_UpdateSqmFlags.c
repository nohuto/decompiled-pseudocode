/*
 * XREFs of HUBREG_UpdateSqmFlags @ 0x1C006DE18
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C00152B0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00664B0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBREG_UpdateSqmFlags(__int64 a1)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v4; // rax
  int result; // eax
  unsigned __int16 v6; // r9
  int v7; // eax
  int v8; // edi
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632);
  v13 = 0LL;
  v4 = v3(WdfDriverGlobals, v2);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v4,
             1LL,
             131103LL,
             0LL,
             &v14);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
               WdfDriverGlobals,
               v14,
               L"\b\n",
               131103LL,
               0,
               0LL,
               0LL,
               &v13);
    if ( result >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, int *))(WdfFunctions_01015 + 1920))(
             WdfDriverGlobals,
             v13,
             L"\"$",
             &v12);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v10 = v12;
      }
      else
      {
        if ( v7 != -1073741772 )
        {
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 WdfDriverGlobals->Driver,
                 off_1C00570E8);
          LODWORD(v11) = v8;
          result = WPP_RECORDER_SF_d(
                     *(_QWORD *)(v9 + 64),
                     2u,
                     2u,
                     0x5Cu,
                     (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
                     v11);
          goto LABEL_30;
        }
        v10 = 0;
      }
      v12 = *(_DWORD *)(a1 + 1624) | 8 | v10;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *))(WdfFunctions_01015 + 1968))(
                 WdfDriverGlobals,
                 v13,
                 L"\"$");
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD))(WdfFunctions_01015
                                                                                                  + 1968))(
                   WdfDriverGlobals,
                   v13,
                   L"(*",
                   *(unsigned int *)(*(_QWORD *)(a1 + 8) + 216LL));
        if ( result >= 0 )
        {
          result = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2568));
          if ( !result )
            goto LABEL_30;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                     WdfDriverGlobals,
                     v13,
                     L"24",
                     4LL,
                     4,
                     a1 + 2584);
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                       WdfDriverGlobals,
                       v13,
                       L"24",
                       4LL,
                       4,
                       a1 + 2588);
            if ( result >= 0 )
            {
              result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                         WdfDriverGlobals,
                         v13,
                         L"24",
                         4LL,
                         4,
                         a1 + 2592);
              if ( result >= 0 )
              {
                result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                           WdfDriverGlobals,
                           v13,
                           L"24",
                           4LL,
                           4,
                           a1 + 2596);
                if ( result >= 0 )
                {
                  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                             WdfDriverGlobals,
                             v13,
                             L"24",
                             4LL,
                             4,
                             a1 + 2600);
                  if ( result >= 0 )
                  {
                    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                               WdfDriverGlobals,
                               v13,
                               L"24",
                               4LL,
                               4,
                               a1 + 2604);
                    if ( result >= 0 )
                    {
                      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                                 WdfDriverGlobals,
                                 v13,
                                 L"24",
                                 4LL,
                                 4,
                                 a1 + 2608);
                      if ( result >= 0 )
                        goto LABEL_30;
                      v6 = 101;
                    }
                    else
                    {
                      v6 = 100;
                    }
                  }
                  else
                  {
                    v6 = 99;
                  }
                }
                else
                {
                  v6 = 98;
                }
              }
              else
              {
                v6 = 97;
              }
            }
            else
            {
              v6 = 96;
            }
          }
          else
          {
            v6 = 95;
          }
        }
        else
        {
          v6 = 94;
        }
      }
      else
      {
        v6 = 93;
      }
    }
    else
    {
      v6 = 91;
    }
  }
  else
  {
    v6 = 90;
  }
  LODWORD(v11) = result;
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             v6,
             (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
             v11);
LABEL_30:
  if ( v13 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v14 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
