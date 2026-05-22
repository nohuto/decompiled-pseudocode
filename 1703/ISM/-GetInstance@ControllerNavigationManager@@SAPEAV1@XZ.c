/*
 * XREFs of ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006A00 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180033F14 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0ControllerNavigationManager@@AEAA@XZ @ 0x1800306DC (--0ControllerNavigationManager@@AEAA@XZ.c)
 *     ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x180030BD0 (-Initialize@ControllerNavigationManager@@AEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
struct ControllerNavigationManager *ControllerNavigationManager::GetInstance(void)
{
  ControllerNavigationManager *v0; // rax
  ControllerNavigationManager *v1; // rcx
  ControllerNavigationManager *v2; // rbx
  struct ControllerNavigationManager *v3; // rax

  if ( !ControllerNavigationManager::s_instance )
  {
    v0 = (ControllerNavigationManager *)malloc(0x110uLL);
    v2 = v0;
    if ( v0 )
      memset(v0, 0, 0x110uLL);
    if ( v2 )
      v3 = ControllerNavigationManager::ControllerNavigationManager(v2);
    else
      v3 = 0LL;
    ControllerNavigationManager::s_instance = v3;
    if ( !v3 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v1, &MinInput_Warning_CheckResult, 0, 44, 14);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    ControllerNavigationManager::Initialize(v1);
  }
  return ControllerNavigationManager::s_instance;
}
