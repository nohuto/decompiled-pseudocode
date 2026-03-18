/*
 * XREFs of ?Create@?$XamlElasticInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x180193688
 * Callers:
 *     ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180192150 (-ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::XamlElasticInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
        unsigned int a1,
        int a2,
        float a3,
        float **a4)
{
  float v4; // xmm6_4
  unsigned int v5; // edi
  int v6; // ebp
  float *v9; // rax
  float *v10; // rbx

  v4 = a3;
  v5 = 0;
  v6 = a2;
  if ( a2 < 0 )
    v6 = 0;
  if ( !_finite(a3) || a3 < 0.0 )
    v4 = 0.0;
  v9 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  32LL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *((_DWORD *)v10 + 2) = 1;
    *(_QWORD *)v10 = &Components::Animations::XamlElasticInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v10[7] = v4;
    *((_DWORD *)v10 + 6) = v6;
    if ( a1 > 2 )
      a1 = 0;
    *((_DWORD *)v10 + 4) = a1;
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
