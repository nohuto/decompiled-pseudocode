/*
 * XREFs of ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C017D884
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C017E200 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSimilarTopology(
        CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // ax
  unsigned __int16 v7; // cx
  char v8; // bp
  unsigned int v9; // esi
  __int64 v10; // r8
  _QWORD *v12; // rax

  v4 = *((_WORD *)this + 16);
  if ( !v4 )
    return 0;
  v7 = *((_WORD *)a2 + 16);
  if ( v4 != v7 )
    return 0;
  v8 = 1;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((_QWORD *)this + 3);
    while ( !*(_WORD *)(v10 + 8LL * v9 + 4) && !*(_WORD *)(*((_QWORD *)a2 + 3) + 8LL * v9 + 4) )
    {
      if ( ++v9 >= v7 )
        goto LABEL_8;
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v7, v10, a4);
    v12[3] = v9;
    v12[4] = this;
    v12[5] = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v9 + 4);
    v12[6] = a2;
    v12[7] = *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v9 + 4);
    WdLogEvent5_WdAssertion(v12);
    return 0;
  }
LABEL_8:
  if ( !CCD_SET_STRING_ID::_TryToMapCloneGroups(this, a2) || !CCD_SET_STRING_ID::_TryToMapCloneGroups(a2, this) )
    return 0;
  return v8;
}
