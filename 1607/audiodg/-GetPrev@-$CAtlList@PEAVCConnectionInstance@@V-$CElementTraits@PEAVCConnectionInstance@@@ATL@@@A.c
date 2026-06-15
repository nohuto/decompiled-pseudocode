/*
 * XREFs of ?GetPrev@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140025264
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetPrev(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 + 16;
}
