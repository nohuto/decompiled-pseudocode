/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x18005D520
 * Callers:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x18005D488 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010E230 (-ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x180110AE0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1801154B8 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1801155E0 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
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
