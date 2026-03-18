/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C009C868 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0063024 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C0065D54 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00672B4 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C006737C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C009CD90 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C009CE48 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C009D470 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EDDC (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C009F120 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C017D884 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rdi
  unsigned __int16 v9; // r14
  const struct CCD_SET_STRING_ID *v10; // rsi
  int SetIdFromRegistry; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  void **OverflowTopology; // rax
  __int64 v17; // rcx
  struct CCD_TOPOLOGY *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  CCD_BTL *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  CCD_SET_STRING_ID *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbp
  char IsSimilarTopology; // al
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  int TopologyClass; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r14
  _QWORD *v55; // rax
  __int64 v56; // r14
  __int64 v57; // rax
  _QWORD *v58; // rax
  int v59; // eax
  int v60; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v39 + 24) = v8;
    if ( v8 )
      v59 = *(_DWORD *)v8;
    else
      v59 = -1073741823;
    *(_QWORD *)(v39 + 32) = v59;
    goto LABEL_37;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v38[3] = this;
    v38[4] = v8;
    v38[5] = *(_QWORD *)a2;
    v39 = (__int64)v38;
    v38[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v39);
    return 0LL;
  }
  v10 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 21);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)v10 + 12), L"SetId", v10);
  v15 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v40[3] = v15;
    v40[4] = v10;
    v40[5] = *((_QWORD *)v10 + 12);
    WdLogEvent5_WdError(v40);
    v45 = (_QWORD *)WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    v45[3] = this;
    v45[4] = v8;
    v45[5] = *(_QWORD *)a2;
    v45[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v45[7] = *((_QWORD *)a2 + 21);
    WdLogEvent5_WdAssertion(v45);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v8, v10, v13, v14) )
    return 0LL;
  OverflowTopology = (void **)CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v18 = (struct CCD_TOPOLOGY *)OverflowTopology;
  if ( !OverflowTopology )
  {
    v46 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v46 + 24) = v9;
    WdLogEvent5_WdLowResource(v46);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v8);
  CCD_BTL::Global(v20, v19, v21, v22);
  v24 = CCD_BTL::ResolveTopologySetId(v23, v18, 0);
  v29 = v24;
  if ( v24 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v48[3] = v29;
    v48[4] = v18;
    v48[5] = *(_QWORD *)a2;
    v48[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v48[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v48);
    return 0LL;
  }
  v30 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  if ( v30 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v30, v8);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16), (__int64)v8);
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 21),
                                                 15LL);
    if ( RecentTopologySetId )
      goto LABEL_13;
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v47[3] = this;
    v47[4] = *((_QWORD *)a2 + 21);
    v47[5] = *(_QWORD *)a2;
    v47[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v18, (enum CCD_TOPOLOGY_CLASS *)&v60, v27, v28);
  v54 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v51);
    v55[3] = v54;
    v55[4] = v18;
    v55[5] = *((_QWORD *)a2 + 21);
    v55[6] = *(_QWORD *)a2;
    v55[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v55);
    return (unsigned int)v54;
  }
  v56 = v60;
  if ( !v60 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
    WdLogEvent5_WdAssertion(v57);
  }
  if ( ((unsigned int)v56 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 21),
                                               (unsigned int)v56);
  if ( !RecentTopologySetId )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v47[3] = v56;
    v47[4] = this;
    v47[5] = *((_QWORD *)a2 + 21);
    v47[6] = *(_QWORD *)a2;
    v47[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v47);
    return 3221225495LL;
  }
LABEL_13:
  v36 = *(int *)RecentTopologySetId;
  if ( (int)v36 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v8, v34, v35);
    goto LABEL_15;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v34, v35);
  v58[3] = v36;
  v58[4] = RecentTopologySetId;
  v58[5] = *(_QWORD *)a2;
  v58[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v58);
  return (unsigned int)v36;
}
