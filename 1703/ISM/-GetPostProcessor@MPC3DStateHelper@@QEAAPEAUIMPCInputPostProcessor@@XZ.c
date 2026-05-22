/*
 * XREFs of ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007B34
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18001F860 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18001FBC0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18004D480 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800566B0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007518 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

struct IMPCInputPostProcessor *__fastcall MPC3DStateHelper::GetPostProcessor(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_shared(this, &SRWLock);
  Ptr = this[4].Ptr;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return (struct IMPCInputPostProcessor *)Ptr;
}
