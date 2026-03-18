/*
 * XREFs of ?Compute@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180192760
 * Callers:
 *     <none>
 * Callees:
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        __int64 a1,
        float a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx

  v9 = (int)floorf_0(a2 / *(float *)(a1 + 36));
  if ( a2 == 1.0 )
    --v9;
  v10 = (unsigned int)(*(_DWORD *)(a1 + 20) + v9);
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 28) )
  {
    v10 = (unsigned int)(v10 - 1);
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 32) )
  {
    v10 = (unsigned int)(v10 + 1);
  }
  return Components::Animations::HslCoordinateSpace::Interpolate(v10, v8, a4, a5, a6);
}
