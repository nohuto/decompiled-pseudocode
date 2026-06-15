/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D310
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D310 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ??1?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140025294 (--1-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QE.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D310 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  bool v5; // zf

  while ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v4;
    *v4 = *(_QWORD *)(a1 + 32);
    v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)(a1 + 32) = v4;
    if ( v5 )
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(a1);
  }
  v2 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
