/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00C8A90
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C0008BBC (EDIDV1_ObtainMonitorSerialNumber.c)
 *     RtlStringCchCopyA @ 0x1C0009514 (RtlStringCchCopyA.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000A7A4 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000A808 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000A878 (EDIDV1_ObtainMonitorManufactureDate.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memcmp @ 0x1C0010840 (memcmp.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     __report_rangecheckfailure @ 0x1C0022B48 (__report_rangecheckfailure.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C00C6C40 (MonitorUnifyCCDMonitorString.c)
 *     MonitorLogBadEDID @ 0x1C01827DC (MonitorLogBadEDID.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _LIST_ENTRY *Flink; // r14
  __int64 v31; // rdi
  PVOID v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _LIST_ENTRY **v38; // rax
  unsigned __int16 *p_Length; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  NTSTATUS v42; // esi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  const UNICODE_STRING *v46; // rsi
  const UNICODE_STRING *v47; // rsi
  ULONG Buffer_high; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int16 v53; // di
  wchar_t *v54; // rax
  __int64 v55; // rcx
  wchar_t *v56; // r14
  struct _UNICODE_STRING *v57; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  const WCHAR *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-31h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  char pszSrc[3]; // [rsp+50h] [rbp-11h] BYREF
  char v76[33]; // [rsp+57h] [rbp-Ah] BYREF
  __int16 v77; // [rsp+78h] [rbp+17h] BYREF

  if ( this[27].Buffer )
  {
    v59 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v59);
  }
  if ( LODWORD(this[23].Buffer) != 1 )
  {
    v61 = L"SIMULATED";
    goto LABEL_59;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock((DXGMONITOR *)this, (void **)&DestinationString, a3, a4) < 0 )
  {
LABEL_42:
    v61 = L"NOEDID";
LABEL_59:
    p_Length = &this[27].Length;
    *(_QWORD *)&this[30].Length = 0LL;
    RtlInitUnicodeString(this + 27, v61);
    BYTE4(this[26].Buffer) = 0;
    goto LABEL_28;
  }
  v5 = *(_QWORD *)&DestinationString.Length;
  v76[27] = 0;
  v6 = EDIDV1_ObtainMonitorManufacturerName(*(_QWORD **)&DestinationString.Length);
  v11 = v6;
  if ( v6 < 0
    || (v12 = EDIDV1_ObtainMonitorProductCodeID((_QWORD *)v5), v11 = v12, v12 < 0)
    || (v13 = EDIDV1_ObtainMonitorSerialNumber((_QWORD *)v5, v76), v11 = v13, v13 < 0) )
  {
    v60 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v60 + 24) = v5;
    *(_QWORD *)(v60 + 32) = v11;
    WdLogEvent5_WdWarning(v60);
    MonitorLogBadEDID(v5, (unsigned int)v11);
    goto LABEL_42;
  }
  v76[13] = 0;
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
    v62 = WdLogNewEntry5_WdAssertion(v15, v7, v9, v10);
    WdLogEvent5_WdAssertion(v62);
  }
  if ( v16 > 0x17 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v15, v7, v9, v10);
    WdLogEvent5_WdAssertion(v63);
  }
  v17 = EDIDV1_ObtainMonitorManufactureDate((_QWORD *)v5);
  v22 = v17;
  if ( v17 < 0 )
  {
    v64 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v64 + 24) = v5;
    *(_QWORD *)(v64 + 32) = v22;
    WdLogEvent5_WdWarning(v64);
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
  v31 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v31 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v25 && !memcmp(&Flink[1].Blink, pszSrc, v25) )
    {
      Flink = 0LL;
      break;
    }
    Flink = Flink->Flink;
  }
  if ( Flink )
  {
    v32 = operator new[](v25 + 32, 0x4D677844u, PagedPool);
    v31 = (__int64)v32;
    if ( !v32 )
    {
      v67 = WdLogNewEntry5_WdLowResource(v33);
      WdLogEvent5_WdLowResource(v67);
      KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
      return 3221225495LL;
    }
    *((_DWORD *)v32 + 5) = v25;
    *((_DWORD *)v32 + 4) = 1;
    if ( RtlStringCchCopyA((NTSTRSAFE_PSTR)v32 + 24, v25 + 1, pszSrc) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      WdLogEvent5_WdAssertion(v69);
    }
    *(_BYTE *)(v31 + v25 + 24) = 0;
    v38 = (struct _LIST_ENTRY **)qword_1C0047CC8;
    *(_QWORD *)v31 = &DXGMONITOR::_UniqueEntryList;
    *(_QWORD *)(v31 + 8) = v38;
    if ( *v38 != &DXGMONITOR::_UniqueEntryList )
      __fastfail(3u);
    *v38 = (struct _LIST_ENTRY *)v31;
    qword_1C0047CC8 = v31;
  }
  else
  {
    if ( !v31 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v65);
    }
    if ( !*(_DWORD *)(v31 + 16) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v66);
    }
    ++*(_DWORD *)(v31 + 16);
  }
  *(_QWORD *)&this[30].Length = v31;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  RtlInitAnsiString(&DestinationString, pszSrc);
  p_Length = &this[27].Length;
  v42 = RtlAnsiStringToUnicodeString(this + 27, &DestinationString, 1u);
  if ( v42 < 0 )
  {
    v70 = WdLogNewEntry5_WdLowResource(v41);
    WdLogEvent5_WdLowResource(v70);
    return (unsigned int)v42;
  }
  BYTE4(this[26].Buffer) = 1;
LABEL_28:
  if ( this[27].Buffer && BYTE4(this[26].Buffer) )
    MonitorUnifyCCDMonitorString(p_Length, v40, v43, v44);
  this[28] = *(struct _UNICODE_STRING *)p_Length;
  if ( BYTE4(this[26].Buffer) )
    this[28].Length -= 6;
  v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 176LL);
  v46 = *(const UNICODE_STRING **)(v45 + 64);
  if ( v46[202].Buffer )
    v47 = v46 + 202;
  else
    v47 = 0LL;
  if ( v47 )
  {
    Buffer_high = HIDWORD(this[1].Buffer);
    String.Buffer = (wchar_t *)&v77;
    v77 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(Buffer_high, 0x10u, &String) < 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
      WdLogEvent5_WdAssertion(v72);
    }
    v53 = String.Length + v47->Length + 8;
    v54 = (wchar_t *)operator new[](v53, 0x4D677844u, PagedPool);
    v56 = v54;
    if ( v54 )
    {
      memset(v54, 0, v53);
      v57 = this + 29;
      v57->Length = 0;
      v57->MaximumLength = v53;
      v57->Buffer = v56;
      RtlAppendUnicodeToString(v57, L"_");
      RtlAppendUnicodeStringToString(v57, v47);
      RtlAppendUnicodeToString(v57, L"_");
      RtlAppendUnicodeStringToString(v57, &String);
      return 0LL;
    }
    v68 = WdLogNewEntry5_WdLowResource(v55);
    WdLogEvent5_WdLowResource(v68);
    return 3221225495LL;
  }
  v71 = WdLogNewEntry5_WdError(v45);
  *(_QWORD *)(v71 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 176LL);
  WdLogEvent5_WdError(v71);
  return 3221225473LL;
}
