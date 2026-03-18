/*
 * XREFs of ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180085E78
 * Callers:
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x180019218 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C9C (-SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Play(Components::Animations::Sequence *this)
{
  char v1; // al
  __int64 v3; // rsi
  __int64 v4; // rdi

  v1 = *((_BYTE *)this + 264);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 264) = v1 | 2;
  }
  else
  {
    Components::Animations::Sequence::SortKeyFrames((void **)this);
    Components::Animations::Sequence::ConfigureTimer((int **)this);
    v3 = *((int *)this + 2);
    v4 = 0LL;
    if ( v3 > 0 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + *(_QWORD *)this + 8) + 24LL))(*(_QWORD *)(v4 + *(_QWORD *)this + 8));
        v4 += 24LL;
        --v3;
      }
      while ( v3 );
    }
    *((_BYTE *)this + 264) |= 3u;
  }
}
