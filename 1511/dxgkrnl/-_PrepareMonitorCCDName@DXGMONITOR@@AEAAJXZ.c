/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00E00E0
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C000B114 (RtlStringCchCopyA.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000E918 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000E9E8 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EA58 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000FACC (EDIDV1_ObtainMonitorManufactureDate.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memcmp @ 0x1C0011FB0 (memcmp.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     __report_rangecheckfailure @ 0x1C0022A48 (__report_rangecheckfailure.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00D3EB0 (MonitorUnifyCCDMonitorString.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00E0060 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     MonitorLogBadEDID @ 0x1C0186E88 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(struct _UNICODE_STRING *this, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  struct _LIST_ENTRY **v35; // rax
  unsigned __int16 *p_Length; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  NTSTATUS v39; // esi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  const UNICODE_STRING *v43; // rsi
  const UNICODE_STRING *v44; // rsi
  ULONG Buffer_high; // ecx
  __int64 v46; // rcx
  unsigned __int16 v47; // di
  wchar_t *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  wchar_t *v53; // r14
  struct _UNICODE_STRING *v54; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  const WCHAR *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-31h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  char pszSrc[3]; // [rsp+50h] [rbp-11h] BYREF
  char v73[33]; // [rsp+57h] [rbp-Ah] BYREF
  __int16 v74; // [rsp+78h] [rbp+17h] BYREF

  if ( this[28].Buffer )
  {
    v56 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v56);
  }
  if ( LODWORD(this[23].Buffer) != 1 )
  {
    v58 = L"SIMULATED";
    goto LABEL_59;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock((DXGMONITOR *)this, (void **)&DestinationString, a3, a4) < 0 )
  {
LABEL_42:
    v58 = L"NOEDID";
LABEL_59:
    p_Length = &this[28].Length;
    *(_QWORD *)&this[31].Length = 0LL;
    RtlInitUnicodeString(this + 28, v58);
    BYTE4(this[27].Buffer) = 0;
    goto LABEL_28;
  }
  v5 = *(_QWORD *)&DestinationString.Length;
  v73[27] = 0;
  v6 = EDIDV1_ObtainMonitorManufacturerName(*(_QWORD **)&DestinationString.Length);
  v11 = v6;
  if ( v6 < 0
    || (v12 = EDIDV1_ObtainMonitorProductCodeID((_QWORD *)v5), v11 = v12, v12 < 0)
    || (v13 = EDIDV1_ObtainMonitorSerialNumber((_QWORD *)v5, v73), v11 = v13, v13 < 0) )
  {
    v57 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v57 + 24) = v5;
    *(_QWORD *)(v57 + 32) = v11;
    WdLogEvent5_WdWarning(v57);
    MonitorLogBadEDID(v5, (unsigned int)v11);
    goto LABEL_42;
  }
  v73[13] = 0;
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
    v59 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v59);
  }
  if ( v16 > 0x17 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v60);
  }
  v17 = EDIDV1_ObtainMonitorManufactureDate((_QWORD *)v5);
  v22 = v17;
  if ( v17 < 0 )
  {
    v61 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v61 + 24) = v5;
    *(_QWORD *)(v61 + 32) = v22;
    WdLogEvent5_WdWarning(v61);
    MonitorLogBadEDID(v5, (unsigned int)v22);
  }
  pszSrc[v16] = 95;
  v23 = v16 + 1;
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = 95;
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = a0123456789abcd[0];
  pszSrc[v23++] = 95;
  v24 = *(_BYTE *)(v5 + 127) & 0xF;
  pszSrc[v23++] = a0123456789abcd[(unsigned __int64)*(unsigned __int8 *)(v5 + 127) >> 4];
  pszSrc[v23] = a0123456789abcd[v24];
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
    v29 = operator new[](v25 + 32, 0x4D677844u, PagedPool);
    v28 = (__int64)v29;
    if ( !v29 )
    {
      v64 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
      WdLogEvent5_WdLowResource(v64);
      KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
      return 3221225495LL;
    }
    *((_DWORD *)v29 + 5) = v25;
    *((_DWORD *)v29 + 4) = 1;
    if ( RtlStringCchCopyA((NTSTRSAFE_PSTR)v29 + 24, v25 + 1, pszSrc) < 0 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v66);
    }
    *(_BYTE *)(v28 + v25 + 24) = 0;
    v35 = (struct _LIST_ENTRY **)qword_1C0047D48;
    *(_QWORD *)v28 = &DXGMONITOR::_UniqueEntryList;
    *(_QWORD *)(v28 + 8) = v35;
    if ( *v35 != &DXGMONITOR::_UniqueEntryList )
      __fastfail(3u);
    *v35 = (struct _LIST_ENTRY *)v28;
    qword_1C0047D48 = v28;
  }
  else
  {
    if ( !v28 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v62);
    }
    if ( !*(_DWORD *)(v28 + 16) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v63);
    }
    ++*(_DWORD *)(v28 + 16);
  }
  *(_QWORD *)&this[31].Length = v28;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  RtlInitAnsiString(&DestinationString, pszSrc);
  p_Length = &this[28].Length;
  v39 = RtlAnsiStringToUnicodeString(this + 28, &DestinationString, 1u);
  if ( v39 < 0 )
  {
    v67 = WdLogNewEntry5_WdLowResource(v38, v37, v40, v41);
    WdLogEvent5_WdLowResource(v67);
    return (unsigned int)v39;
  }
  BYTE4(this[27].Buffer) = 1;
LABEL_28:
  if ( this[28].Buffer && BYTE4(this[27].Buffer) )
    MonitorUnifyCCDMonitorString(p_Length);
  this[29] = *(struct _UNICODE_STRING *)p_Length;
  if ( BYTE4(this[27].Buffer) )
    this[29].Length -= 6;
  v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 176LL);
  v43 = *(const UNICODE_STRING **)(v42 + 64);
  if ( v43[206].Buffer )
    v44 = v43 + 206;
  else
    v44 = 0LL;
  if ( v44 )
  {
    Buffer_high = HIDWORD(this[1].Buffer);
    String.Buffer = (wchar_t *)&v74;
    v74 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(Buffer_high, 0x10u, &String) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v46);
      WdLogEvent5_WdAssertion(v69);
    }
    v47 = String.Length + v44->Length + 8;
    v48 = (wchar_t *)operator new[](v47, 0x4D677844u, PagedPool);
    v53 = v48;
    if ( v48 )
    {
      memset(v48, 0, v47);
      v54 = this + 30;
      v54->Length = 0;
      v54->MaximumLength = v47;
      v54->Buffer = v53;
      RtlAppendUnicodeToString(v54, L"_");
      RtlAppendUnicodeStringToString(v54, v44);
      RtlAppendUnicodeToString(v54, L"_");
      RtlAppendUnicodeStringToString(v54, &String);
      return 0LL;
    }
    v65 = WdLogNewEntry5_WdLowResource(v50, v49, v51, v52);
    WdLogEvent5_WdLowResource(v65);
    return 3221225495LL;
  }
  v68 = WdLogNewEntry5_WdError(v42);
  *(_QWORD *)(v68 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 176LL);
  WdLogEvent5_WdError(v68);
  return 3221225473LL;
}
