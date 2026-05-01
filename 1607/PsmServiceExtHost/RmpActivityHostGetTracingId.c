/*
 * XREFs of RmpActivityHostGetTracingId @ 0x18000A170
 * Callers:
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18002A7B8 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180036CA0 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     RmpEnforcementUpdateFreezeState @ 0x1800375CC (RmpEnforcementUpdateFreezeState.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180005C2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostGetTracingId(__int64 a1, __int64 a2)
{
  __int128 *v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 FirstResourceSet; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  memset_0((void *)a2, 0, 0x230uLL);
  if ( *(_DWORD *)(a1 + 48) )
  {
    FirstResourceSet = RmpActivityHostGetFirstResourceSet(a1, 1);
    if ( FirstResourceSet )
      StringCchCopyW((char *)a2, v10, *(char **)(FirstResourceSet + 32));
    v11 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(a2 + 464) = *(_OWORD *)(v11 + 3204);
    *(_OWORD *)(a2 + 480) = *(_OWORD *)(v11 + 3220);
    *(_OWORD *)(a2 + 496) = *(_OWORD *)(v11 + 3236);
    *(_OWORD *)(a2 + 512) = *(_OWORD *)(v11 + 3252);
    *(_DWORD *)(a2 + 528) = *(_DWORD *)(v11 + 3268);
    *(_QWORD *)(a2 + 544) = *(_QWORD *)(a1 + 24);
    result = *(unsigned int *)(a1 + 56);
    *(_DWORD *)(a2 + 552) = result;
  }
  else
  {
    v4 = (__int128 *)a2;
    v5 = (__int128 *)(a1 + 56);
    v6 = 3LL;
    do
    {
      v4 += 8;
      v7 = *v5;
      v5 += 8;
      *(v4 - 8) = v7;
      *(v4 - 7) = *(v5 - 7);
      *(v4 - 6) = *(v5 - 6);
      *(v4 - 5) = *(v5 - 5);
      *(v4 - 4) = *(v5 - 4);
      *(v4 - 3) = *(v5 - 3);
      *(v4 - 2) = *(v5 - 2);
      *(v4 - 1) = *(v5 - 1);
      --v6;
    }
    while ( v6 );
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    *(_OWORD *)(a2 + 464) = *(_OWORD *)(a1 + 520);
    *(_OWORD *)(a2 + 480) = *(_OWORD *)(a1 + 536);
    *(_OWORD *)(a2 + 496) = *(_OWORD *)(a1 + 552);
    *(_OWORD *)(a2 + 512) = *(_OWORD *)(a1 + 568);
    *(_DWORD *)(a2 + 528) = *(_DWORD *)(a1 + 584);
    *(_DWORD *)(a2 + 532) = *(_DWORD *)(a1 + 588);
    *(_DWORD *)(a2 + 536) = *(_DWORD *)(a1 + 592);
    result = *(_QWORD *)(a1 + 600);
    *(_QWORD *)(a2 + 544) = result;
    *(_DWORD *)(a2 + 552) = 0;
  }
  return result;
}
