/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B4880
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00B4674 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C008BDAC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C008C8F8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C008E2C8 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C008E390 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B4D04 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00B4D40 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B5D30 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B69EC (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B8684 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00B89E4 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01AB0C4 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
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
  __int64 v13; // r12
  void **OverflowTopology; // rax
  __int64 v15; // rcx
  struct CCD_TOPOLOGY *v16; // rsi
  CCD_BTL *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  CCD_SET_STRING_ID *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbp
  char IsSimilarTopology; // al
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  int TopologyClass; // eax
  __int64 v41; // rcx
  __int64 v42; // r14
  _QWORD *v43; // rax
  __int64 v44; // r14
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  int v48; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v33 + 24) = v8;
    if ( v8 )
      v47 = *(_DWORD *)v8;
    else
      v47 = -1073741823;
    *(_QWORD *)(v33 + 32) = v47;
    goto LABEL_37;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v32[3] = this;
    v32[4] = v8;
    v32[5] = *(_QWORD *)a2;
    v33 = (__int64)v32;
    v32[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v33);
    return 0LL;
  }
  v10 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 21);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)v10 + 12), L"SetId", v10);
  v13 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v34[3] = v13;
    v34[4] = v10;
    v34[5] = *((_QWORD *)v10 + 12);
    WdLogEvent5_WdError(v34);
    v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v35);
    v36[3] = this;
    v36[4] = v8;
    v36[5] = *(_QWORD *)a2;
    v36[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v36[7] = *((_QWORD *)a2 + 21);
    WdLogEvent5_WdAssertion(v36);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v8, v10) )
    return 0LL;
  OverflowTopology = (void **)CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v16 = (struct CCD_TOPOLOGY *)OverflowTopology;
  if ( !OverflowTopology )
  {
    v37 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v37 + 24) = v9;
    WdLogEvent5_WdLowResource(v37);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v8);
  CCD_BTL::Global();
  v18 = CCD_BTL::ResolveTopologySetId(v17, v16, 0);
  v23 = v18;
  if ( v18 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v39[3] = v23;
    v39[4] = v16;
    v39[5] = *(_QWORD *)a2;
    v39[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v39[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v39);
    return 0LL;
  }
  v24 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  if ( v24 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v24, v8);
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
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v38[3] = this;
    v38[4] = *((_QWORD *)a2 + 21);
    v38[5] = *(_QWORD *)a2;
    v38[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v16, (enum CCD_TOPOLOGY_CLASS *)&v48);
  v42 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v43[3] = v42;
    v43[4] = v16;
    v43[5] = *((_QWORD *)a2 + 21);
    v43[6] = *(_QWORD *)a2;
    v43[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v43);
    return (unsigned int)v42;
  }
  v44 = v48;
  if ( !v48 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v45);
  }
  if ( ((unsigned int)v44 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 21),
                                               (unsigned int)v44);
  if ( !RecentTopologySetId )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v38[3] = v44;
    v38[4] = this;
    v38[5] = *((_QWORD *)a2 + 21);
    v38[6] = *(_QWORD *)a2;
    v38[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v38);
    return 3221225495LL;
  }
LABEL_13:
  v30 = *(int *)RecentTopologySetId;
  if ( (int)v30 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v8);
    goto LABEL_15;
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v28, v29);
  v46[3] = v30;
  v46[4] = RecentTopologySetId;
  v46[5] = *(_QWORD *)a2;
  v46[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v46);
  return (unsigned int)v30;
}
