/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C005F3AC (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C005DE64 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E4E4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00602A0 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C0060CA8 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C0060D60 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     sub_1C00612E0 @ 0x1C00612E0 (sub_1C00612E0.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0061D00 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0061DC8 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0061EA8 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00A4500 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0181CFC (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
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
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r12
  CCD_TOPOLOGY *OverflowTopology; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct CCD_TOPOLOGY *v19; // rsi
  CCD_BTL *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  CCD_SET_STRING_ID *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbp
  bool IsSimilarTopology; // al
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  int TopologyClass; // eax
  __int64 v44; // rcx
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rax
  int v50; // eax
  int v51; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v36 + 24) = v8;
    if ( v8 )
      v50 = *(_DWORD *)v8;
    else
      v50 = -1073741823;
    *(_QWORD *)(v36 + 32) = v50;
    goto LABEL_37;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v35[3] = this;
    v35[4] = v8;
    v35[5] = *(_QWORD *)a2;
    v36 = (__int64)v35;
    v35[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v36);
    return 0LL;
  }
  v10 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 21);
  v11 = sub_1C00612E0(*((_QWORD *)v10 + 12), L"SetId", v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v37[3] = v13;
    v37[4] = v10;
    v37[5] = *((_QWORD *)v10 + 12);
    WdLogEvent5_WdError(v37);
    v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38);
    v39[3] = this;
    v39[4] = v8;
    v39[5] = *(_QWORD *)a2;
    v39[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v39[7] = *((_QWORD *)a2 + 21);
    WdLogEvent5_WdAssertion(v39);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v8, v10) )
    return 0LL;
  OverflowTopology = CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v19 = OverflowTopology;
  if ( !OverflowTopology )
  {
    v40 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v40 + 24) = v9;
    WdLogEvent5_WdLowResource(v40);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v8);
  CCD_BTL::Global();
  v21 = CCD_BTL::ResolveTopologySetId(v20, v19, 0);
  v26 = v21;
  if ( v21 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v42[3] = v26;
    v42[4] = v19;
    v42[5] = *(_QWORD *)a2;
    v42[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v42[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v42);
    return 0LL;
  }
  v27 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  if ( v27 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v27, v8);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16));
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 21),
                                                 0xFu);
    if ( RecentTopologySetId )
      goto LABEL_13;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v41[3] = this;
    v41[4] = *((_QWORD *)a2 + 21);
    v41[5] = *(_QWORD *)a2;
    v41[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v19, (enum CCD_TOPOLOGY_CLASS *)&v51);
  v45 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v46[3] = v45;
    v46[4] = v19;
    v46[5] = *((_QWORD *)a2 + 21);
    v46[6] = *(_QWORD *)a2;
    v46[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v46);
    return (unsigned int)v45;
  }
  v47 = v51;
  if ( !v51 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v44);
    WdLogEvent5_WdAssertion(v48);
  }
  if ( ((unsigned int)v47 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 21),
                                               v47);
  if ( !RecentTopologySetId )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v41[3] = v47;
    v41[4] = this;
    v41[5] = *((_QWORD *)a2 + 21);
    v41[6] = *(_QWORD *)a2;
    v41[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v41);
    return 3221225495LL;
  }
LABEL_13:
  v33 = *(int *)RecentTopologySetId;
  if ( (int)v33 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v8);
    goto LABEL_15;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v31, v32);
  v49[3] = v33;
  v49[4] = RecentTopologySetId;
  v49[5] = *(_QWORD *)a2;
  v49[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v49);
  return (unsigned int)v33;
}
