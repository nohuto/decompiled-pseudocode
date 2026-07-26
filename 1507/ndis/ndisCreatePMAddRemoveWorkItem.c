/*
 * XREFs of ndisCreatePMAddRemoveWorkItem @ 0x1C0044300
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0008CC4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(__int64 a1, _LIST_ENTRY *a2, _LIST_ENTRY *a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v7; // rbx

  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    ndisReferenceMiniport(a1, 0xEu);
    v7[3].Flink = a3;
    v7[2].Flink = (_LIST_ENTRY *)a1;
    v7[2].Blink = a2;
    v7->Flink = 0LL;
    v7[1].Flink = (_LIST_ENTRY *)ndisPMAddRemoveAsync;
    v7[1].Blink = v7;
    ndisQueueWorkItem(v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
      WPP_SF_(0x47u, &WPP_fbb1998797815902974a7c4233493709_Traceguids);
    return 3221225626LL;
  }
}
