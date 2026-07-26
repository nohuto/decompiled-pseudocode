/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00C9840
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C009C320 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00E4AEC (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    WPP_SF_q(0x81u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)a2);
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_q(0x82u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)a2);
  }
  PdcTaskClientRequest(a2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(a2, 12);
  _InterlockedExchange(&a2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)a2);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x83u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)a2);
}
