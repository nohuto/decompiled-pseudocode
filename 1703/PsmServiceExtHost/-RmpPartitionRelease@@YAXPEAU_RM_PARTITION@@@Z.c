/*
 * XREFs of ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800141A0 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002C6C8 (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 * Callees:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180031AD8 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpPartitionRelease(HANDLE *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  _DWORD *v4; // rdi
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax

  _m_prefetchw(a1);
  v2 = (signed __int64)*a1;
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  v4 = a1[3];
  RtlAcquireSRWLockExclusive(v4 + 78);
  v4[80] = GetCurrentThreadId();
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  v7 = v5 - 1;
  if ( v6 )
  {
    if ( v7 )
      __fastfail(0xEu);
    if ( a1[1] )
    {
      *((_DWORD *)a1 + 56) &= ~1u;
      *((_DWORD *)a1 + 56) |= 2u;
      SetEvent(a1[8]);
    }
    else
    {
      RmpPartitionCleanup((struct _RM_PARTITION *)a1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
    }
  }
  v4[80] = 0;
  RtlReleaseSRWLockExclusive(v4 + 78);
}
