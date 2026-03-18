/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009F1A0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C009F22C (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0063024 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009EF48 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        struct CCD_TOPOLOGY **this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        char a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  CCD_BTL *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  int TopologyClass; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             (__int64)this,
             0);
  if ( (int)result >= 0 )
  {
    CCD_BTL::Global(v8, v7, v9, v10);
    v12 = CCD_BTL::ResolveTopologySetId(v11, *this, a4);
    v16 = v12;
    if ( v12 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v19[3] = v16;
      v19[4] = this;
      v19[5] = *this;
      v19[6] = *((_QWORD *)*this + 8);
      v19[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*this, (enum CCD_TOPOLOGY_CLASS *)&v20, v14, v15);
      v16 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)*this + 8) + 32LL) = v20;
        return (unsigned int)v16;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v19[3] = v16;
      v19[4] = *this;
      v19[5] = *((_QWORD *)*this + 8);
    }
    WdLogEvent5_WdError(v19);
    return (unsigned int)v16;
  }
  return result;
}
