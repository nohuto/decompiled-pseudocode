/*
 * XREFs of ndisQueueRequestOnTopAsync @ 0x1C00434BC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 * Callees:
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestOnTopAsync(__int64 a1, _LIST_ENTRY *a2)
{
  unsigned int v4; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v6; // rbx
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x3Du, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( ndisReferenceMiniport(a1, 0x48u) )
    {
      v6[2].Blink = 0LL;
      v6[2].Flink = retaddr;
      v6[3].Flink = a2;
      v6[3].Blink = (_LIST_ENTRY *)a1;
      v6->Flink = 0LL;
      v6[1].Flink = (_LIST_ENTRY *)ndisProcessRequestAsync;
      v6[1].Blink = v6;
      ndisQueueWorkItem(v6);
      v4 = 259;
    }
    else
    {
      ExFreePoolWithTag(v6, 0);
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(62LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, v4);
  return v4;
}
