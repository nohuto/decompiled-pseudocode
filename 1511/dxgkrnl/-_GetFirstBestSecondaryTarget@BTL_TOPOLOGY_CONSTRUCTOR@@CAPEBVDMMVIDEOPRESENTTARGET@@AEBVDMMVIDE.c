/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0184E8C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01850FC (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  const struct DMMVIDEOPRESENTTARGET *v5; // rdi
  _QWORD *v6; // rbx
  const struct DXGADAPTER *v7; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 8) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = 0LL;
  v6 = (_QWORD *)((char *)this + 24);
  v7 = *(const struct DXGADAPTER **)(v4 + 16);
  if ( (_QWORD *)*v6 != v6 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v6 - 8LL); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_BYTE *)i + 396) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, i, v5) )
        v5 = i;
    }
  }
  return v5;
}
