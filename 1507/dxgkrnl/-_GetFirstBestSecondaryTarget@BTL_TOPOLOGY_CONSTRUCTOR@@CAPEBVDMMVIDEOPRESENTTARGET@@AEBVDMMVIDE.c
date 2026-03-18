/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01809D4
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0180C28 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  const struct DMMVIDEOPRESENTTARGET *v8; // rdi
  _QWORD *v9; // rbx
  const struct DXGADAPTER *v10; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v4 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = 0LL;
  v9 = (_QWORD *)((char *)this + 24);
  v10 = *(const struct DXGADAPTER **)(v7 + 16);
  if ( (_QWORD *)*v9 != v9 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v9 - 8LL); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v10, i, v8) )
        v8 = i;
    }
  }
  return v8;
}
