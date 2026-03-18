/*
 * XREFs of _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00BA910
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C008BDAC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B8708 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  void **ModalitySetId; // rax
  __int64 v8; // rcx
  void **v9; // rdi
  int v10; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v14);
  v6 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v9 = ModalitySetId;
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v10 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId((__int64)a1, (__int64)ModalitySetId, v14);
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
