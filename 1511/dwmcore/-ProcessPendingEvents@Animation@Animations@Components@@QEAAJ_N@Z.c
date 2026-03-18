/*
 * XREFs of ?ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180162F64
 * Callers:
 *     ?ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ @ 0x1801610C8 (-ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z @ 0x180163BE4 (-RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z.c)
 *     ?ActivateInternal@AnimationEvent@Animations@Components@@QEAAJ_N@Z @ 0x18016517C (-ActivateInternal@AnimationEvent@Animations@Components@@QEAAJ_N@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ProcessPendingEvents(
        Components::Animations::Animation *this,
        char a2)
{
  int v4; // edi
  __int64 *v5; // rbx
  __int64 v6; // rax
  char v7; // al
  char v8; // al
  int v9; // eax

  v4 = 0;
  while ( *((_QWORD *)this + 25) )
  {
    v5 = (__int64 *)*((_QWORD *)this + 25);
    v6 = *v5;
    *((_QWORD *)this + 25) = *v5;
    if ( v6 )
      *(_QWORD *)(v6 + 8) = 0LL;
    *v5 = 0LL;
    v7 = *((_BYTE *)v5 + 52);
    if ( (v7 & 2) == 0 )
    {
      v8 = v7 | 2;
      *((_BYTE *)v5 + 52) = v8;
      if ( (v8 & 4) != 0 )
      {
        if ( !Components::Animations::AnimationManager::s_PORT_pSingleton )
          goto LABEL_13;
        v9 = Components::Animations::AnimationManager::RegisterDeferredEvent(
               Components::Animations::AnimationManager::s_PORT_pSingleton,
               (struct Components::Animations::AnimationEvent *)(v5 - 2));
        if ( v9 >= 0 )
        {
          ++*((_DWORD *)v5 + 12);
          goto LABEL_13;
        }
      }
      else
      {
        v9 = Components::Animations::AnimationEvent::ActivateInternal(
               (Components::Animations::AnimationEvent *)(v5 - 2),
               0);
        if ( v9 >= 0 )
          goto LABEL_13;
      }
      if ( v4 >= 0 )
        v4 = v9;
    }
LABEL_13:
    if ( a2 )
    {
      *(_BYTE *)(v5[3] + 4) ^= (*(_BYTE *)(v5[3] + 4) ^ *((_BYTE *)v5 + 52)) & 1;
      *((_BYTE *)v5 + 52) &= ~2u;
    }
  }
  return (unsigned int)v4;
}
