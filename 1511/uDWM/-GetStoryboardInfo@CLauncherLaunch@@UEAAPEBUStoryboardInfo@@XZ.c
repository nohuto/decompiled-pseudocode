/*
 * XREFs of ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9A0
 * Callers:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180006A44 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800071AC (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     <none>
 */

const struct StoryboardInfo *__fastcall CLauncherLaunch::GetStoryboardInfo(CLauncherLaunch *this)
{
  return (const struct StoryboardInfo *)&`CLauncherLaunch::GetStoryboardInfo'::`2'::s_storyboardInfo;
}
