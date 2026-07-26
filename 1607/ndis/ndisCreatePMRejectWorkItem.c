/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C00254C4
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C0025394 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C004A184 (ndisPMAddProtocolOffload.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(__int64 a1, _LIST_ENTRY *a2, int a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v8; // r8
  _LIST_ENTRY *v9; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v9[2].Flink = (_LIST_ENTRY *)a1;
    v9[2].Blink = a2;
    LODWORD(v9[3].Flink) = a3;
    ndisReferenceMiniport(a1, 0xFu);
    v9->Flink = 0LL;
    v9[1].Flink = (_LIST_ENTRY *)ndisPMRejectAsync;
    v9[1].Blink = v9;
    ndisQueueWorkItem(v9);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 2u )
    WPP_SF_(74LL, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v8);
  return 3221225626LL;
}
