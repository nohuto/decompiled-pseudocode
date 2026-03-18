/*
 * XREFs of ?RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z @ 0x180155F14
 * Callers:
 *     ?ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801552FC (-ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Now@Time@Animations@Components@@SA?AV123@XZ @ 0x180155ED4 (-Now@Time@Animations@Components@@SA-AV123@XZ.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180156C34 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::AnimationManager::RegisterDeferredEvent(
        Components::Animations::AnimationManager *this,
        struct Components::Animations::AnimationEvent *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  bool v6; // sf
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)&v8 + 1) = *((_QWORD *)this + 48);
  *(_QWORD *)&v8 = a2;
  v3 = Components::Animations::Time::Now(&v10);
  v4 = *((int *)this + 44);
  v9 = *v3;
  result = Components::Animations::ArrayListF<Components::Animations::DeferredEventInfo>::Resize(
             (char *)this + 168,
             (unsigned int)(v4 + 1));
  v6 = (int)result < 0;
  if ( (int)result >= 0 )
  {
    v7 = *((_QWORD *)this + 21) + 24 * v4;
    if ( v7 )
    {
      *(_OWORD *)v7 = v8;
      *(_QWORD *)(v7 + 16) = v9;
    }
    result = 0LL;
    v6 = 0;
  }
  if ( !v6 )
    return 0LL;
  return result;
}
