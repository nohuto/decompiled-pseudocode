/*
 * XREFs of ?Integrate@CForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180169058
 * Callers:
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180168ED0 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Evaluate@CForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180168FC8 (-Evaluate@CForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

__int64 __fastcall CForceEvaluator::Integrate(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        float a6)
{
  unsigned int v7; // xmm6_4
  int v8; // xmm7_4
  unsigned int v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  __int64 v14; // rcx
  float *v15; // rax
  __int64 v16; // rcx
  float *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // xmm0_8
  __int64 result; // rax
  float v21; // xmm1_4
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+30h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+40h] BYREF

  v25 = a1;
  v7 = *(_DWORD *)(a3 + 8);
  v8 = a5;
  *(float *)&v11 = (*(float (__fastcall **)(__int64 *, __int64))(*a4 + 16))(a4, a3);
  v12 = a6;
  v25 = __PAIR64__(v11, v7);
  v13 = a6 * 0.5;
  LODWORD(v22) = v8;
  v15 = CForceEvaluator::Evaluate(v14, (float *)&v26, a3, (float *)&v25, a4, v22, a6 * 0.5);
  LODWORD(v23) = v8;
  v27 = *(_QWORD *)v15;
  v17 = CForceEvaluator::Evaluate(v16, (float *)&v26, a3, (float *)&v27, a4, v23, v13);
  LODWORD(v24) = v8;
  v26 = *(_QWORD *)v17;
  v19 = *(_QWORD *)CForceEvaluator::Evaluate(v18, (float *)&v28, a3, (float *)&v26, a4, v24, v12);
  result = a2;
  v28 = v19;
  v21 = (float)(*(float *)&v26 + *(float *)&v27) * 2.0;
  *(_DWORD *)a2 = HIDWORD(v19);
  *(float *)(a2 + 4) = (float)((float)((float)((float)(v21 + *(float *)&v25) + *(float *)&v28) * 0.16666667) * v12)
                     + *(float *)(a3 + 4);
  *(float *)(a2 + 8) = (float)((float)((float)((float)((float)((float)(*((float *)&v26 + 1) + *((float *)&v27 + 1)) * 2.0)
                                                     + *((float *)&v25 + 1))
                                             + *((float *)&v19 + 1))
                                     * 0.16666667)
                             * v12)
                     + *(float *)(a3 + 8);
  return result;
}
