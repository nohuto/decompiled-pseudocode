/*
 * XREFs of ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180042284
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180042358 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18006D220 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006DAA4 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18003A838 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 */

void __fastcall CVolumeUnit::SetDBRange(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  double v6; // xmm0_8
  double v7; // xmm8_8
  double v8; // xmm0_8
  double v9; // xmm6_8

  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 16) = a5;
  *(float *)(a1 + 8) = a3;
  *(float *)(a1 + 12) = a4;
  *(float *)(a1 + 20) = a4;
  v6 = pow_0(10.0, a3 / 20.0);
  *(double *)(a1 + 48) = v6;
  v7 = v6;
  v8 = pow_0(10.0, a4 / 20.0);
  *(double *)(a1 + 40) = v8;
  v9 = v8;
  *(double *)(a1 + 24) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v7, v8);
  *(double *)(a1 + 32) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v9, v9);
}
