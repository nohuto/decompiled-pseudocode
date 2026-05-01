/*
 * XREFs of RmpEnforcementWorkCallback @ 0x180006D40
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180012DDC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     RmpAcquireGlobalLock @ 0x18002E498 (RmpAcquireGlobalLock.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18003BE70 (RmpActivityHostRemoveFromRemediationGroup.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180042530 (RmpEnforcementUpdateFreezeState.c)
 */

__int64 __fastcall RmpEnforcementWorkCallback(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // dl
  char v6; // [rsp+4Ch] [rbp-Ch]
  char v7; // [rsp+4Eh] [rbp-Ah]

  RmpAcquireGlobalLock();
  *(_DWORD *)(a2 + 768) = *(_DWORD *)(a2 + 768) & 0xFFFFFFFC | 1;
  while ( *(int *)(a2 + 20) >= 0 )
  {
    *(_BYTE *)(a2 + 772) &= ~*(_BYTE *)(a2 + 774);
    *(_BYTE *)(a2 + 774) = 0;
    v3 = RmpPolicyComputeDesiredState(a2);
    if ( (v3 & 8) != 0 )
    {
      if ( (RmpPolicyActivityHostMetricsInitialize((struct _RM_ACTIVITY_HOST *)a2), (v7 & 0xC) == 0xC) && (v6 & 1) != 0
        || *(char *)(a2 + 772) < 0 )
      {
        v3 |= 0x80u;
      }
    }
    v4 = *(_BYTE *)(a2 + 772);
    if ( v4 == v3 )
      goto LABEL_17;
    if ( (v3 & v4) == v3 )
      RmpEnforcementUnoptimizeHost(
        (struct _RM_ACTIVITY_HOST *)a2,
        (struct _RM_ENFORCER_CONTEXT *)((char *)RmSvcGlobals + 48),
        v4 & ~v3);
    else
      RmpEnforcementOptimizeHost((struct _RM_ACTIVITY_HOST *)a2, v3 & ~v4);
    RtlWakeAllConditionVariable(a2 + 752);
  }
  if ( !*(_DWORD *)(a2 + 40) && *(_DWORD *)(a2 + 584) == 4 && (*(_BYTE *)(a2 + 772) & 0x40) != 0 )
    RmpEnforcementUpdateFreezeState((struct _RM_ACTIVITY_HOST *)a2);
LABEL_17:
  if ( *(_QWORD *)(a2 + 864) )
    RmpActivityHostRemoveFromRemediationGroup((PVOID)a2);
  *(_DWORD *)(a2 + 768) &= ~1u;
  RtlWakeAllConditionVariable(a2 + 752);
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)RmSvcGlobals
                                                                             + 260));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return RmpObjectRelease((PVOID)a2);
}
