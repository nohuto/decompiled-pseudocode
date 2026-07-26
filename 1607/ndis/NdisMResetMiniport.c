/*
 * XREFs of NdisMResetMiniport @ 0x1C005CD30
 * Callers:
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_q(0xDAu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
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
      ndisDereferenceMiniport(a1);
    }
  }
}
