/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C0002EAC
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0002C38 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C0002D6C (ndisPMAddWOLPattern.c)
 * Callees:
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2, int a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v8; // rbx
  __int64 v9; // rdx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    LOBYTE(v9) = 15;
    v8[2].Flink = a1;
    v8[2].Blink = a2;
    LODWORD(v8[3].Flink) = a3;
    ndisReferenceMiniport(a1, v9);
    v8->Flink = 0LL;
    v8[1].Flink = (_LIST_ENTRY *)ndisPMRejectAsync;
    v8[1].Blink = v8;
    ndisQueueWorkItem(v8);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C0085315 >= 2u )
    WPP_SF_(74LL, &WPP_fbb1998797815902974a7c4233493709_Traceguids);
  return 3221225626LL;
}
