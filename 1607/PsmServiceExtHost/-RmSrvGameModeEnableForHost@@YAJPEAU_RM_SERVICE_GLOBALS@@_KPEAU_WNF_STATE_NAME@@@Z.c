/*
 * XREFs of ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54
 * Callers:
 *     RmGameModeSrvRegisterForGameMode @ 0x18002E640 (RmGameModeSrvRegisterForGameMode.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144 (RmpGameModeReapplyCurrentResourceAllotment.c)
 *     RmpGameModeRegisterActivityHost @ 0x180032168 (RmpGameModeRegisterActivityHost.c)
 */

__int64 __fastcall RmSrvGameModeEnableForHost(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, struct _WNF_STATE_NAME *a3)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  struct _RM_GAME_MODE_CONTEXT *v8; // rdi
  int v9; // eax
  UCHAR v10; // dl
  const struct _TlgProvider_t *v11; // rcx
  struct _WNF_STATE_NAME *v12; // rbx
  struct _WNF_STATE_NAME v13; // rax
  const struct _TlgProvider_t *v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pwsz[268]; // [rsp+50h] [rbp-B0h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+280h] [rbp+180h] BYREF
  int *v24; // [rsp+2A0h] [rbp+1A0h]
  int v25; // [rsp+2A8h] [rbp+1A8h]
  int v26; // [rsp+2ACh] [rbp+1ACh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  PVOID *p_P; // [rsp+2C0h] [rbp+1C0h]
  int v29; // [rsp+2C8h] [rbp+1C8h]
  int v30; // [rsp+2CCh] [rbp+1CCh]
  __int64 *v31; // [rsp+2D0h] [rbp+1D0h]
  int v32; // [rsp+2D8h] [rbp+1D8h]
  int v33; // [rsp+2DCh] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF

  v4 = RmSvcGlobals;
  v20 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_180040796, v6, v7, 2u, &pData);
  P = 0LL;
  v8 = (struct _RM_SERVICE_GLOBALS *)((char *)v4 + 2920);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v9 = RmpActivityHostFindByHostId((__int64)v4, v20, &P);
  v12 = (struct _WNF_STATE_NAME *)P;
  v18 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)P + 12) || *((_DWORD *)P + 148) != 2 )
    {
      v18 = -1073741790;
    }
    else if ( *((_QWORD *)P + 134) )
    {
      if ( *((PVOID *)v8 + 3) == P )
        RmpGameModeReapplyCurrentResourceAllotment(v8);
    }
    else
    {
      v18 = RmpGameModeRegisterActivityHost(v8, (struct _RM_ACTIVITY_HOST *)P);
      if ( v18 >= 0 )
      {
        v13 = v12[136];
        v18 = 0;
        *a3 = v13;
      }
    }
  }
  if ( TraceLoggingProviderEnabled(v11, v10, 0LL) )
  {
    RmpActivityHostGetTracingId((__int64)v12, (__int64)pwsz);
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v14, 9uLL) )
      {
        v26 = 0;
        v24 = &v18;
        v25 = 4;
        TlgCreateWsz(&pDesc, pwsz);
        v30 = 0;
        v33 = 0;
        p_P = &P;
        v31 = &v20;
        LODWORD(P) = (_DWORD)hProvider;
        v29 = 4;
        v32 = 8;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_180040149, v15, v16, 6u, &v23);
      }
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v12 )
    RmpObjectRelease((volatile signed __int32 *)v12);
  return (unsigned int)v18;
}
