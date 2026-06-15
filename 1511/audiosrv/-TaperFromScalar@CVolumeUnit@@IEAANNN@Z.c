/*
 * XREFs of ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18003A838
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18003A6D0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18003B2C4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x1800421EC (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180042284 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 * Callees:
 *     pow_0 @ 0x180048C4A (pow_0.c)
 */

double __fastcall CVolumeUnit::TaperFromScalar(CVolumeUnit *this, double a2, double a3)
{
  double v3; // xmm3_8
  double v4; // xmm0_8

  v3 = a2;
  if ( *(_DWORD *)this == 1 )
  {
    v4 = a2;
    if ( a2 > 1.0 )
      return 2.0 - pow_0(a2, -0.5714285714285714);
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return v3;
    v4 = a2 / a3;
  }
  return pow_0(v4, 0.5714285714285714);
}
