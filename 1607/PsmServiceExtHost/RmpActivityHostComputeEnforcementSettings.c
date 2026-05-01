/*
 * XREFs of RmpActivityHostComputeEnforcementSettings @ 0x180007140
 * Callers:
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_LEVEL@@2@Z @ 0x1800071DC (-RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_L.c)
 *     RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0 (RmpActivityHostPopulateRunnabilitySettings.c)
 *     RmpActivityHostComputeCommitLimit @ 0x180008040 (RmpActivityHostComputeCommitLimit.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostComputeEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  RmpActivityHostAggregateCommitValues(a1);
  memset_0((void *)a4, 0, 0x38uLL);
  *(_DWORD *)(a4 + 40) = 1;
  *(_DWORD *)(a4 + 48) = 100;
  *(_QWORD *)(a4 + 16) = RmpActivityHostComputeCommitLimit(a1);
  RmpActivityHostGetCommitThresholdsAndLevel(
    a1,
    a2,
    (unsigned __int64 *)a4,
    (unsigned __int64 *)(a4 + 8),
    (enum _RM_COMMIT_LEVEL *)&v9,
    &v10);
  result = RmpActivityHostPopulateRunnabilitySettings(a1, a4);
  if ( a3 )
  {
    result = v9;
    *a3 = v9;
  }
  return result;
}
