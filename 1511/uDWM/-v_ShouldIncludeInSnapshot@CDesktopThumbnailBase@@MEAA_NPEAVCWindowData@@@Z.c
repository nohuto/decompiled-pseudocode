/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDesktopThumbnailBase@@MEAA_NPEAVCWindowData@@@Z @ 0x18009B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDesktopThumbnailBase::v_ShouldIncludeInSnapshot(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  return (*((_BYTE *)a2 + 572) & 1) == 0;
}
