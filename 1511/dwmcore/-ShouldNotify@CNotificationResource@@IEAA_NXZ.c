/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x180065004
 * Callers:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800F8828 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180129144 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18012BEF0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18012DEB4 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 11) )
  {
    if ( *((_DWORD *)this + 10) )
      return 1LL;
  }
  return result;
}
