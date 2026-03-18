/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0184F24
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01850FC (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  const struct DMMVIDEOPRESENTTARGET *v6; // rdx
  const struct DXGADAPTER *v7; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v9; // rbx
  const struct DMMVIDEOPRESENTTARGET *v11; // rsi
  _QWORD *v12; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v2 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v2 + 8) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = a1;
  v7 = *(const struct DXGADAPTER **)(*(_QWORD *)(v2 + 8) + 16LL);
  while ( 1 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, v6);
    v9 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_BYTE *)NextTarget + 396)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, a1, v9) )
    {
      return v9;
    }
    v6 = v9;
  }
  v11 = 0LL;
  v12 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v12 != v12 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v12 - 8LL); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                                                           this,
                                                                           i) )
    {
      if ( !*((_BYTE *)i + 396)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, i, v11)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v7, a1, i) )
      {
        v11 = i;
      }
    }
  }
  return v11;
}
