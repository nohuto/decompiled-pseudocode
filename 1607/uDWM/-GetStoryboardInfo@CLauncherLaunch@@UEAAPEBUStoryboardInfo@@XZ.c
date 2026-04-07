/*
 * XREFs of ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000EBF0
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000EC00 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F234 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CLauncherLaunch::GetStoryboardInfo(CLauncherLaunch *this)
{
  return (const struct StoryboardInfo *)&`CLauncherLaunch::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
