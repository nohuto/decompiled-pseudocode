/*
 * XREFs of ?ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ @ 0x1801610C8
 * Callers:
 *     ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180161E08 (-CleanUp@Animation@Animations@Components@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180160BD0 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180162F64 (-ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiRemoveAllEvents(Components::Animations::Animation *this)
{
  __int64 result; // rax
  int v3; // ebp
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // r14

  result = Components::Animations::Animation::ProcessPendingEvents(this, 0);
  if ( (int)result >= 0 )
  {
    v3 = *((_DWORD *)this + 32);
    v4 = 0;
    v5 = *((_QWORD *)this + 15);
    while ( v4 != v3 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * v4);
      if ( v6 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(v5 + 8LL * v4), 1LL);
      ++v4;
    }
    Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)this + 120);
    return 0LL;
  }
  return result;
}
