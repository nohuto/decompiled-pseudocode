/*
 * XREFs of ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30
 * Callers:
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180001970 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180007520 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpTracingControlCallback @ 0x180020320 (RmpTracingControlCallback.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18002CFF4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x1800328D0 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180037848 (-RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EC4C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall RmpActivityHostGetTracingId(struct _RM_ACTIVITY_HOST *a1, struct _RM_ACTIVITY_HOST_TRACING_ID *a2)
{
  struct _RM_ACTIVITY_HOST_TRACING_ID *v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int64 FirstResourceSet; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  memset_0(a2, 0, 0x230uLL);
  if ( *((_DWORD *)a1 + 14) )
  {
    FirstResourceSet = RmpActivityHostGetFirstResourceSet(a1, 1LL);
    if ( FirstResourceSet )
      StringCchCopyW((unsigned __int16 *)a2, v9, *(const unsigned __int16 **)(FirstResourceSet + 32));
    v10 = *((_QWORD *)a1 + 5);
    *((_OWORD *)a2 + 29) = *(_OWORD *)(v10 + 1388);
    *((_OWORD *)a2 + 30) = *(_OWORD *)(v10 + 1404);
    *((_OWORD *)a2 + 31) = *(_OWORD *)(v10 + 1420);
    *((_OWORD *)a2 + 32) = *(_OWORD *)(v10 + 1436);
    *((_DWORD *)a2 + 132) = *(_DWORD *)(v10 + 1452);
    *((_QWORD *)a2 + 68) = *((_QWORD *)a1 + 3);
    *((_DWORD *)a2 + 138) = *((_DWORD *)a1 + 16);
  }
  else
  {
    v4 = a2;
    v5 = (__int128 *)((char *)a1 + 64);
    v6 = 3LL;
    do
    {
      v4 = (struct _RM_ACTIVITY_HOST_TRACING_ID *)((char *)v4 + 128);
      v7 = *v5;
      v5 += 8;
      *((_OWORD *)v4 - 8) = v7;
      *((_OWORD *)v4 - 7) = *(v5 - 7);
      *((_OWORD *)v4 - 6) = *(v5 - 6);
      *((_OWORD *)v4 - 5) = *(v5 - 5);
      *((_OWORD *)v4 - 4) = *(v5 - 4);
      *((_OWORD *)v4 - 3) = *(v5 - 3);
      *((_OWORD *)v4 - 2) = *(v5 - 2);
      *((_OWORD *)v4 - 1) = *(v5 - 1);
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v4 = *v5;
    *((_OWORD *)v4 + 1) = v5[1];
    *((_OWORD *)v4 + 2) = v5[2];
    *((_OWORD *)v4 + 3) = v5[3];
    *((_OWORD *)v4 + 4) = v5[4];
    *((_OWORD *)a2 + 29) = *((_OWORD *)a1 + 33);
    *((_OWORD *)a2 + 30) = *((_OWORD *)a1 + 34);
    *((_OWORD *)a2 + 31) = *((_OWORD *)a1 + 35);
    *((_OWORD *)a2 + 32) = *((_OWORD *)a1 + 36);
    *((_DWORD *)a2 + 132) = *((_DWORD *)a1 + 148);
    *((_DWORD *)a2 + 133) = *((_DWORD *)a1 + 149);
    *((_DWORD *)a2 + 134) = *((_DWORD *)a1 + 150);
    *((_QWORD *)a2 + 68) = *((_QWORD *)a1 + 76);
    *((_DWORD *)a2 + 138) = 0;
  }
}
