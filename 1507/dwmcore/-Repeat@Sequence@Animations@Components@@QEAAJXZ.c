/*
 * XREFs of ?Repeat@Sequence@Animations@Components@@QEAAJXZ @ 0x180156B44
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Play@Sequence@Animations@Components@@QEAAJXZ @ 0x18015690C (-Play@Sequence@Animations@Components@@QEAAJXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH@Z @ 0x1801571D8 (-Update@Timer@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall Components::Animations::Sequence::Repeat(Components::Animations::Sequence *this)
{
  __int64 v1; // rsi
  Components::Animations::Timer *v3; // rcx
  int v4; // ebx
  int v5; // eax
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rbp

  v1 = 0LL;
  v3 = (Components::Animations::Timer *)*((_QWORD *)this + 28);
  v4 = 0;
  v5 = *((_DWORD *)v3 + 1) - *((_DWORD *)v3 + 3) - *((_DWORD *)v3 + 2);
  v6 = *((_DWORD *)v3 + 1) - *((_DWORD *)v3 + 3) == *((_DWORD *)v3 + 2);
  *((_DWORD *)v3 + 1) = 0;
  if ( v5 >= 0 && !v6 )
    v4 = v5;
  Components::Animations::Timer::Update(v3, 0);
  Components::Animations::Sequence::Play(this);
  if ( (*((_BYTE *)this + 244) & 2) != 0 )
    Components::Animations::Timer::Update(*((Components::Animations::Timer **)this + 28), v4);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 40LL))(*((_QWORD *)this + 1));
  v8 = *((int *)this + 6);
  if ( v8 > 0 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + *((_QWORD *)this + 2) + 8) + 40LL))(*(_QWORD *)(v1 + *((_QWORD *)this + 2) + 8));
      v1 += 24LL;
      --v8;
    }
    while ( v8 );
  }
  return 0LL;
}
