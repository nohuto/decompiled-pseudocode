/*
 * XREFs of sub_1C005CCE0 @ 0x1C005CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C005E568 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 */

__int64 __fastcall sub_1C005CCE0(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1, CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v8; // rcx
  const struct CCD_SET_STRING_ID *v9; // rdi
  int v10; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v14);
  v6 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v9 = ModalitySetId;
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v10 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(a1, ModalitySetId, v14);
    v6 = v10;
    if ( v10 >= 0 )
      return (unsigned int)v6;
LABEL_6:
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v13[3] = v6;
    v13[4] = a2;
    v13[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v13);
    return (unsigned int)v6;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v12[3] = a2;
  v12[4] = *((_QWORD *)a2 + 8);
  v12[5] = *(int *)v9;
  WdLogEvent5_WdError(v12);
  return 3221225473LL;
}
