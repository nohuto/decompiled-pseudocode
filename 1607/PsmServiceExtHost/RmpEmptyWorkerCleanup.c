/*
 * XREFs of RmpEmptyWorkerCleanup @ 0x180002F5C
 * Callers:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpEnforcementInfoInitializeCommon @ 0x180005244 (RmpEnforcementInfoInitializeCommon.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpEmptyWorkerCleanup(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  NTSTATUS result; // eax

  if ( *a1 )
  {
    result = TpReleaseWork();
    *a1 = 0LL;
  }
  v2 = (void *)a1[1];
  if ( v2 )
    result = NtClose(v2);
  v3 = (void *)a1[2];
  if ( v3 )
    return NtClose(v3);
  return result;
}
