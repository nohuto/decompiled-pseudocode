/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDesktopThumbnailBase@@MEAA_NPEAVCWindowData@@@Z @ 0x180098250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDesktopThumbnailBase::v_ShouldIncludeInSnapshot(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  return (*((_BYTE *)a2 + 580) & 1) == 0;
}
