/*
 * XREFs of ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0181CFC
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C01826A4 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSimilarTopology(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned __int16 v5; // cx
  char v6; // bp
  unsigned int v7; // esi
  _QWORD *v9; // rax

  v2 = *((_WORD *)this + 16);
  if ( !v2 )
    return 0;
  v5 = *((_WORD *)a2 + 16);
  if ( v2 != v5 )
    return 0;
  v6 = 1;
  v7 = 0;
  if ( v5 )
  {
    while ( !*(_WORD *)(*((_QWORD *)this + 3) + 8LL * v7 + 4) && !*(_WORD *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 4) )
    {
      if ( ++v7 >= v5 )
        goto LABEL_7;
    }
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
    v9[3] = v7;
    v9[4] = this;
    v9[5] = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v7 + 4);
    v9[6] = a2;
    v9[7] = *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 4);
    WdLogEvent5_WdAssertion(v9);
    return 0;
  }
LABEL_7:
  if ( !CCD_SET_STRING_ID::_TryToMapCloneGroups(this, a2) || !CCD_SET_STRING_ID::_TryToMapCloneGroups(a2, this) )
    return 0;
  return v6;
}
