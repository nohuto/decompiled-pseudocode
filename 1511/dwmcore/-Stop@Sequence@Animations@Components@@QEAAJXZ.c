/*
 * XREFs of ?Stop@Sequence@Animations@Components@@QEAAJXZ @ 0x180164C40
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@?$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18016480C (-Release@-$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::Sequence::Stop(Components::Animations::Sequence *this)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r14

  v1 = 0LL;
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 48LL))(*((_QWORD *)this + 1));
  v4 = *((int *)this + 6);
  if ( v4 > 0 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + v1 + 8) + 48LL))(*(_QWORD *)(*((_QWORD *)this + 2) + v1 + 8));
      v1 += 24LL;
      --v4;
    }
    while ( v4 );
  }
  Components::Animations::RefPtr<Components::Animations::Timer>::Release((_DWORD **)this + 28);
  *((_BYTE *)this + 244) &= 0xFCu;
  return 0LL;
}
