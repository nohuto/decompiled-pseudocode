/*
 * XREFs of ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x1800421EC
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18003A838 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 */

void __fastcall CVolumeUnit::SetTaperOverallRange(CVolumeUnit *this, float a2, float a3)
{
  double v4; // xmm9_8
  double v5; // xmm0_8

  v4 = pow_0(10.0, a3 / 20.0);
  v5 = pow_0(10.0, a2 / 20.0);
  *((double *)this + 3) = CVolumeUnit::TaperFromScalar(this, v5, v4);
  *((double *)this + 4) = CVolumeUnit::TaperFromScalar(this, v4, v4);
}
