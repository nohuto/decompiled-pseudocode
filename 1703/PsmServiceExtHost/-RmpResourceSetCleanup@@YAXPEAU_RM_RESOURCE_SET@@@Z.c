/*
 * XREFs of ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800141A0
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpResourceSetCleanup(struct _RM_RESOURCE_SET *a1)
{
  void *v1; // r8
  void *v3; // r8
  void *v4; // rcx

  v1 = (void *)*((_QWORD *)a1 + 12);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RmpPartitionRelease(*((HANDLE **)a1 + 14));
  v4 = (void *)*((_QWORD *)a1 + 15);
  if ( v4 )
    NtClose(v4);
}
