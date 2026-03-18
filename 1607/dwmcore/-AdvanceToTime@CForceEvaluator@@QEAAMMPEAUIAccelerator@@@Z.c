/*
 * XREFs of ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180168ED0
 * Callers:
 *     ?Update@CSpringForce@@QEAAMM@Z @ 0x180168D00 (-Update@CSpringForce@@QEAAMM@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180168EA0 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Integrate@CForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180169058 (-Integrate@CForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

float __fastcall CForceEvaluator::AdvanceToTime(CForceEvaluator *this, float a2, struct IAccelerator *a3)
{
  float v6; // xmm2_4
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF

  v6 = fmaxf(0.0, fminf(a2 - *(float *)this, 0.25)) + *((float *)this + 1);
  *((float *)this + 1) = v6;
  if ( v6 >= 0.0099999998 )
  {
    v7 = (char *)this + 12;
    do
    {
      v8 = *((_DWORD *)v7 + 2);
      *((_QWORD *)this + 3) = *(_QWORD *)v7;
      v17 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) = v8;
      v9 = CForceEvaluator::Integrate(this, v18, v7, a3, v17, LODWORD(FLOAT_0_0099999998));
      v10 = *((float *)this + 1) - 0.0099999998;
      *(_QWORD *)v7 = *(_QWORD *)v9;
      *((_DWORD *)v7 + 2) = *(_DWORD *)(v9 + 8);
      v11 = *((float *)this + 2) + 0.0099999998;
      *((float *)this + 1) = v10;
      *((float *)this + 2) = v11;
    }
    while ( v10 >= 0.0099999998 );
  }
  v12 = *((float *)this + 1) / 0.0099999998;
  v13 = 1.0 - v12;
  v14 = v12 * *((float *)this + 4);
  v15 = v13 * *((float *)this + 7);
  *(float *)this = a2;
  return v15 + v14;
}
