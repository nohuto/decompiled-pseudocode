/*
 * XREFs of ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800C29B0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x1800864B0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z @ 0x1801940E0 (-QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z.c)
 *     ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x180194280 (-QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194A64 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
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
