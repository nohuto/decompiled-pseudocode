/*
 * XREFs of ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800BF57C
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180161EEC (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z @ 0x180163030 (-QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z.c)
 *     ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x1801631E0 (-QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z.c)
 *     ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x180165008 (-StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801657C4 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180165A30 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 *     ?EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z @ 0x180165E8C (-EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Value::GetColor(__int64 a1, __int64 a2)
{
  __int64 i; // rax

  for ( i = 0LL; i < 4; ++i )
    *(float *)(a2 + 4 * i) = *(double *)(a1 + 8 * i);
  return a2;
}
