/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180067C78
 * Callers:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180067CF0 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18007090C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     log10_0 @ 0x1800449E2 (log10_0.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow_0(10.0, -9.6) <= a2 )
    return log10_0(a2) * 20.0;
  else
    return DOUBLE_N192_0;
}
