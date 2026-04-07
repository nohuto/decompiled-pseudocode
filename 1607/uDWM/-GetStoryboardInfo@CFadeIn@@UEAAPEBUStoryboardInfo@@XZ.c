/*
 * XREFs of ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BA30
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000EC00 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CFadeIn::GetStoryboardInfo(CFadeIn *this)
{
  return (const struct StoryboardInfo *)&`CFadeIn::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
