/*
 * XREFs of WER_CreateReport @ 0x1C002FB90
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C002723C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006A900 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C002F844 (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C002F8B8 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0030A90 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C0030BF8 (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C006D6F0 (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C00702B0 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r12
  int DeviceWerThrottleMask; // edx
  int inserted; // ebx
  int v11; // ebx
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // r15
  __int64 v14; // rdx
  __int64 *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 *v18; // rsi
  __int64 i; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Report; // rax
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // r15d
  __int64 *v33; // r12
  __int64 j; // r14
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // r14d
  __int64 *v39; // r15
  __int64 k; // rcx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v46; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-35h]
  __int64 v48; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-29h] BYREF
  __int64 v50; // [rsp+48h] [rbp-21h] BYREF
  char pszDest[40]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v52[16]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a1 + 2440);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  v8 = a4;
  v47 = a4;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v6, v4);
  inserted = 0;
  if ( _bittest(&DeviceWerThrottleMask, v8 & 0x1F) )
    inserted = -1073741823;
  if ( inserted < 0
    || (v11 = *(unsigned __int16 *)(a1 + 2384),
        v12 = *(_WORD *)(a1 + 2386),
        v13 = *(_WORD *)(a1 + 2388),
        memset(pszDest, 0, sizeof(pszDest)),
        inserted = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", v11),
        inserted < 0)
    || (inserted = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v12), inserted < 0)
    || (inserted = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v13), inserted < 0) )
  {
LABEL_77:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      5u,
      0xBu,
      (__int64)&WPP_f8acbe332c4e5c9ca33fe21fe71dd1bd_Traceguids,
      inserted);
    goto LABEL_78;
  }
  v14 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&pszDest[16] = a1;
  *(_OWORD *)&pszDest[24] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v14);
  v17 = 1;
  if ( *(_WORD *)(a1 + 44) )
  {
    v18 = (__int64 *)(a1 + 2280);
    do
    {
      for ( i = *v18; ; i = *v15 )
      {
        v16 = i - 248;
        v15 = (__int64 *)(v16 + 248);
        if ( v18 == (__int64 *)(v16 + 248) )
          break;
        if ( *(unsigned __int16 *)(v16 + 200) == v17 )
        {
          if ( v16 )
          {
            v20 = *(_QWORD *)(v16 + 1328);
            if ( v20 )
            {
              v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v16 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v21,
                "WER Tag",
                241LL,
                "drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              v15 = *(__int64 **)(v20 + 16);
              if ( v15 )
              {
                v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v22,
                  "WER Tag",
                  245LL,
                  "drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v17;
    }
    while ( v17 <= *(unsigned __int16 *)(a1 + 44) );
  }
  Report = TelemetryData_CreateReport(v16, v15, v8, pszDest);
  v7 = Report;
  if ( !Report )
  {
    inserted = -1073741670;
    goto LABEL_61;
  }
  inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
  if ( inserted >= 0 )
  {
    inserted = TelemetryData_InsertTriageDataBlock(v7, a1, 2528LL);
    if ( inserted >= 0 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v7, &WPP_GLOBAL_Control, 8LL);
      if ( inserted >= 0 )
      {
        v24 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control )
        {
          inserted = TelemetryData_InsertTriageDataBlock(v7, WPP_GLOBAL_Control, 80LL);
          if ( inserted < 0 )
            goto LABEL_61;
          v24 = WPP_GLOBAL_Control;
        }
        inserted = imp_WppRecorderLogDumpLiveData(v24, *(_QWORD *)(a1 + 2440), &v48, &v46, v52);
        if ( inserted >= 0 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(v7, v48, v46);
          if ( inserted >= 0 )
          {
            inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v50, &v49, v52);
            if ( inserted >= 0 )
            {
              inserted = TelemetryData_InsertTriageDataBlock(v7, v50, v49);
              if ( inserted >= 0 )
              {
                if ( !*(_BYTE *)(a1 + 200)
                  || (v25 = *(_QWORD *)(a1 + 24)) == 0
                  || (inserted = TelemetryData_InsertTriageDataBlock(v7, v25, 336LL), inserted >= 0)
                  && ((v26 = *(_QWORD *)(a1 + 24), (v27 = *(_QWORD *)(v26 + 64)) == 0)
                   || (inserted = TelemetryData_InsertTriageDataBlock(v7, *(_QWORD *)(v26 + 64), 400LL), inserted >= 0)
                   && ((v28 = *(_QWORD *)(v27 + 24)) == 0 || (inserted = WER_StoreDeviceContext(v7, v28), inserted >= 0))) )
                {
                  v29 = *(_QWORD *)(a1 + 736);
                  if ( !v29
                    || (inserted = TelemetryData_InsertTriageDataBlock(v7, v29, *(unsigned __int16 *)(v29 + 2)),
                        inserted >= 0) )
                  {
                    v30 = *(_QWORD *)(a1 + 1176);
                    if ( !v30
                      || (inserted = TelemetryData_InsertTriageDataBlock(v7, v30, *(unsigned __int16 *)(v30 + 2)),
                          inserted >= 0) )
                    {
                      v31 = *(_QWORD *)(a1 + 2472);
                      if ( !v31
                        || (inserted = TelemetryData_InsertTriageDataBlock(v7, v31, *(unsigned __int16 *)(a1 + 2464)),
                            inserted >= 0) )
                      {
                        v32 = 1;
                        if ( *(_WORD *)(a1 + 44) )
                        {
                          v33 = (__int64 *)(a1 + 2280);
                          while ( 2 )
                          {
                            for ( j = *v33; ; j = *(_QWORD *)(v35 + 248) )
                            {
                              v35 = j - 248;
                              if ( v33 == (__int64 *)(v35 + 248) )
                                break;
                              if ( *(unsigned __int16 *)(v35 + 200) == v32 )
                              {
                                if ( v35 )
                                {
                                  inserted = TelemetryData_InsertTriageDataBlock(v7, v35, 1464LL);
                                  if ( inserted < 0 )
                                    goto LABEL_60;
                                  v36 = *(_QWORD *)(v35 + 32);
                                  if ( v36 )
                                  {
                                    inserted = TelemetryData_InsertTriageDataBlock(
                                                 v7,
                                                 v36,
                                                 *(unsigned __int16 *)(v36 + 2));
                                    if ( inserted < 0 )
                                      goto LABEL_60;
                                  }
                                  inserted = imp_WppRecorderLogDumpLiveData(
                                               WPP_GLOBAL_Control,
                                               *(_QWORD *)(v35 + 1432),
                                               &v48,
                                               &v46,
                                               v52);
                                  if ( inserted < 0 )
                                    goto LABEL_60;
                                  inserted = TelemetryData_InsertTriageDataBlock(v7, v48, v46);
                                  if ( inserted < 0 )
                                    goto LABEL_60;
                                  v37 = *(_QWORD *)(v35 + 1328);
                                  if ( v37 )
                                  {
                                    inserted = WER_StoreDeviceContext(v7, v37);
                                    if ( inserted < 0 )
                                      goto LABEL_60;
                                  }
                                }
                                break;
                              }
                            }
                            if ( ++v32 <= (unsigned int)*(unsigned __int16 *)(a1 + 44) )
                              continue;
                            break;
                          }
LABEL_60:
                          LOBYTE(v8) = v47;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_61:
  v38 = 1;
  if ( *(_WORD *)(a1 + 44) )
  {
    v39 = (__int64 *)(a1 + 2280);
    do
    {
      for ( k = *v39; ; k = *(_QWORD *)(v41 + 248) )
      {
        v41 = k - 248;
        if ( v39 == (__int64 *)(v41 + 248) )
          break;
        if ( *(unsigned __int16 *)(v41 + 200) == v38 )
        {
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 1328);
            if ( v42 )
            {
              v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v41 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                WdfDriverGlobals,
                v43,
                "WER Tag",
                232LL,
                "drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              if ( *(_QWORD *)(v42 + 16) )
              {
                v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                  WdfDriverGlobals,
                  v44,
                  "WER Tag",
                  236LL,
                  "drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v38;
    }
    while ( v38 <= *(unsigned __int16 *)(a1 + 44) );
    LOBYTE(v8) = v47;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16));
  if ( inserted < 0 )
    goto LABEL_77;
  inserted = TelemetryData_SubmitReport(v7);
  if ( inserted >= 0 )
    WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 2440));
LABEL_78:
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v7, 0x74614454u);
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v7, 0x74614454u);
  }
  return (unsigned int)inserted;
}
