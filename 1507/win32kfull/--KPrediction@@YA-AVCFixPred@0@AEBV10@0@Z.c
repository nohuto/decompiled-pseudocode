/*
 * XREFs of ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01C4198
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C4950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01C6D3C (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 *     DoPrediction @ 0x1C01C8420 (DoPrediction.c)
 * Callees:
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C01C4628 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 */

_QWORD *__fastcall Prediction::operator/(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = Div128by64(*a2 >> 32, *a2 << 32, *a3, &v5);
  return a1;
}
