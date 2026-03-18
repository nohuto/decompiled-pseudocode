/*
 * XREFs of ?ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1800DCE70
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessRemoveAllChildren(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVEALLCHILDREN *a3)
{
  CVisual::RemoveAllChildren(this);
  return 0LL;
}
