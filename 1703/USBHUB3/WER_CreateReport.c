/*
 * XREFs of WER_CreateReport @ 0x1C0033910
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C002A78C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006FABC (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C00335C0 (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C0033638 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C00344F0 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C003465C (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0072A4C (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C0075848 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rdi
  int DeviceWerThrottleMask; // eax
  signed int v11; // ebx
  unsigned __int16 v12; // r15
  unsigned __int16 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  unsigned int v19; // ebx
  __int64 *v20; // rdi
  __int64 i; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 Report; // rax
  PDEVICE_OBJECT v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 *v34; // r12
  __int64 j; // r14
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // r14d
  __int64 *v40; // r15
  __int64 k; // rcx
  __int64 v42; // rcx
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  int inserted; // [rsp+30h] [rbp-51h]
  unsigned int v48; // [rsp+34h] [rbp-4Dh] BYREF
  int v49; // [rsp+38h] [rbp-49h]
  unsigned int v50; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v51; // [rsp+40h] [rbp-41h] BYREF
  __int64 v52; // [rsp+48h] [rbp-39h] BYREF
  __int64 v53; // [rsp+50h] [rbp-31h]
  char pszDest[40]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v55[16]; // [rsp+80h] [rbp-1h] BYREF

  v5 = *(_QWORD *)(a1 + 2488);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = a4;
  v9 = 0LL;
  v49 = a4;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v7, v5);
  v11 = ((1 << (v8 & 0x1F)) & DeviceWerThrottleMask) != 0 ? 0xC0000001 : 0;
  if ( ((1 << (v8 & 0x1F)) & DeviceWerThrottleMask) != 0 )
    goto LABEL_75;
  v12 = *(_WORD *)(a1 + 2436);
  v13 = *(_WORD *)(a1 + 2434);
  v14 = *(unsigned __int16 *)(a1 + 2432);
  memset(pszDest, 0, sizeof(pszDest));
  v11 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", v14);
  if ( v11 < 0 )
    goto LABEL_78;
  v11 = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v13);
  if ( v11 < 0 )
    goto LABEL_78;
  v11 = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v12);
  if ( v11 < 0 )
    goto LABEL_78;
  v15 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&pszDest[16] = a1;
  *(_OWORD *)&pszDest[24] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v15);
  v18 = 1;
  v19 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v20 = (__int64 *)(a1 + 2328);
    do
    {
      for ( i = *v20; ; i = *v16 )
      {
        v17 = i - 248;
        v16 = (__int64 *)(v17 + 248);
        if ( v20 == (__int64 *)(v17 + 248) )
          break;
        if ( *(unsigned __int16 *)(v17 + 200) == v19 )
        {
          if ( v17 )
          {
            v22 = *(_QWORD *)(v17 + 1328);
            if ( v22 )
            {
              v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v17 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v23,
                "WER Tag",
                241LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              v16 = *(__int64 **)(v22 + 16);
              if ( v16 )
              {
                v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v24,
                  "WER Tag",
                  245LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v19;
    }
    while ( v19 <= *(unsigned __int16 *)(a1 + 48) );
    v8 = v49;
  }
  Report = TelemetryData_CreateReport(v17, (_DWORD)v16, v8, (unsigned int)pszDest, a5);
  v53 = Report;
  v9 = Report;
  if ( !Report )
  {
    v11 = -1073741670;
LABEL_60:
    inserted = v11;
    goto LABEL_61;
  }
  inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
  v11 = inserted;
  if ( inserted < 0 )
    goto LABEL_61;
  inserted = TelemetryData_InsertTriageDataBlock(v9, a1, 2584LL);
  v11 = inserted;
  if ( inserted < 0 )
    goto LABEL_61;
  inserted = TelemetryData_InsertTriageDataBlock(v9, &WPP_GLOBAL_Control, 8LL);
  v11 = inserted;
  if ( inserted < 0 )
    goto LABEL_61;
  v26 = WPP_GLOBAL_Control;
  if ( !WPP_GLOBAL_Control )
  {
LABEL_26:
    inserted = imp_WppRecorderLogDumpLiveData(v26, *(_QWORD *)(a1 + 2488), &v51, &v48, v55);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_61;
    inserted = TelemetryData_InsertTriageDataBlock(v9, v51, v48);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_61;
    inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v52, &v50, v55);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_61;
    inserted = TelemetryData_InsertTriageDataBlock(v9, v52, v50);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_61;
    if ( *(_BYTE *)(a1 + 232) )
    {
      v27 = *(_QWORD *)(a1 + 24);
      if ( v27 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(v9, v27, 336LL);
        v11 = inserted;
        if ( inserted < 0 )
          goto LABEL_61;
        v28 = *(_QWORD *)(a1 + 24);
        v29 = *(_QWORD *)(v28 + 64);
        if ( v29 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(v9, *(_QWORD *)(v28 + 64), 448LL);
          v11 = inserted;
          if ( inserted < 0 )
            goto LABEL_61;
          v30 = *(_QWORD *)(v29 + 24);
          if ( v30 )
          {
            inserted = WER_StoreDeviceContext(v9, v30);
            v11 = inserted;
            if ( inserted < 0 )
              goto LABEL_61;
          }
        }
      }
    }
    v31 = *(_QWORD *)(a1 + 784);
    if ( v31 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v31, *(unsigned __int16 *)(v31 + 2));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_61;
    }
    v32 = *(_QWORD *)(a1 + 1224);
    if ( v32 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v32, *(unsigned __int16 *)(v32 + 2));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_61;
    }
    v33 = *(_QWORD *)(a1 + 2520);
    if ( v33 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v33, *(unsigned __int16 *)(a1 + 2512));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_61;
    }
    if ( !*(_WORD *)(a1 + 48) )
      goto LABEL_61;
    v34 = (__int64 *)(a1 + 2328);
    while ( 2 )
    {
      for ( j = *v34; ; j = *(_QWORD *)(v36 + 248) )
      {
        v36 = j - 248;
        if ( v34 == (__int64 *)(v36 + 248) )
          break;
        if ( *(unsigned __int16 *)(v36 + 200) == v18 )
        {
          if ( v36 )
          {
            v11 = TelemetryData_InsertTriageDataBlock(v9, v36, 1464LL);
            if ( v11 < 0 )
              goto LABEL_59;
            v37 = *(_QWORD *)(v36 + 32);
            if ( v37 )
            {
              v11 = TelemetryData_InsertTriageDataBlock(v9, v37, *(unsigned __int16 *)(v37 + 2));
              if ( v11 < 0 )
                goto LABEL_59;
            }
            v11 = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v36 + 1432), &v51, &v48, v55);
            if ( v11 < 0 )
              goto LABEL_59;
            v11 = TelemetryData_InsertTriageDataBlock(v9, v51, v48);
            if ( v11 < 0 )
              goto LABEL_59;
            v38 = *(_QWORD *)(v36 + 1328);
            if ( v38 )
            {
              v11 = WER_StoreDeviceContext(v9, v38);
              if ( v11 < 0 )
                goto LABEL_59;
            }
          }
          break;
        }
      }
      if ( ++v18 <= (unsigned int)*(unsigned __int16 *)(a1 + 48) )
        continue;
      break;
    }
LABEL_59:
    LOBYTE(v8) = v49;
    goto LABEL_60;
  }
  inserted = TelemetryData_InsertTriageDataBlock(v9, WPP_GLOBAL_Control, 80LL);
  v11 = inserted;
  if ( inserted >= 0 )
  {
    v26 = WPP_GLOBAL_Control;
    goto LABEL_26;
  }
LABEL_61:
  v39 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v40 = (__int64 *)(a1 + 2328);
    do
    {
      for ( k = *v40; ; k = *(_QWORD *)(v42 + 248) )
      {
        v42 = k - 248;
        if ( v40 == (__int64 *)(v42 + 248) )
          break;
        if ( *(unsigned __int16 *)(v42 + 200) == v39 )
        {
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 1328);
            if ( v43 )
            {
              v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v42 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                WdfDriverGlobals,
                v44,
                "WER Tag",
                232LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              if ( *(_QWORD *)(v43 + 16) )
              {
                v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                  WdfDriverGlobals,
                  v45,
                  "WER Tag",
                  236LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v39;
    }
    while ( v39 <= *(unsigned __int16 *)(a1 + 48) );
    v11 = inserted;
    v9 = v53;
    LOBYTE(v8) = v49;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16));
LABEL_75:
  if ( v11 < 0 )
  {
LABEL_78:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      5u,
      0xBu,
      (__int64)&WPP_299857439199341686d7b3189d54db6d_Traceguids,
      v11);
    goto LABEL_79;
  }
  v11 = TelemetryData_SubmitReport(v9);
  if ( v11 >= 0 )
    WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 2488));
LABEL_79:
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
      *(_QWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0x74614454u);
  }
  return (unsigned int)v11;
}
