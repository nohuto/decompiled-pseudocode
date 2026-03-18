/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006ACC0
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0069D70 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000F844 (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C00276D4 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C00281EC (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006A394 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int v9; // edi
  __int64 v10; // rax
  NTSTATUS v11; // eax
  unsigned __int16 v12; // r9
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  char v20; // al
  __int64 v22; // [rsp+28h] [rbp-B1h]
  int v23; // [rsp+40h] [rbp-99h] BYREF
  __int64 v24; // [rsp+48h] [rbp-91h] BYREF
  __int64 v25; // [rsp+50h] [rbp-89h] BYREF
  __int64 v26; // [rsp+58h] [rbp-81h] BYREF
  __int64 v27; // [rsp+60h] [rbp-79h] BYREF
  __int64 v28; // [rsp+68h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  char v30; // [rsp+80h] [rbp-59h] BYREF

  *(_DWORD *)&DestinationString.Length = 6291456;
  DestinationString.Buffer = (unsigned __int16 *)&v30;
  v7 = *(_QWORD *)(a1 + 8);
  v27 = 0LL;
  v26 = 0LL;
  v9 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v27, &v26, *(_QWORD *)(v7 + 1432));
  if ( v9 < 0 )
    goto LABEL_132;
  v10 = *(_QWORD *)(a1 + 8);
  v24 = 0LL;
  v25 = 0LL;
  HUBMISC_QueryKseDeviceFlags(a2, a3, a4, &v24, &v25, 0, *(_QWORD *)(v10 + 1432));
  v11 = RtlUnicodeStringPrintf(
          &DestinationString,
          L"IgnoreHWSerNum%04X%04X",
          *(unsigned __int16 *)(a1 + 1980),
          *(unsigned __int16 *)(a1 + 1982));
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 23;
LABEL_131:
    LODWORD(v22) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
      v22);
    goto LABEL_132;
  }
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v27,
          &DestinationString,
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      v12 = 24;
      goto LABEL_131;
    }
  }
  else if ( v23 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 1u);
  }
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"\b\n",
          2LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    if ( v23 )
    {
      *(_BYTE *)(a1 + 2036) = BYTE1(v23);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 25;
    goto LABEL_131;
  }
  if ( (v24 & 1) != 0 || (v25 & 1) != 0 )
  {
LABEL_18:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x80u);
    goto LABEL_19;
  }
  if ( (v24 & 2) != 0 || (v25 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 2u);
LABEL_19:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          &g_IgnoreHwSerialNumber,
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v13 = v23 == 0;
    goto LABEL_24;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 26;
    goto LABEL_131;
  }
  if ( (v24 & 0x40) == 0 )
  {
    v13 = (v25 & 0x40) == 0;
LABEL_24:
    if ( v13 )
      goto LABEL_26;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 1u);
LABEL_26:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"68",
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v14 = v23 == 0;
    goto LABEL_31;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 27;
    goto LABEL_131;
  }
  if ( (v24 & 0x80000000) == 0 )
  {
    v14 = (int)v25 >= 0;
LABEL_31:
    if ( v14 )
      goto LABEL_33;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x200000u);
LABEL_33:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          &g_ResetOnResume,
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v15 = v23 == 0;
    goto LABEL_38;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 28;
    goto LABEL_131;
  }
  if ( (v24 & 4) == 0 )
  {
    v15 = (v25 & 4) == 0;
LABEL_38:
    if ( v15 )
      goto LABEL_40;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 4u);
LABEL_40:
  v23 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 8u);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"&(",
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    if ( v23 )
      goto LABEL_47;
    goto LABEL_46;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 29;
    goto LABEL_131;
  }
  if ( (v24 & 8) != 0 || (v25 & 8) != 0 )
LABEL_46:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1628), 0xFFFFFFF7);
LABEL_47:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"02",
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v16 = v23 == 0;
    goto LABEL_52;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 30;
    goto LABEL_131;
  }
  if ( (v24 & 0x10) == 0 )
  {
    v16 = (v25 & 0x10) == 0;
LABEL_52:
    if ( v16 )
      goto LABEL_54;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x10u);
LABEL_54:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"(*",
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v17 = v23 == 0;
    goto LABEL_59;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 31;
    goto LABEL_131;
  }
  if ( (v24 & 0x20) == 0 )
  {
    v17 = (v25 & 0x20) == 0;
LABEL_59:
    if ( v17 )
      goto LABEL_61;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x20u);
LABEL_61:
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          &g_DisableLpm,
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      v12 = 32;
      goto LABEL_131;
    }
    if ( (v24 & 0x1000) != 0 )
      goto LABEL_67;
    v18 = (v25 & 0x1000) == 0;
  }
  else
  {
    v18 = v23 == 0;
  }
  if ( !v18 )
LABEL_67:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80u);
  if ( (v24 & 0x400) != 0 || (v25 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x40u);
  if ( (v24 & 0x4000) != 0 || (v25 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x100u);
  if ( ((v24 & 0x10000) != 0 || (v25 & 0x10000) != 0) && *(_BYTE *)(*(_QWORD *)a1 + 216LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80u);
  if ( (v24 & 0x80000) != 0 || (v25 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400u);
  if ( (v24 & 0x200000) != 0 || (v25 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x800u);
  if ( (v24 & 0x800000) != 0 || (v25 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x1000u);
  if ( (v24 & 0x1000000) != 0 || (v25 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x2000u);
  v23 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L",.",
          4LL,
          &v23,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v19 = v23 == 0;
    goto LABEL_95;
  }
  if ( v11 != -1073741772 )
  {
    v12 = 33;
    goto LABEL_131;
  }
  if ( (v24 & 0x8000000) == 0 )
  {
    v19 = (v25 & 0x8000000) == 0;
LABEL_95:
    if ( v19 )
      goto LABEL_97;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x8000u);
LABEL_97:
  if ( (v24 & 0x2000) != 0 || (v25 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x20000u);
  if ( (v24 & 0x20000) != 0 || (v25 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x40000u);
  if ( (v24 & 0x40000000) != 0 || (v25 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x100000u);
  if ( ((v24 & 0x400000) != 0 || (v25 & 0x400000) != 0) && (*(_DWORD *)(a1 + 1616) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80000u);
  if ( (v24 & 0x100000000LL) != 0 || (v25 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400000u);
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L".0",
          8LL,
          &v28,
          0LL,
          0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      v12 = 34;
      goto LABEL_131;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2452), 4u);
    v20 = BYTE6(v28);
    *(_DWORD *)(a1 + 2448) |= 4u;
    *(_BYTE *)(a1 + 2036) = v20;
    *(_QWORD *)(a1 + 2464) = v28;
  }
  if ( *(_WORD *)(a1 + 1980) == 8457 && *(_WORD *)(a1 + 1982) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 1984) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x10000u);
  HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v26);
  v9 = 0;
LABEL_132:
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
