/*
 * XREFs of ?Create@CubicBezierInterpolation@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180157840
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z @ 0x180154388 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation::Create(
        float a1,
        float a2,
        float a3,
        float a4,
        struct Components::Animations::Interpolation **a5)
{
  __int64 v5; // rax
  unsigned int v6; // edx

  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v6 = 0;
  if ( v5 )
  {
    *(_BYTE *)(v5 + 12) &= ~1u;
    *(_QWORD *)v5 = &Components::Animations::CubicBezierInterpolation::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *(float *)(v5 + 16) = a1;
    *(float *)(v5 + 20) = a2;
    *(float *)(v5 + 24) = a3;
    *(float *)(v5 + 28) = a4;
    *a5 = (struct Components::Animations::Interpolation *)v5;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
