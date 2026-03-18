/*
 * XREFs of ?Create@Timer@Animations@Components@@SAJIHPEAPEAV123@@Z @ 0x180165204
 * Callers:
 *     ?Play@Sequence@Animations@Components@@QEAAJXZ @ 0x1801646EC (-Play@Sequence@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall Components::Animations::Timer::Create(int a1, int a2, struct Components::Animations::Timer **a3)
{
  struct Components::Animations::Timer *v6; // rax
  unsigned int v7; // edx

  v6 = (struct Components::Animations::Timer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                 WPF::g_pProcessHeap,
                                                 24LL);
  v7 = 0;
  if ( v6 )
    *(_DWORD *)v6 = 1;
  else
    v6 = 0LL;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = a1;
    *((_DWORD *)v6 + 3) = a2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
