/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C005DEE4
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C005DF70 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C005E110 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00602A0 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        bool a4)
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
             this,
             0);
  if ( (int)result >= 0 )
  {
    CCD_BTL::Global();
    v8 = CCD_BTL::ResolveTopologySetId(v7, *(struct CCD_TOPOLOGY **)this, a4);
    v10 = v8;
    if ( v8 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v13[3] = v10;
      v13[4] = this;
      v13[5] = *(_QWORD *)this;
      v13[6] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v13[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*(CCD_TOPOLOGY **)this, (enum CCD_TOPOLOGY_CLASS *)&v14);
      v10 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 32LL) = v14;
        return (unsigned int)v10;
      }
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v13[3] = v10;
      v13[4] = *(_QWORD *)this;
      v13[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
    WdLogEvent5_WdError(v13);
    return (unsigned int)v10;
  }
  return result;
}
