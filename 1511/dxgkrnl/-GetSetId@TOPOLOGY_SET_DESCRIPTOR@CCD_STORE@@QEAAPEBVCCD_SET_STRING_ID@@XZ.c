/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C0060D60
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C2F60 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     sub_1C00612E0 @ 0x1C00612E0 (sub_1C00612E0.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax

  v2 = sub_1C00612E0(*((_QWORD *)this + 8), L"SetId", this);
  v4 = v2;
  if ( v2 >= 0 )
    return this;
  v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
  v6[3] = v4;
  v6[4] = this;
  v6[5] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v6);
  return 0LL;
}
