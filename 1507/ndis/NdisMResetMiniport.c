/*
 * XREFs of NdisMResetMiniport @ 0x1C00589F0
 * Callers:
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0085318 >= 4u )
    WPP_SF_q(0xD7u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 216LL) && ndisReferenceMiniport(a1, 8u) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      PoolWithTag[1] = &ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
