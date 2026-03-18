/*
 * XREFs of _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00B0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009EE60 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        CCD_TOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  int TopologyClass; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  void **ModalitySetId; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  void **v12; // rdi
  int v13; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // [rsp+38h] [rbp+10h] BYREF

  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v17, a3, a4);
  v8 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v12 = ModalitySetId;
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v13 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId((__int64)a1, (__int64)ModalitySetId, v17, v11);
    v8 = v13;
    if ( v13 >= 0 )
      return (unsigned int)v8;
LABEL_6:
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v16[3] = v8;
    v16[4] = a2;
    v16[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v16);
    return (unsigned int)v8;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v15[3] = a2;
  v15[4] = *((_QWORD *)a2 + 8);
  v15[5] = *(int *)v12;
  WdLogEvent5_WdError(v15);
  return 3221225473LL;
}
