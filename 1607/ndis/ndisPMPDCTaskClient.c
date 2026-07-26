/*
 * XREFs of ndisPMPDCTaskClient @ 0x1C004A520
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004AD9C (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     PdcTaskClientRequest @ 0x1C00E4AEC (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x84u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)v2);
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( (unsigned __int8)byte_1C00895D2 >= 2u )
        WPP_SF_q(0x85u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)v2);
    }
    else
    {
      ndisPowerSaveStop(v2, NdisSSMagicPacket);
      ndisSetPdcTaskClientExpiryTimer(v2);
    }
    ExFreePoolWithTag(P, 0);
    ndisDereferenceMiniport((__int64)v2);
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_q(0x86u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, (__int64)v2);
  }
}
