/*
 * XREFs of RmpEnforcementWorkCallback @ 0x180016C10
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800106CC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpPolicyComputeDesiredState @ 0x1800176C0 (RmpPolicyComputeDesiredState.c)
 *     RmpActivityHostCheckDelete @ 0x180017F40 (RmpActivityHostCheckDelete.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 *     RmpSystemIsActivityHostTooLargeForSwap @ 0x180019FBC (RmpSystemIsActivityHostTooLargeForSwap.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

void __fastcall RmpEnforcementWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char *v3; // rdi
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  bool v10; // zf
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  char v17; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v19; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v20[48]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+78h] [rbp-19h]
  char v22; // [rsp+86h] [rbp-Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-9h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  char *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]

  v2 = *(_QWORD *)(a2 + 40);
  v3 = (char *)(a2 + 820);
  v19 = *(_QWORD *)(a2 + 24);
  RtlEnterCriticalSection(&RmpGlobalLock);
  *(_DWORD *)(a2 + 816) = *(_DWORD *)(a2 + 816) & 0xFFFFFFFC | 1;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 0x11uLL) )
  {
    v26 = 0;
    v29 = 0;
    v24 = &v19;
    v25 = 8;
    v27 = v3;
    v28 = 1;
    TlgWrite(v6, &unk_18003F7D1, v7, v8, 4u, &pData);
  }
  while ( *(int *)(a2 + 20) >= 0 )
  {
    *v3 &= ~*(_BYTE *)(a2 + 822);
    *(_BYTE *)(a2 + 822) = 0;
    v17 = RmpPolicyComputeDesiredState((struct _RM_ACTIVITY_HOST *)a2);
    LOBYTE(v9) = v17;
    if ( (v17 & 8) == 0 )
      goto LABEL_6;
    if ( *v3 >= 0 )
    {
      if ( (*v3 & 8) != 0 )
        goto LABEL_6;
      memset_0(v20, 0, 0x40uLL);
      v21 = a2;
      RmpSystemQueryMemUtilMetricsForHosts(v20, 1LL);
      if ( (v22 & 8) == 0
        || (int)RmpSystemIsActivityHostTooLargeForSwap(v20, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 1856LL), &v18) < 0
        || !v18 )
      {
        LOBYTE(v9) = v17;
        goto LABEL_6;
      }
      LOBYTE(v9) = v17;
    }
    LOBYTE(v9) = (unsigned __int8)v9 | 0x80;
    v17 = (char)v9;
LABEL_6:
    if ( *v3 == (_BYTE)v9 )
      break;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v26 = 0;
      v29 = 0;
      v24 = &v19;
      v27 = &v17;
      v25 = 8;
      v28 = 1;
      TlgWrite(v9, &unk_18003F394, v15, v16, 4u, &pData);
      LOBYTE(v9) = v17;
    }
    if ( ((unsigned __int8)v9 & (unsigned __int8)*v3) == (_BYTE)v9 )
      RmpEnforcementUnoptimizeHost((struct _RM_ACTIVITY_HOST *)a2, (struct _RM_ENFORCER_CONTEXT *)(v2 + 40));
    else
      RmpEnforcementOptimizeHost((struct _RM_ACTIVITY_HOST *)a2);
    RtlWakeAllConditionVariable(a2 + 800);
  }
  v10 = *(_QWORD *)(a2 + 1048) == 0LL;
  *(_BYTE *)(a2 + 1120) = 0;
  if ( !v10 )
    RmpActivityHostRemoveFromRemediationGroup((PVOID)a2);
  *(_DWORD *)(a2 + 816) &= ~1u;
  RtlWakeAllConditionVariable(a2 + 800);
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v2 + 3344));
  RmpActivityHostCheckDelete((struct _RM_ACTIVITY_HOST *)a2);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v11, 0x19uLL) )
  {
    v26 = 0;
    v29 = 0;
    v24 = &v19;
    v25 = 8;
    v27 = v3;
    v28 = 1;
    TlgWrite(v12, &unk_18003F712, v13, v14, 4u, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  RmpObjectRelease((volatile signed __int32 *)a2);
}
