/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C0130524
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C016A430 (DpExcludeAdapterAccess.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C016E8E0 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v2 + 24) = 3164LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
