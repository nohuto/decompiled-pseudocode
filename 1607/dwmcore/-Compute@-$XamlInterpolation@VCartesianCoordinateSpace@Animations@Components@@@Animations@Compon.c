/*
 * XREFs of ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019ED0
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  double (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v7 = *(double (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( a1[4] )
    v7();
  else
    v7();
  return Components::Animations::CartesianCoordinateSpace::Interpolate(v9, v8, a4, a5, a6);
}
