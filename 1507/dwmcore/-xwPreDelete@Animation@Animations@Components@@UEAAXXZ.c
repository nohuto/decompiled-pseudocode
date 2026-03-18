/*
 * XREFs of ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180155810
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180154A78 (-CleanUp@Animation@Animations@Components@@AEAAXXZ.c)
 *     ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x180155D64 (-Find@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnim.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18015603C (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 */

void __fastcall Components::Animations::Animation::xwPreDelete(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  Components::Animations::AnimationManager *v4; // rdi
  int v5; // eax
  int v6; // eax
  Components::Animations::Animation *v7; // [rsp+30h] [rbp+8h] BYREF

  Components::Animations::Animation::CleanUp(this, a2, a3);
  v4 = Components::Animations::AnimationManager::s_PORT_pSingleton;
  v7 = this;
  v5 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find(
         (char *)Components::Animations::AnimationManager::s_PORT_pSingleton + 8,
         &v7);
  if ( v5 >= 0 )
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((char *)v4 + 8, (unsigned int)v5);
  v6 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find((char *)v4 + 88, &v7);
  if ( v6 >= 0 )
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((char *)v4 + 88, (unsigned int)v6);
}
