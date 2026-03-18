/*
 * XREFs of Controller_TelemetryReport @ 0x1C001BAB4
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C001BE10 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C0008B60 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     TelemetryData_CreateReport @ 0x1C00383E0 (TelemetryData_CreateReport.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0038524 (TelemetryData_InsertTriageDataBlock.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0053A10 (Controller_TelemetryAddControllerData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0053BAC (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0053E18 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     TelemetryData_SubmitReport @ 0x1C0056760 (TelemetryData_SubmitReport.c)
 */

void __fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 Report; // rax
  __int64 v12; // rbx
  PDEVICE_OBJECT v13; // rcx
  unsigned int i; // esi
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[64]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-1h] BYREF

  if ( !(unsigned __int8)Controller_TelemetryOkToGenerateReport(a1, a2, *(unsigned int *)(a3 + 16)) )
    return;
  memset(pszDest, 0, sizeof(pszDest));
  v8 = *(_DWORD *)(a1 + 148) == 1;
  *(_QWORD *)&pszDest[40] = *(_QWORD *)(a3 + 24);
  *(_QWORD *)&pszDest[48] = *(_QWORD *)(a3 + 32);
  *(_QWORD *)&pszDest[56] = *(_QWORD *)(a3 + 40);
  *(_QWORD *)&pszDest[32] = a1;
  if ( v8 )
  {
    RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 152));
    RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 156));
    RtlStringCchPrintfA(&pszDest[10], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 160));
  }
  else
  {
    RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 200));
    RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 205));
    RtlStringCchPrintfA(&pszDest[10], 5uLL, "%s", (const char *)(a1 + 210));
  }
  RtlStringCchPrintfA(&pszDest[15], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 224));
  Report = TelemetryData_CreateReport(v10, v9, *(unsigned int *)(a3 + 16), pszDest);
  v12 = Report;
  if ( !Report )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xD4u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    return;
  }
  if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
    && (int)TelemetryData_InsertTriageDataBlock(v12, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
    && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
     || (int)TelemetryData_InsertTriageDataBlock(v12, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
  {
    Controller_TelemetryAddControllerData(a1, v12);
    if ( (int)TelemetryData_InsertTriageDataBlock(v12, &WPP_GLOBAL_Control, 8LL) >= 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( !WPP_GLOBAL_Control )
      {
LABEL_15:
        if ( (int)imp_WppRecorderDumpLiveDriverData(v13, &v19, &v17, v22) >= 0
          && (!v19 || (int)TelemetryData_InsertTriageDataBlock(v12, v19, v17) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v12, *a4, 336LL) < 0 )
              break;
            v15 = *(_QWORD *)(*a4 + 64LL);
            if ( *(_QWORD *)(v15 + 8) == a1
              && ((int)TelemetryData_InsertTriageDataBlock(v12, *(_QWORD *)(*a4 + 64LL), 24LL) < 0
               || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v15 + 16), &v20, &v18, v22) < 0
               || (int)TelemetryData_InsertTriageDataBlock(v12, v20, v18) < 0) )
            {
              break;
            }
            ++i;
          }
          v16 = TelemetryData_SubmitReport(v12);
          if ( v16 >= 0 )
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          else
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 64),
              2u,
              3u,
              0xD5u,
              (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
              v16);
        }
        goto LABEL_28;
      }
      if ( (int)TelemetryData_InsertTriageDataBlock(v12, WPP_GLOBAL_Control, 80LL) >= 0 )
      {
        v13 = WPP_GLOBAL_Control;
        goto LABEL_15;
      }
    }
  }
LABEL_28:
  if ( *(_DWORD *)(v12 + 8) )
  {
    ExFreePoolWithTag(*(PVOID *)v12, 0x74614454u);
    *(_QWORD *)v12 = 0LL;
    *(_DWORD *)(v12 + 8) = 0;
  }
  ExFreePoolWithTag((PVOID)v12, 0x74614454u);
}
