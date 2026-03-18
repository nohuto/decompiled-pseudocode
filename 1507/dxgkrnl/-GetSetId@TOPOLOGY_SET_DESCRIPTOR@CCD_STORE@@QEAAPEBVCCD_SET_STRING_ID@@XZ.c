/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C009CE48
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C009CE84 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009F090 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C009D470 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  int SetIdFromRegistry; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax

  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)this + 8), L"SetId", this);
  v4 = SetIdFromRegistry;
  if ( SetIdFromRegistry >= 0 )
    return this;
  v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
  v6[3] = v4;
  v6[4] = this;
  v6[5] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v6);
  return 0LL;
}
