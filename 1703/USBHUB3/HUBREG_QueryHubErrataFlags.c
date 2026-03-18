/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x1C006FABC
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0069FFC (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C0029CAC (HUBMISC_QueryKseDeviceFlags.c)
 *     WER_CreateReport @ 0x1C0033910 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006E7C4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  int v9; // esi
  _WORD *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+30h] [rbp-51h]
  __int64 v19; // [rsp+38h] [rbp-49h]
  __int64 v20; // [rsp+78h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+7h] BYREF
  __int64 v23; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+98h] [rbp+17h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+A8h] [rbp+27h] BYREF
  int v27; // [rsp+E8h] [rbp+67h] BYREF

  v5 = *(_BYTE *)(a1 + 192);
  v19 = *(_QWORD *)(a1 + 2488);
  v26 = 0LL;
  v20 = 0LL;
  v9 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v26, &v20, v19);
  if ( v9 < 0 )
    goto LABEL_66;
  v13 = *(_DWORD *)(a1 + 160) == 3;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( v13 && (v10 = *(_WORD **)(a1 + 168)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      a2,
      a3,
      a4,
      v10,
      *(_WORD **)(a1 + 176),
      *(_WORD **)(a1 + 184),
      &v25,
      &v24,
      &v23,
      &v22,
      &v21,
      *(_BYTE *)(a1 + 232) == 0,
      *(_QWORD *)(a1 + 2488));
  else
    HUBMISC_QueryKseDeviceFlags(
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      &v25,
      &v24,
      &v23,
      &v22,
      &v21,
      *(_BYTE *)(a1 + 232) == 0,
      *(_QWORD *)(a1 + 2488));
  v11 = v25 | v24 | v23 | v22 | v21;
  v27 = 0;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v20,
          &g_ResetTTOnCancel,
          4LL,
          &v27,
          0LL,
          0LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      v16 = 36;
      goto LABEL_64;
    }
    v13 = (v11 & 0x100) == 0;
  }
  else
  {
    v13 = v27 == 0;
  }
  if ( !v13 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  v27 = 0;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v20,
          L".0",
          4LL,
          &v27,
          0LL,
          0LL);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v14 = v27 == 0;
    goto LABEL_16;
  }
  if ( v12 != -1073741772 )
  {
    v16 = 37;
LABEL_64:
    LODWORD(v18) = v12;
    goto LABEL_65;
  }
  v14 = (v11 & 0x200) == 0;
LABEL_16:
  if ( !v14 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( (v11 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v27 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v20,
         &g_DisableLpm,
         4LL,
         &v27,
         0LL,
         0LL);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741772 )
    {
      v15 = (v11 & 0x1000) == 0;
      goto LABEL_24;
    }
    v16 = 38;
    LODWORD(v18) = v9;
LABEL_65:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      v16,
      (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids,
      v18);
    goto LABEL_66;
  }
  v15 = v27 == 0;
LABEL_24:
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( (v11 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v11 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v11 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v11 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v11 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v11 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v11 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2464), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 232) && (v11 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2464) |= 1u;
  if ( (v11 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v11 & 0x8000000000LL) != 0 && v5 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v11 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v11 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v11 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( *(_WORD *)(a1 + 2432) == 8457 && *(_WORD *)(a1 + 2434) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2436) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    WER_CreateReport(a1, 0x2000000LL, 0x10000LL, 12290, 0);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 4u, 3u, 0x27u, (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids);
  }
  v9 = 0;
LABEL_66:
  if ( v20 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
