/*
 * XREFs of ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180154FC0 (-Invoke@Animation@Animations@Components@@UEAAJII@Z.c)
 * Callees:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?OnAnimationStart@Animation@Animations@Components@@AEAAXXZ @ 0x180155248 (-OnAnimationStart@Animation@Animations@Components@@AEAAXXZ.c)
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x180155FA4 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 *     ?Play@Sequence@Animations@Components@@QEAAJXZ @ 0x18015690C (-Play@Sequence@Animations@Components@@QEAAJXZ.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiPlay(Components::Animations::Animation *this)
{
  char v1; // al
  int v3; // edi
  Components::Animations::Sequence *v5; // rcx

  v1 = *((_BYTE *)this + 252);
  if ( (v1 & 4) != 0 )
  {
    if ( (v1 & 2) != 0 )
      return 0;
    if ( (v1 & 0x10) != 0 )
      return 0;
    v3 = Components::Animations::AnimationManager::RegisterLive(
           Components::Animations::AnimationManager::s_PORT_pSingleton,
           this);
    if ( v3 >= 0 )
    {
      v5 = (Components::Animations::Sequence *)*((_QWORD *)this + 3);
      *((_BYTE *)this + 252) |= 3u;
      v3 = Components::Animations::Sequence::Play(v5);
      if ( v3 >= 0 )
        return 0;
    }
LABEL_11:
    Components::Animations::Animation::ApiReset(this, 0);
    return (unsigned int)v3;
  }
  v3 = Components::Animations::Sequence::Play(*((Components::Animations::Sequence **)this + 3));
  if ( v3 < 0 )
    goto LABEL_11;
  v3 = Components::Animations::AnimationManager::RegisterLive(
         Components::Animations::AnimationManager::s_PORT_pSingleton,
         this);
  if ( v3 < 0 )
    goto LABEL_11;
  *((_BYTE *)this + 252) = *((_BYTE *)this + 252) & 0xC8 | 7;
  *((_DWORD *)this + 55) = *((_DWORD *)this + 54);
  Components::Animations::Animation::OnAnimationStart(this);
  *((_BYTE *)this + 252) |= 0x80u;
  return 0;
}
