/*
 * XREFs of ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974
 * Callers:
 *     RmGameModeSrvUnregisterForGameMode @ 0x18002E690 (RmGameModeSrvUnregisterForGameMode.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 */

__int64 __fastcall RmSrvGameModeDisableForHost(struct _RM_SERVICE_GLOBALS *a1, __int64 a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  UCHAR v7; // dl
  const struct _TlgProvider_t *v8; // rcx
  volatile signed __int32 *v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pwsz[268]; // [rsp+50h] [rbp-B0h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v19; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v20; // [rsp+2A0h] [rbp+1A0h]
  int v21; // [rsp+2A8h] [rbp+1A8h]
  int v22; // [rsp+2ACh] [rbp+1ACh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  PVOID *p_P; // [rsp+2C0h] [rbp+1C0h]
  int v25; // [rsp+2C8h] [rbp+1C8h]
  int v26; // [rsp+2CCh] [rbp+1CCh]
  __int64 *v27; // [rsp+2D0h] [rbp+1D0h]
  int v28; // [rsp+2D8h] [rbp+1D8h]
  int v29; // [rsp+2DCh] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF

  v2 = RmSvcGlobals;
  v16 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v3, &unk_1800407E8, v4, v5, 2u, &pData);
  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = RmpActivityHostFindByHostId((__int64)v2, v16, &P);
  v9 = (volatile signed __int32 *)P;
  v14 = v6;
  if ( v6 >= 0 )
  {
    if ( *((_QWORD *)P + 134) )
    {
      RmpGameModeUnregisterActivityHost((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 2920));
      v14 = 0;
    }
    else
    {
      v14 = -1073741584;
    }
  }
  if ( TraceLoggingProviderEnabled(v8, v7, 0LL) )
  {
    RmpActivityHostGetTracingId((__int64)v9, (__int64)pwsz);
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v10, 9uLL) )
      {
        v22 = 0;
        v20 = &v14;
        v21 = 4;
        TlgCreateWsz(&pDesc, pwsz);
        v26 = 0;
        v29 = 0;
        p_P = &P;
        v27 = &v16;
        LODWORD(P) = (_DWORD)hProvider;
        v25 = 4;
        v28 = 8;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_180040250, v11, v12, 6u, &v19);
      }
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v9 )
    RmpObjectRelease(v9);
  return v14;
}
