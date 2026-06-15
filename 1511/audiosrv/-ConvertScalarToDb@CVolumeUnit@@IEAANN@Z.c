/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180042178
 * Callers:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x1800420A4 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18006EFDC (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     log10_0 @ 0x180048C32 (log10_0.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow_0(10.0, -9.6) > a2 )
    return DOUBLE_N192_0;
  else
    return log10_0(a2) * 20.0;
}
