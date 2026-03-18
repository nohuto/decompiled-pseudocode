/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C2F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C0060D60 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        _WORD *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const struct CCD_SET_STRING_ID *v8; // rbx
  __int16 v9; // ax
  CCD_TOPOLOGY *v10; // rcx
  unsigned __int16 v11; // bx
  int Topology; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = v8;
    if ( v8 )
      v19 = *(_DWORD *)v8;
    else
      v19 = -1073741823;
    *(_QWORD *)(v17 + 32) = v19;
    goto LABEL_14;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v16[3] = this;
    v16[4] = v8;
    v16[5] = *(_QWORD *)a2;
    v17 = (__int64)v16;
    v16[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_14:
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  v10 = *(CCD_TOPOLOGY **)a2;
  a2[6] = v9;
  v11 = *((_WORD *)v8 + 16);
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(v10, v11, v6, v7) < v11 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *(struct CCD_TOPOLOGY **)a2);
  v14 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v18[3] = v14;
  v18[4] = this;
  v18[5] = *(_QWORD *)a2;
  v18[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  WdLogEvent5_WdError(v18);
  return (unsigned int)v14;
}
