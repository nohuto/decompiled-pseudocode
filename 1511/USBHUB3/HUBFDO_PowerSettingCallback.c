/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x1C000BB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-70h]
  int v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[10]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && (unsigned int)*Value <= 1 )
    {
      if ( *Value == 1 )
      {
        if ( (*((_DWORD *)Context + 10) & 0x8000000) != 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            5217LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 308),
            4u,
            3u,
            0x37u,
            (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids);
        }
      }
      else if ( (*((_DWORD *)Context + 10) & 0x8000000) == 0 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 308),
          4u,
          3u,
          0x38u,
          (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids);
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5229,
               "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          LODWORD(v13) = 0;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 308),
            3u,
            3u,
            0x39u,
            (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
            v13);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
        }
      }
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  if ( *Value != *((_DWORD *)Context + 630) )
  {
    v14 = *Value;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 308),
      4u,
      3u,
      0x3Au,
      (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
      v14);
    *((_DWORD *)Context + 630) = *Value;
    memset(v16, 0, 0x24uLL);
    v9 = *Value;
    v16[7] = 0;
    v16[3] = v9;
    v16[6] = 2;
    v16[8] = 2;
    v16[1] = 2;
    v16[4] = 2;
    v16[5] = 2;
    v16[0] = 36;
    v16[2] = 3;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v10,
            v16);
    v4 = v11;
    if ( v11 < 0 )
    {
      LODWORD(v15) = v11;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 308),
        3u,
        3u,
        0x3Bu,
        (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
        v15);
      return 0;
    }
  }
  return (unsigned int)v4;
}
