/*
 * XREFs of ?DetermineEffectiveClipMode@CDrawingContext@@AEBA?AW4Enum@CompositionClipMode@@W423@@Z @ 0x1800371A0
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180043C54 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::DetermineEffectiveClipMode(__int64 a1, unsigned int a2)
{
  if ( CCommonRegistryData::m_drawListRenderPathMode == 2 )
  {
    return 1;
  }
  else if ( CCommonRegistryData::m_drawListRenderPathMode == 1
         || *(_BYTE *)(a1 + 5973) && !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
  {
    return 0;
  }
  return a2;
}
