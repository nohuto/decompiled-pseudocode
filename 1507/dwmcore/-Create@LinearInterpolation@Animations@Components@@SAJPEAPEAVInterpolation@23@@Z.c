/*
 * XREFs of ?Create@LinearInterpolation@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x180157904
 * Callers:
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z @ 0x1801545B4 (-ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18015676C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::LinearInterpolation::Create(
        struct Components::Animations::Interpolation **a1)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         16LL);
  v3 = 0;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 12) &= ~1u;
    *(_QWORD *)v2 = &Components::Animations::LinearInterpolation::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
    *a1 = (struct Components::Animations::Interpolation *)v2;
  else
    return (unsigned int)-2147024882;
  return v3;
}
