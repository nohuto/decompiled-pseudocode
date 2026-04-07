/*
 * XREFs of ?GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BE00
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F234 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CAppArrangementDelayed::GetStoryboardInfo(CAppArrangementDelayed *this)
{
  return (const struct StoryboardInfo *)&`CAppArrangementDelayed::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
