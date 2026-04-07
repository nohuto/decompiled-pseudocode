/*
 * XREFs of ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FEE0
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000F1D4 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CSlideInCharm::GetStoryboardInfo(CSlideInCharm *this)
{
  return (const struct StoryboardInfo *)&`CSlideInCharm::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
