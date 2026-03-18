/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00B8A64
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00B8AF0 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C008BDAC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B69EC (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B87F0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        struct CCD_TOPOLOGY **this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        char a4)
{
  __int64 result; // rax
  CCD_BTL *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  int TopologyClass; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             (__int64)this,
             0);
  if ( (int)result >= 0 )
  {
    CCD_BTL::Global();
    v8 = CCD_BTL::ResolveTopologySetId(v7, *this, a4);
    v10 = v8;
    if ( v8 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v13[3] = v10;
      v13[4] = this;
      v13[5] = *this;
      v13[6] = *((_QWORD *)*this + 8);
      v13[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*this, (enum CCD_TOPOLOGY_CLASS *)&v14);
      v10 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)*this + 8) + 32LL) = v14;
        return (unsigned int)v10;
      }
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v13[3] = v10;
      v13[4] = *this;
      v13[5] = *((_QWORD *)*this + 8);
    }
    WdLogEvent5_WdError(v13);
    return (unsigned int)v10;
  }
  return result;
}
