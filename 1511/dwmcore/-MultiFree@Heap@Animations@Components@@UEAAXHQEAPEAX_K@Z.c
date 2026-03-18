/*
 * XREFs of ?MultiFree@Heap@Animations@Components@@UEAAXHQEAPEAX_K@Z @ 0x180163880
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
