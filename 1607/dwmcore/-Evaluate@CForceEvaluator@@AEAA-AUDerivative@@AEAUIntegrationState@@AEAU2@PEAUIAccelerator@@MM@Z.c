/*
 * XREFs of ?Evaluate@CForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180168FC8
 * Callers:
 *     ?Integrate@CForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180169058 (-Integrate@CForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall CForceEvaluator::Evaluate(
        __int64 a1,
        float *a2,
        __int64 a3,
        float *a4,
        __int64 *a5,
        __int64 a6,
        float a7)
{
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rdx
  _BYTE v12[4]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+24h] [rbp-24h]
  float v14; // [rsp+28h] [rbp-20h]

  v8 = (float)(a7 * a4[1]) + *(float *)(a3 + 8);
  v9 = (float)(a7 * *a4) + *(float *)(a3 + 4);
  *a2 = v8;
  v10 = *a5;
  v13 = v9;
  v14 = v8;
  a2[1] = (*(float (__fastcall **)(__int64 *, _BYTE *))(v10 + 16))(a5, v12);
  return a2;
}
