/*
 * XREFs of ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x180153EEC
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180154FC0 (-Invoke@Animation@Animations@Components@@UEAAJII@Z.c)
 * Callees:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x180155D14 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiPause(Components::Animations::Animation *this)
{
  char v1; // al
  Components::Animations::AnimationManager *v3; // rbx
  Components::Animations::Animation *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 252);
  if ( (v1 & 4) != 0 && (v1 & 2) != 0 )
  {
    v3 = Components::Animations::AnimationManager::s_PORT_pSingleton;
    v5 = this;
    *((_BYTE *)this + 252) = v1 & 0xFD;
    *(_BYTE *)(*((_QWORD *)this + 3) + 244LL) &= ~2u;
    Components::Animations::ArrayListF<Components::Animations::Animation *>::Add((char *)v3 + 88, &v5);
    *((_BYTE *)v3 + 392) |= 4u;
    *((_BYTE *)this + 252) &= ~1u;
  }
  return 0LL;
}
