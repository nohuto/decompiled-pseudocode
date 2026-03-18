/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x1C006B570
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0066274 (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C00276D4 (HUBMISC_QueryKseDeviceFlags.c)
 *     WER_CreateReport @ 0x1C00308C0 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006A394 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // edi
  int v9; // eax
  char v10; // zf
  bool v11; // zf
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF
  int v24; // [rsp+90h] [rbp+30h] BYREF

  v18 = *(_QWORD *)(a1 + 2464);
  v23 = 0LL;
  v22 = 0LL;
  v8 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v23, &v22, v18);
  if ( v8 < 0 )
    goto LABEL_75;
  v10 = *(_BYTE *)(a1 + 216) == 0;
  v19 = *(_QWORD *)(a1 + 2464);
  v20 = 0LL;
  v21 = 0LL;
  HUBMISC_QueryKseDeviceFlags(a2, a3, a4, &v20, &v21, v10, v19);
  v24 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v22,
         &g_ResetTTOnCancel,
         4LL,
         &v24,
         0LL,
         0LL);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = v24 == 0;
    goto LABEL_7;
  }
  if ( v9 != -1073741772 )
  {
    v15 = 35;
    goto LABEL_73;
  }
  if ( (v20 & 0x100) == 0 )
  {
    v10 = (v21 & 0x100) == 0;
LABEL_7:
    if ( v10 )
      goto LABEL_9;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
LABEL_9:
  v24 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v22,
         L".0",
         4LL,
         &v24,
         0LL,
         0LL);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v11 = v24 == 0;
    goto LABEL_14;
  }
  if ( v9 != -1073741772 )
  {
    v15 = 36;
LABEL_73:
    LODWORD(v17) = v9;
    goto LABEL_74;
  }
  if ( (v20 & 0x200) != 0 )
  {
LABEL_15:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
    goto LABEL_16;
  }
  v11 = (v21 & 0x200) == 0;
LABEL_14:
  if ( !v11 )
    goto LABEL_15;
LABEL_16:
  if ( (v20 & 0x800) != 0 || (v21 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v24 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v22,
         &g_DisableLpm,
         4LL,
         &v24,
         0LL,
         0LL);
  if ( v8 >= 0 )
  {
    v12 = v24 == 0;
    goto LABEL_24;
  }
  if ( v8 != -1073741772 )
  {
    v15 = 37;
    LODWORD(v17) = v8;
LABEL_74:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      v15,
      (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
      v17);
    goto LABEL_75;
  }
  if ( (v20 & 0x1000) == 0 )
  {
    v12 = (v21 & 0x1000) == 0;
LABEL_24:
    if ( v12 )
      goto LABEL_26;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
LABEL_26:
  if ( (v20 & 0x2000) != 0 || (v21 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v20 & 0x8000) != 0 || (v21 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v20 & 0x40000) != 0 || (v21 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v20 & 0x100000) != 0 || (v21 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v20 & 0x400000) != 0 || (v21 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v20 & 0x2000000) != 0 || (v21 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v20 & 0x4000000) != 0 || (v21 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2440), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 216) && ((v20 & 0x10000) != 0 || (v21 & 0x10000) != 0) )
    *(_DWORD *)(a1 + 2440) |= 1u;
  if ( (v20 & 0x10000000) != 0 || (v21 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v20 & 0x20000000) != 0 || (v21 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  v13 = v20;
  if ( (v20 & 8) != 0 || (v14 = v21, (v21 & 8) != 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
    v13 = v20;
    v14 = v21;
  }
  if ( (v13 & 0x800000000LL) != 0 || (v14 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( *(_WORD *)(a1 + 2408) == 8457 && *(_WORD *)(a1 + 2410) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2412) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    WER_CreateReport(a1, 0x800000000LL, 0x800000LL, 0x3002u);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 4u, 3u, 0x26u, (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids);
  }
  v8 = 0;
LABEL_75:
  if ( v22 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v23 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v8;
}
