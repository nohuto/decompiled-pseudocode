/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18002CFF4
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180029750 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18002EBC4 (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmSrvHostTrySetCommitTargetForPple(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  UCHAR v11; // dl
  const struct _TlgProvider_t *v12; // rcx
  struct _RM_ACTIVITY_HOST *v13; // rbx
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST *v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pwsz[272]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+270h] [rbp+170h] BYREF
  int v24; // [rsp+278h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR v25; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v26; // [rsp+2A0h] [rbp+1A0h]
  __int64 v27; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned __int64 *v29; // [rsp+2C0h] [rbp+1C0h]
  __int64 v30; // [rsp+2C8h] [rbp+1C8h]
  struct _RM_ACTIVITY_HOST **v31; // [rsp+2D0h] [rbp+1D0h]
  __int64 v32; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 *v33; // [rsp+2E0h] [rbp+1E0h]
  __int64 v34; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+300h] [rbp+200h] BYREF

  v4 = RmSvcGlobals;
  v21 = a4;
  v20 = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v7, &unk_180040BD4, v8, v9, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v10 = RmpActivityHostFindByHostId(v4, a2, &v20);
  v13 = v20;
  if ( v10 >= 0 )
  {
    v14 = RmpActivityHostTrySetCommitTargetForPple(v20, v21);
    if ( v14 >= 0 )
      v14 = 0;
  }
  else
  {
    v14 = v10 | 0x10000000;
  }
  v19 = v14;
  if ( TraceLoggingProviderEnabled(v12, v11, 0LL) )
  {
    if ( v13 )
    {
      RmpActivityHostGetTracingId(v13, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
    }
    else
    {
      memset_0(pwsz, 0, 0x230uLL);
      v23 = a2;
    }
    v24 = a3;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v15, 0x400000000009uLL) )
  {
    v27 = 4LL;
    v26 = &v19;
    TlgCreateWsz(&pDesc, pwsz);
    LODWORD(v20) = v24;
    v31 = &v20;
    v33 = &v21;
    v29 = &v23;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 8LL;
    TlgWrite((TraceLoggingHProvider)&v23, &unk_180040E76, v16, v17, 7u, &v25);
  }
  if ( v13 )
    RmpObjectRelease(v13);
  return v19;
}
