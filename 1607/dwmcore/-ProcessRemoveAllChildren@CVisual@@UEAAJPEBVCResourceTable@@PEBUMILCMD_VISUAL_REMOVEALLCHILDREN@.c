/*
 * XREFs of ?ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801099E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessRemoveAllChildren(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVEALLCHILDREN *a3)
{
  CVisual::RemoveAllChildren(this);
  return 0LL;
}
