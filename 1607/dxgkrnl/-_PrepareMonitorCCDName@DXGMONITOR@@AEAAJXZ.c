/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00F07DC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000EB78 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EC88 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000ECEC (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000ED5C (EDIDV1_ObtainMonitorManufactureDate.c)
 *     RtlStringCchCopyA @ 0x1C000F770 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0012360 (memcmp.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     __report_rangecheckfailure @ 0x1C0029558 (__report_rangecheckfailure.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00EBE50 (MonitorUnifyCCDMonitorString.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00F06A0 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     MonitorLogBadEDID @ 0x1C01B07F8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  char *v15; // rcx
  unsigned __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  size_t v25; // rsi
  __int64 v26; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v28; // rdi
  PVOID v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rax
  unsigned __int16 *v33; // rdi
  __int64 v34; // rcx
  NTSTATUS v35; // esi
  __int64 v36; // rcx
  const UNICODE_STRING *v37; // rsi
  const UNICODE_STRING *v38; // rsi
  ULONG v39; // ecx
  __int64 v40; // rcx
  unsigned __int16 v41; // di
  wchar_t *v42; // rax
  __int64 v43; // rcx
  wchar_t *v44; // r14
  struct _UNICODE_STRING *v45; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  const WCHAR *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-31h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  char pszSrc[3]; // [rsp+50h] [rbp-11h] BYREF
  char v64[33]; // [rsp+57h] [rbp-Ah] BYREF
  __int16 v65; // [rsp+78h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 58) )
  {
    v47 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v47);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v49 = L"SIMULATED";
    goto LABEL_59;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, (void **)&DestinationString, a3, a4) < 0 )
  {
LABEL_42:
    v49 = L"NOEDID";
LABEL_59:
    v33 = (unsigned __int16 *)((char *)this + 456);
    *((_QWORD *)this + 63) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 456), v49);
    *((_BYTE *)this + 452) = 0;
    goto LABEL_28;
  }
  v5 = *(_QWORD *)&DestinationString.Length;
  v64[27] = 0;
  v6 = EDIDV1_ObtainMonitorManufacturerName(*(_QWORD **)&DestinationString.Length);
  v11 = v6;
  if ( v6 < 0
    || (v12 = EDIDV1_ObtainMonitorProductCodeID((_QWORD *)v5), v11 = v12, v12 < 0)
    || (v13 = EDIDV1_ObtainMonitorSerialNumber((_QWORD *)v5, v64), v11 = v13, v13 < 0) )
  {
    v48 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v48 + 24) = v5;
    *(_QWORD *)(v48 + 32) = v11;
    WdLogEvent5_WdWarning(v48);
    MonitorLogBadEDID(v5, (unsigned int)v11);
    goto LABEL_42;
  }
  v64[13] = 0;
  v14 = 35LL;
  v15 = pszSrc;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( v14 )
  {
    v16 = 35 - v14;
  }
  else
  {
    v16 = 0LL;
    v50 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v50);
  }
  if ( v16 > 0x17 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v51);
  }
  v17 = EDIDV1_ObtainMonitorManufactureDate((_QWORD *)v5);
  v22 = v17;
  if ( v17 < 0 )
  {
    v52 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v52 + 24) = v5;
    *(_QWORD *)(v52 + 32) = v22;
    WdLogEvent5_WdWarning(v52);
    MonitorLogBadEDID(v5, (unsigned int)v22);
  }
  pszSrc[v16] = 95;
  v23 = v16 + 1;
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = 95;
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = a0123456789abcd_0[0];
  pszSrc[v23++] = 95;
  v24 = *(_BYTE *)(v5 + 127) & 0xF;
  pszSrc[v23++] = a0123456789abcd_0[(unsigned __int64)*(unsigned __int8 *)(v5 + 127) >> 4];
  pszSrc[v23] = a0123456789abcd_0[v24];
  v25 = v23 + 1;
  if ( v25 >= 0x23 )
    _report_rangecheckfailure();
  pszSrc[v25] = 0;
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v28 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v28 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v25 && !memcmp(&Flink[1].Blink, pszSrc, v25) )
    {
      Flink = 0LL;
      break;
    }
    Flink = Flink->Flink;
  }
  if ( Flink )
  {
    v29 = operator new(v25 + 32, 0x4D677844u, PagedPool);
    v28 = (__int64)v29;
    if ( !v29 )
    {
      v55 = WdLogNewEntry5_WdLowResource(v30);
      WdLogEvent5_WdLowResource(v55);
      KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
      return 3221225495LL;
    }
    *((_DWORD *)v29 + 5) = v25;
    *((_DWORD *)v29 + 4) = 1;
    if ( RtlStringCchCopyA((NTSTRSAFE_PSTR)v29 + 24, v25 + 1, pszSrc) < 0 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v57);
    }
    *(_BYTE *)(v28 + v25 + 24) = 0;
    v32 = (__int64 *)qword_1C0057F68;
    if ( *(struct _LIST_ENTRY **)qword_1C0057F68 != &DXGMONITOR::_UniqueEntryList )
      __fastfail(3u);
    *(_QWORD *)v28 = &DXGMONITOR::_UniqueEntryList;
    *(_QWORD *)(v28 + 8) = v32;
    *v32 = v28;
    qword_1C0057F68 = v28;
  }
  else
  {
    if ( !v28 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v53);
    }
    if ( !*(_DWORD *)(v28 + 16) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v54);
    }
    ++*(_DWORD *)(v28 + 16);
  }
  *((_QWORD *)this + 63) = v28;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  RtlInitAnsiString(&DestinationString, pszSrc);
  v33 = (unsigned __int16 *)((char *)this + 456);
  v35 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)((char *)this + 456), &DestinationString, 1u);
  if ( v35 < 0 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v34);
    WdLogEvent5_WdLowResource(v58);
    return (unsigned int)v35;
  }
  *((_BYTE *)this + 452) = 1;
