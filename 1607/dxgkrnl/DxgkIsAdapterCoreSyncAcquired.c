/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C0149C04
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C0192260 (DpExcludeAdapterAccess.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C0197E9C (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v2 + 24) = 188LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
