/*
 * XREFs of ?MultiFree@Heap@Animations@Components@@UEAAXHQEAPEAX_K@Z @ 0x180155BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall Components::Animations::Heap::MultiFree(Components::Animations::Heap *this, int a2, void **const a3)
{
  __int64 v4; // rbp

  if ( a2 > 0 )
  {
    v4 = (unsigned int)a2;
    do
    {
      if ( *a3 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *a3);
      ++a3;
      --v4;
    }
    while ( v4 );
  }
}
