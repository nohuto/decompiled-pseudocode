/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800241F0
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180019A78 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180023E90 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x180088A98 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18010ACE8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18014C104 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18014E6CC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // edx

  v1 = *((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 52);
  else
    v3 = 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 30) )
      return 1LL;
  }
  return result;
}
