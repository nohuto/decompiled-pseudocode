/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C00049E8
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C00010F8 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00048A8 (ndisPMAddWOLPattern.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C0014314 (ndisQueueWorkItem.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2, int a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v8; // r8
  _LIST_ENTRY *v9; // rbx
  __int64 v10; // rdx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    LOBYTE(v10) = 15;
    v9[2].Flink = a1;
    v9[2].Blink = a2;
    LODWORD(v9[3].Flink) = a3;
    ndisReferenceMiniport(a1, v10);
    v9->Flink = 0LL;
    v9[1].Flink = (_LIST_ENTRY *)ndisPMRejectAsync;
    v9[1].Blink = v9;
    ndisQueueWorkItem(v9);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C0083715 >= 2u )
    WPP_SF_(74LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v8);
  return 3221225626LL;
}
