/*
 * XREFs of ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x180010180
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F7BC (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CLauncherDismiss::GetStoryboardInfo(CLauncherDismiss *this)
{
  return (const struct StoryboardInfo *)&`CLauncherDismiss::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
