/*
 * XREFs of ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x1800190B4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1800AD458 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiPause(Components::Animations::Animation *this)
{
  char v1; // al
  Components::Animations::AnimationManager *v3; // rbx
  Components::Animations::Animation *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 104);
  if ( (v1 & 4) != 0 && (v1 & 2) != 0 )
  {
    v3 = Components::Animations::AnimationManager::s_PORT_pSingleton;
    v5 = this;
    *((_BYTE *)this + 104) = v1 & 0xFD;
    *(_BYTE *)(*((_QWORD *)this + 2) + 264LL) &= ~2u;
    Components::Animations::ArrayListF<Components::Animations::Animation *>::Add((char *)v3 + 88, &v5);
    *((_BYTE *)v3 + 184) |= 4u;
    *((_BYTE *)this + 104) &= ~1u;
  }
  return 0LL;
}
