/*
 * XREFs of ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180002EF0 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800031C0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000326C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004BE8 (-RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000D8D0 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013F00 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18002E948 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementWorkCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  __int64 v3; // rsi
  _BYTE *v4; // rdi
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // rcx
  bool v11; // zf
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const GUID *v16; // r8
  const GUID *v17; // r9
  char v18; // dl
  char v19; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v21; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+48h] [rbp-69h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-49h]
  int v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+74h] [rbp-3Dh]
  char *v26; // [rsp+78h] [rbp-39h]
  int v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+84h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-19h] BYREF
  __int64 *v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+C0h] [rbp+Fh]
  int v32; // [rsp+C4h] [rbp+13h]
  _QWORD *v33; // [rsp+C8h] [rbp+17h]
  int v34; // [rsp+D0h] [rbp+1Fh]
  int v35; // [rsp+D4h] [rbp+23h]

  v3 = a2[5];
  v4 = (char *)a2 + 820;
  v21 = a2[3];
  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)a2 + 204) = a2[102] & 0xFFFFFFFC | 1;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v6, 0x11uLL) )
  {
    v32 = 0;
    v35 = 0;
    v30 = &v21;
    v31 = 8;
    v33 = v4;
    v34 = 1;
    TlgWrite(v7, &unk_180042773, v8, v9, 4u, &pData);
  }
  while ( *((int *)a2 + 5) >= 0 )
  {
    *v4 &= ~*((_BYTE *)a2 + 822);
    *((_BYTE *)a2 + 822) = 0;
    v19 = RmpPolicyComputeDesiredState(a2);
    LOBYTE(v10) = v19;
    if ( (v19 & 8) == 0 )
      goto LABEL_6;
    if ( *v4 < 0x80u )
    {
      if ( (*v4 & 8) != 0 )
        goto LABEL_6;
      memset_0(&pData, 0, 0x40uLL);
      v33 = a2;
      RmpSystemQueryMemUtilMetricsForHosts((struct _RM_ACTIVITY_HOST_METRICS *)&pData, 1u, 8u);
      if ( (v35 & 0x80000) == 0
        || (int)RmpSystemIsActivityHostTooLargeForSwap(
                  (struct _RM_ACTIVITY_HOST_METRICS *)&pData,
                  *(_DWORD *)(a2[5] + 528LL),
                  &v20) < 0
        || !v20 )
      {
        LOBYTE(v10) = v19;
        goto LABEL_6;
      }
      LOBYTE(v10) = v19;
    }
    LOBYTE(v10) = (unsigned __int8)v10 | 0x80;
    v19 = (char)v10;
LABEL_6:
    if ( *v4 == (_BYTE)v10 )
      break;
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 1uLL) )
    {
      v25 = 0;
      v28 = 0;
      v23 = &v21;
      v26 = &v19;
      v24 = 8;
      v27 = 1;
      TlgWrite(v10, &unk_180042943, v16, v17, 4u, &v22);
      LOBYTE(v10) = v19;
    }
    v18 = *v4;
    if ( ((unsigned __int8)v10 & *v4) == (_BYTE)v10 )
      RmpEnforcementUnoptimizeHost((__int64)a2, v3 + 40, v18 & ~(_BYTE)v10);
    else
      RmpEnforcementOptimizeHost((__int64)a2, (unsigned __int8)v10 & ~v18);
    RtlWakeAllConditionVariable(a2 + 100);
  }
  v11 = a2[135] == 0LL;
  *((_BYTE *)a2 + 1128) = 0;
  if ( !v11 )
    RmpActivityHostRemoveFromRemediationGroup((struct _RM_ACTIVITY_HOST *)a2, 1u);
  *((_DWORD *)a2 + 204) &= ~1u;
  RtlWakeAllConditionVariable(a2 + 100);
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v3 + 1528));
  RmpActivityHostCheckDelete((struct _RM_ACTIVITY_HOST *)a2);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v12, 0x19uLL) )
  {
    v25 = 0;
    v28 = 0;
    v23 = &v21;
    v24 = 8;
    v26 = v4;
    v27 = 1;
    TlgWrite(v13, &unk_180042884, v14, v15, 4u, &v22);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)a2);
}
