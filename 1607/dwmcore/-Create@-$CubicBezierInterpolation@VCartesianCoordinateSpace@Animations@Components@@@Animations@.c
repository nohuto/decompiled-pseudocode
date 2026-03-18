/*
 * XREFs of ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1800B0628
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x180086110 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
        float a1,
        float a2,
        float a3,
        float a4,
        float **a5)
{
  float v5; // xmm7_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm8_4
  unsigned int v9; // edi
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *, size_t); // rax
  float *v11; // rax
  float *v12; // rbx

  v5 = a4;
  v6 = a2;
  if ( a1 < 0.0 )
    v7 = 0.0;
  else
    v7 = fminf(a1, 1.0);
  if ( a3 < 0.0 )
    v8 = 0.0;
  else
    v8 = fminf(a3, 1.0);
  v9 = 0;
  if ( !_finite(a2) )
    v6 = 0.0;
  if ( !_finite(a4) )
    v5 = FLOAT_1_0;
  v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v10 == WPF::ProcessHeapImpl::AllocClear )
    v11 = (float *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v11 = (float *)v10(WPF::g_pProcessHeap, 32LL);
  v12 = v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x20uLL);
    *((_DWORD *)v12 + 2) = 1;
    *(_QWORD *)v12 = &Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v12[4] = v7;
    v12[5] = v6;
    v12[6] = v8;
    v12[7] = v5;
    *a5 = v12;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
