/*
 * XREFs of ?Play@Sequence@Animations@Components@@QEAAJXZ @ 0x18015690C
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Repeat@Sequence@Animations@Components@@QEAAJXZ @ 0x180156B44 (-Repeat@Sequence@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180156F88 (-SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?Create@Timer@Animations@Components@@SAJIHPEAPEAV123@@Z @ 0x180157148 (-Create@Timer@Animations@Components@@SAJIHPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Sequence::Play(Components::Animations::Sequence *this)
{
  char v1; // al
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14

  v1 = *((_BYTE *)this + 244);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 244) = v1 | 2;
    return 0LL;
  }
  Components::Animations::Sequence::SortKeyFrames(this);
  v3 = 0;
  if ( *((int *)this + 6) > 0 )
    v3 = **((_DWORD **)this + 2);
  result = Components::Animations::Timer::Create(
             v3,
             *((_DWORD *)this + 62),
             (struct Components::Animations::Timer **)this + 28);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)this )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 32LL))(*((_QWORD *)this + 1));
    v6 = *((int *)this + 6);
    if ( v6 > 0 )
    {
      v7 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *((_QWORD *)this + 2) + 8) + 32LL))(*(_QWORD *)(v7 + *((_QWORD *)this + 2) + 8));
        v7 += 24LL;
        --v6;
      }
      while ( v6 );
    }
    *((_BYTE *)this + 244) |= 3u;
    return 0LL;
  }
  return result;
}
