/*
 * XREFs of ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9E0
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000EC00 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CSlideOutCharm::GetStoryboardInfo(CSlideOutCharm *this)
{
  return (const struct StoryboardInfo *)&`CSlideOutCharm::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
