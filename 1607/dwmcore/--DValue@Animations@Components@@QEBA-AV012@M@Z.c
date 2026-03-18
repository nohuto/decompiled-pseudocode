/*
 * XREFs of ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x18001A030
 * Callers:
 *     ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019F60 (-Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

double *__fastcall Components::Animations::Value::operator*(__int64 a1, double *a2, float a3)
{
  int v3; // r8d
  double *v4; // r9
  __int64 v5; // rcx

  v3 = 0;
  v4 = a2;
  *a2 = 0.0;
  v5 = a1 - (_QWORD)a2;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[3] = 0.0;
  do
  {
    ++v3;
    *v4 = a3 * *(double *)((char *)v4 + v5);
    ++v4;
  }
  while ( (unsigned __int64)v3 < 4 );
  return a2;
}
