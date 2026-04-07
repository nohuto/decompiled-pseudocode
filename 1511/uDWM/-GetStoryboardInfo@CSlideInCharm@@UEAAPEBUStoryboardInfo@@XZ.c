/*
 * XREFs of ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FA10
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180006A44 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CSlideInCharm::GetStoryboardInfo(CSlideInCharm *this)
{
  return (const struct StoryboardInfo *)&`CSlideInCharm::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
