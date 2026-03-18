/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006F134
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C006E0C8 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010674 (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C0029CAC (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002AE70 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006E7C4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v9; // r13
  __int64 v10; // rax
  int v11; // esi
  _WORD *v12; // r9
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  unsigned __int16 v15; // r9
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  char v24; // al
  __int64 v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  char v37; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v9 = *(_BYTE *)(*(_QWORD *)a1 + 192LL);
  DestinationString.Buffer = (wchar_t *)&v37;
  v10 = *(_QWORD *)(a1 + 8);
  v35 = 0LL;
  v28 = 0LL;
  *(_DWORD *)&DestinationString.Length = 6291456;
  v11 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v35, &v28, *(_QWORD *)(v10 + 1432));
  if ( v11 < 0 )
    goto LABEL_129;
  v33 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( *(_DWORD *)(v4 + 160) == 3 && (v12 = *(_WORD **)(v4 + 168)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      a2,
      a3,
      a4,
      v12,
      *(_WORD **)(v4 + 176),
      *(_WORD **)(v4 + 184),
      &v33,
      &v31,
      &v32,
      &v29,
      &v30,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  else
    HUBMISC_QueryKseDeviceFlags(
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      &v33,
      &v31,
      &v32,
      &v29,
      &v30,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v13 = v33 | v31 | v32 | v29 | v30;
  v14 = RtlUnicodeStringPrintf(
          &DestinationString,
          L"IgnoreHWSerNum%04X%04X",
          *(unsigned __int16 *)(a1 + 1980),
          *(unsigned __int16 *)(a1 + 1982));
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 23;
LABEL_8:
    LODWORD(v26) = v14;
LABEL_128:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v15,
      (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
      v26);
    goto LABEL_129;
  }
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v35,
          &DestinationString,
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 24;
      goto LABEL_8;
    }
  }
  else if ( v27 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 1u);
  }
  v27 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"\b\n",
          2LL,
          &v27,
          0LL,
          0LL);
  if ( v11 >= 0 )
  {
    if ( v27 )
    {
      *(_BYTE *)(a1 + 2036) = BYTE1(v27);
      goto LABEL_25;
    }
    goto LABEL_19;
  }
  if ( v11 != -1073741772 )
  {
    v15 = 25;
    LODWORD(v26) = v11;
    goto LABEL_128;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x80u);
    goto LABEL_25;
  }
  if ( (v29 & 2) != 0 || (v30 & 2) != 0 || (v31 & 2) != 0 || (v32 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 2u);
LABEL_25:
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          &g_IgnoreHwSerialNumber,
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 26;
      goto LABEL_8;
    }
    v16 = (v13 & 0x40) == 0;
  }
  else
  {
    v16 = v27 == 0;
  }
  if ( !v16 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 1u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"68",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 27;
      goto LABEL_8;
    }
    v17 = (int)v13 >= 0;
  }
  else
  {
    v17 = v27 == 0;
  }
  if ( !v17 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x200000u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          &g_ResetOnResume,
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 28;
      goto LABEL_8;
    }
    v18 = (v13 & 4) == 0;
  }
  else
  {
    v18 = v27 == 0;
  }
  if ( !v18 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 4u);
  v27 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 8u);
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"&(",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 29;
      goto LABEL_8;
    }
    if ( (v13 & 8) == 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
  if ( !v27 )
LABEL_48:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1628), 0xFFFFFFF7);
LABEL_49:
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"02",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 30;
      goto LABEL_8;
    }
    v19 = (v13 & 0x10) == 0;
  }
  else
  {
    v19 = v27 == 0;
  }
  if ( !v19 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x10u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L":<",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 31;
      goto LABEL_8;
    }
    v20 = (v13 & 0x1000000000LL) == 0;
  }
  else
  {
    v20 = v27 == 0;
  }
  if ( !v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x800000u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"(*",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 32;
      goto LABEL_8;
    }
    v21 = (v13 & 0x20) == 0;
  }
  else
  {
    v21 = v27 == 0;
  }
  if ( !v21 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x20u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          &g_DisableLpm,
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 33;
      goto LABEL_8;
    }
    v22 = (v13 & 0x1000) == 0;
  }
  else
  {
    v22 = v27 == 0;
  }
  if ( !v22 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80u);
  if ( (v13 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x40u);
  if ( (v13 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x100u);
  if ( (v13 & 0x10000) != 0 && *(_BYTE *)(*(_QWORD *)a1 + 232LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80u);
  if ( (v13 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400u);
  if ( (v13 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x800u);
  if ( (v13 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x1000u);
  if ( (v13 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x2000u);
  v27 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L",.",
          4LL,
          &v27,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 34;
      goto LABEL_8;
    }
    v23 = (v13 & 0x8000000) == 0;
  }
  else
  {
    v23 = v27 == 0;
  }
  if ( !v23 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x8000u);
  if ( (v13 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x20000u);
  if ( (v13 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x40000u);
  if ( (v13 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x100000u);
  if ( ((v13 & 0x400000) != 0 || (v13 & 0x4000000000LL) != 0 && v9) && (*(_DWORD *)(a1 + 1616) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x80000u);
  if ( (v13 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x400000u);
  if ( (v13 & 0x2000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x1000000u);
  v34 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L".0",
          8LL,
          &v34,
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v15 = 35;
      goto LABEL_8;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2452), 4u);
    v24 = BYTE6(v34);
    *(_DWORD *)(a1 + 2448) |= 4u;
    *(_BYTE *)(a1 + 2036) = v24;
    *(_QWORD *)(a1 + 2464) = v34;
  }
  if ( *(_WORD *)(a1 + 1980) == 8457 && *(_WORD *)(a1 + 1982) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 1984) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1628), 0x10000u);
  HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v28);
  v11 = 0;
LABEL_129:
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}
