/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0180A60
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0180C28 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        const struct DMMVIDEOPRESENTTARGETSET *this,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  const struct DMMVIDEOPRESENTTARGET *v8; // rdx
  const struct DXGADAPTER *v9; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v11; // rbx
  const struct DMMVIDEOPRESENTTARGET *v12; // rsi
  _QWORD *v13; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v4 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, this, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = a1;
  v9 = *(const struct DXGADAPTER **)(*(_QWORD *)(v4 + 8) + 16LL);
  while ( 1 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, v8);
    v11 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, a1, v11) )
    {
      return v11;
    }
    v8 = v11;
  }
  v12 = 0LL;
  v13 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v13 != v13 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v13 - 8LL); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                                                           this,
                                                                           i) )
    {
      if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, i, v12)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, a1, i) )
      {
        v12 = i;
      }
    }
  }
  return v12;
}
