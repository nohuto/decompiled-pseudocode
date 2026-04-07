/*
 * XREFs of ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FB60
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000EC00 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CSlideInCharm::GetStoryboardInfo(CSlideInCharm *this)
{
  return (const struct StoryboardInfo *)&`CSlideInCharm::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
