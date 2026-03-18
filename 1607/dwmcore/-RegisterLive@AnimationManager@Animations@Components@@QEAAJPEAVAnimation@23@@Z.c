/*
 * XREFs of ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x1800AD1F8
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18001D898 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 *     ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x1800AD428 (-Find@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnim.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1800AD458 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 */

__int64 __fastcall Components::Animations::AnimationManager::RegisterLive(
        Components::Animations::AnimationManager *this,
        struct Components::Animations::Animation *a2)
{
  int v3; // eax
  __int64 result; // rax
  struct Components::Animations::Animation *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find((char *)this + 88, &v5);
  if ( v3 >= 0 )
  {
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((__int64)this + 88, v3);
LABEL_3:
    *((_BYTE *)this + 184) |= 4u;
    return 0LL;
  }
  result = Components::Animations::ArrayListF<Components::Animations::Animation *>::Add((char *)this + 8, &v5);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