LABEL_28:
  if ( *((_QWORD *)this + 58) && *((_BYTE *)this + 452) )
    MonitorUnifyCCDMonitorString(v33);
  *(_OWORD *)((char *)this + 472) = *(_OWORD *)v33;
  if ( *((_BYTE *)this + 452) )
    *((_WORD *)this + 236) -= 6;
  v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL);
  v37 = *(const UNICODE_STRING **)(v36 + 64);
  if ( v37[278].Buffer )
    v38 = v37 + 278;
  else
    v38 = 0LL;
  if ( v38 )
  {
    v39 = *((_DWORD *)this + 7);
    String.Buffer = (wchar_t *)&v65;
    v65 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(v39, 0x10u, &String) < 0 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v40);
      WdLogEvent5_WdAssertion(v60);
    }
    v41 = String.Length + v38->Length + 8;
    v42 = (wchar_t *)operator new(v41, 0x4D677844u, PagedPool);
    v44 = v42;
    if ( v42 )
    {
      memset(v42, 0, v41);
      v45 = (struct _UNICODE_STRING *)((char *)this + 488);
      v45->Length = 0;
      v45->MaximumLength = v41;
      v45->Buffer = v44;
      RtlAppendUnicodeToString(v45, L"_");
      RtlAppendUnicodeStringToString(v45, v38);
      RtlAppendUnicodeToString(v45, L"_");
      RtlAppendUnicodeStringToString(v45, &String);
      return 0LL;
    }
    v56 = WdLogNewEntry5_WdLowResource(v43);
    WdLogEvent5_WdLowResource(v56);
    return 3221225495LL;
  }
  v59 = WdLogNewEntry5_WdError(v36);
  *(_QWORD *)(v59 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL);
  WdLogEvent5_WdError(v59);
  return 3221225473LL;
}
