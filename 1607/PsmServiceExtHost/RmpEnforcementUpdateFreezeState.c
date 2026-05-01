/*
 * XREFs of RmpEnforcementUpdateFreezeState @ 0x1800375CC
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcementUpdateFreezeState(__int64 a1, UCHAR a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // r9d
  void *v5; // rcx
  unsigned int v6; // r9d
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r10d
  int v9; // r10d
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  UCHAR v13; // [rsp+30h] [rbp-D0h] BYREF
  NTSTATUS v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD JobInformation[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pwsz[272]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[8]; // [rsp+270h] [rbp+170h] BYREF
  int v19; // [rsp+278h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp+180h] BYREF
  NTSTATUS *v21; // [rsp+2A0h] [rbp+1A0h]
  int v22; // [rsp+2A8h] [rbp+1A8h]
  int v23; // [rsp+2ACh] [rbp+1ACh]
  UCHAR *v24; // [rsp+2B0h] [rbp+1B0h]
  int v25; // [rsp+2B8h] [rbp+1B8h]
  int v26; // [rsp+2BCh] [rbp+1BCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  char *v28; // [rsp+2D0h] [rbp+1D0h]
  int v29; // [rsp+2D8h] [rbp+1D8h]
  int v30; // [rsp+2DCh] [rbp+1DCh]
  int *v31; // [rsp+2E0h] [rbp+1E0h]
  int v32; // [rsp+2E8h] [rbp+1E8h]
  int v33; // [rsp+2ECh] [rbp+1ECh]

  v13 = a2;
  v3 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 48);
  if ( !(_DWORD)v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, UCHAR))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) + 152LL))(
      a1 + 520,
      *(unsigned int *)(a1 + 588),
      a1 + 56,
      *(_QWORD *)(a1 + 24),
      a2);
    goto LABEL_8;
  }
  if ( (_DWORD)v3 != 1 )
  {
    v4 = -1073741811;
LABEL_9:
    v14 = v4;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)(a1 + 820) & 0x40) != 0) == a2
    || (v5 = *(void **)(a1 + 736),
        JobInformation[0] = 1LL,
        BYTE4(JobInformation[0]) = a2,
        JobInformation[1] = 0LL,
        v14 = NtSetInformationJobObject(v5, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u),
        v14 >= 0) )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
LABEL_10:
  if ( TraceLoggingProviderEnabled(v3, a2, 0LL) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostGetTracingId(a1, (__int64)pwsz);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 9uLL) )
    {
      v23 = 0;
      v26 = 0;
      v21 = &v14;
      v22 = v8;
      v24 = &v13;
      v25 = 1;
      TlgCreateWsz(&pDesc, pwsz);
      v30 = 0;
      v33 = 0;
      v15 = v19;
      v31 = &v15;
      v28 = v18;
      v29 = 8;
      v32 = v9;
      TlgWrite((TraceLoggingHProvider)v18, &unk_1800433DE, v10, v11, 7u, &pData);
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    return (unsigned int)v14;
  }
  return v6;
}
