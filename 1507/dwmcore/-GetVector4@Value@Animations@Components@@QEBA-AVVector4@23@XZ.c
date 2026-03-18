/*
 * XREFs of ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x180155520 (-QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z.c)
 *     ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8 (-SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@2.c)
 *     ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x1801582F0 (-StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@.c)
 *     ?EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z @ 0x18015844C (-EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Value::GetVector4(__int64 a1, __int64 a2)
{
  __int64 i; // rax

  for ( i = 0LL; i < 4; ++i )
    *(float *)(a2 + 4 * i) = *(double *)(a1 + 8 * i);
  return a2;
}
