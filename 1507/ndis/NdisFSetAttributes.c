/*
 * XREFs of NdisFSetAttributes @ 0x1C0017A00
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C0017B40 (ndisSetupLwfMiniportHandlers.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

NDIS_STATUS __stdcall NdisFSetAttributes(
        NDIS_HANDLE NdisFilterHandle,
        NDIS_HANDLE FilterModuleContext,
        PNDIS_FILTER_ATTRIBUTES FilterAttributes)
{
  __int64 v3; // rbp
  KIRQL v6; // al
  KIRQL v7; // bl

  v3 = *((_QWORD *)NdisFilterHandle + 4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(33LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, NdisFilterHandle);
  *((_QWORD *)NdisFilterHandle + 3) = FilterModuleContext;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v7 = v6;
  *(_DWORD *)(v3 + 1856) = 2097900;
  ndisSetupLwfMiniportHandlers(v3);
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(34LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, NdisFilterHandle);
  return 0;
}
