/*
 * XREFs of ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002374
 * Callers:
 *     ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002360 (-RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     RmCoreRpcSrvSetHostLimits @ 0x18002D680 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x180003EA8 (RmpResourceLimitsAreLegal.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006120 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiSetHostLimits(
        struct _RM_ACTIVATOR *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v4; // eax
  struct _RM_ACTIVITY_HOST *v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-69h] BYREF
  struct _RM_ACTIVITY_HOST *v15; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  __int128 v20; // [rsp+70h] [rbp-29h]
  __int128 v21; // [rsp+80h] [rbp-19h]
  unsigned int *v22; // [rsp+90h] [rbp-9h]
  const struct _TlgProvider_t *v23; // [rsp+98h] [rbp-1h]
  char *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  struct _RM_ACTIVITY_HOST **v26; // [rsp+B0h] [rbp+17h]
  const struct _TlgProvider_t *v27; // [rsp+B8h] [rbp+1Fh]

  v16 = a2;
  v18 = 264LL;
  v15 = 0LL;
  v17 = 8LL;
  if ( (unsigned int)RmpResourceLimitsAreLegal(a3, &v18, &v17) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v4 = RmpActivityHostFindByHostId(RmSvcGlobals, v16, &v15);
    v5 = v15;
    v14 = v4;
    if ( v4 >= 0 )
    {
      v6 = *((_QWORD *)a3 + 4);
      if ( (*((_BYTE *)a3 + 56) & 0x10) != 0 )
        *((_QWORD *)v15 + 114) = v6;
      else
        *((_QWORD *)v15 + 115) = v6;
      v7 = *((_OWORD *)v5 + 43);
      pData = (EVENT_DATA_DESCRIPTOR)*((_OWORD *)v5 + 42);
      v8 = *((_OWORD *)v5 + 44);
      v20 = v7;
      *(_QWORD *)&v7 = *((_QWORD *)v5 + 90);
      v21 = v8;
      v22 = (unsigned int *)v7;
      *(_QWORD *)&v20 = RmpActivityHostComputeCommitLimit(v5);
      v9 = RmpActivityHostApplyEnforcementSettings(v5, (struct _RM_ENFORCEMENT_SETTINGS *)&pData, 0);
      if ( v9 >= 0 )
        v9 = 0;
      v14 = v9;
    }
    if ( v5 )
      RmpObjectRelease(v5);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    v14 = -1073741583;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    *((_QWORD *)&v21 + 1) = 8LL;
    *(_QWORD *)&v21 = &v16;
    v22 = &v14;
    v24 = (char *)a3 + 32;
    LODWORD(v15) = *((_DWORD *)a3 + 14);
    v26 = &v15;
    v23 = v10;
    v25 = 8LL;
    v27 = v10;
    TlgWrite(v10, &unk_18004106A, v11, v12, 6u, &pData);
  }
  return v14;
}
