/*
 * XREFs of ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x180019218
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800192E8 (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180085E78 (-Play@Sequence@Animations@Components@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Repeat(Components::Animations::Sequence *this)
{
  Components::Animations::Timer *v1; // rdi
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v5; // rdi

  v1 = (Components::Animations::Sequence *)((char *)this + 208);
  v2 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 52) - *((_DWORD *)this + 54) > 0 )
    v3 = *((_DWORD *)this + 52) - *((_DWORD *)this + 54);
  Components::Animations::Sequence::ConfigureTimer(this);
  Components::Animations::Sequence::Play(this);
  if ( (*((_BYTE *)this + 264) & 2) != 0 )
    Components::Animations::Timer::Update(v1, v3, 1);
  v5 = *((int *)this + 2);
  if ( v5 > 0 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + *(_QWORD *)this + 8) + 32LL))(*(_QWORD *)(v2
                                                                                                  + *(_QWORD *)this
                                                                                                  + 8));
      v2 += 24LL;
      --v5;
    }
    while ( v5 );
  }
}
