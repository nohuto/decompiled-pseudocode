/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18002A7B8
 * Callers:
 *     RmpEnforcementEmptyProcess @ 0x18002B130 (RmpEnforcementEmptyProcess.c)
 * Callees:
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     MemUtilEmptyProcess @ 0x180038A00 (MemUtilEmptyProcess.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int a4)
{
  unsigned int v7; // ebx
  UCHAR v8; // dl
  TraceLoggingHProvider v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  int v12; // r10d
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  WCHAR pwsz[268]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+258h] [rbp+158h]
  char v22; // [rsp+260h] [rbp+160h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  int *v24; // [rsp+290h] [rbp+190h]
  int v25; // [rsp+298h] [rbp+198h]
  int v26; // [rsp+29Ch] [rbp+19Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v28; // [rsp+2B0h] [rbp+1B0h]
  int v29; // [rsp+2B8h] [rbp+1B8h]
  int v30; // [rsp+2BCh] [rbp+1BCh]
  char *v31; // [rsp+2C0h] [rbp+1C0h]
  int v32; // [rsp+2C8h] [rbp+1C8h]
  int v33; // [rsp+2CCh] [rbp+1CCh]
  int *v34; // [rsp+2D0h] [rbp+1D0h]
  int v35; // [rsp+2D8h] [rbp+1D8h]
  int v36; // [rsp+2DCh] [rbp+1DCh]
  int *v37; // [rsp+2E0h] [rbp+1E0h]
  int v38; // [rsp+2E8h] [rbp+1E8h]
  int v39; // [rsp+2ECh] [rbp+1ECh]

  v7 = MemUtilEmptyProcess(a2);
  if ( TraceLoggingProviderEnabled(v9, v8, 0LL) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostGetTracingId((__int64)a1, (__int64)pwsz);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v10, 0x11uLL) )
      {
        v26 = 0;
        v24 = (int *)&v16;
        v16 = v7;
        v25 = v11;
        TlgCreateWsz(&pDesc, pwsz);
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v28 = &v17;
        v31 = &v22;
        v34 = &v18;
        v17 = v21;
        v37 = &v19;
        v29 = v12;
        v32 = v12 + 4;
        v18 = a3;
        v35 = v12;
        v19 = a4;
        v38 = v12;
        TlgWrite((TraceLoggingHProvider)(unsigned int)(v12 + 4), &unk_18003F3D8, v13, v14, v12 + 4, &pData);
      }
    }
  }
  return v7;
}
