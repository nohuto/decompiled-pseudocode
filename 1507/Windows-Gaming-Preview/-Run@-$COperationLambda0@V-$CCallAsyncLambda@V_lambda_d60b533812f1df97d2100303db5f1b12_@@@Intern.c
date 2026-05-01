/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_d60b533812f1df97d2100303db5f1b12_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x1800175E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d60b533812f1df97d2100303db5f1b12_::operator() @ 0x180014188 (_lambda_d60b533812f1df97d2100303db5f1b12_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_d60b533812f1df97d2100303db5f1b12_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_d60b533812f1df97d2100303db5f1b12_::operator()((unsigned int *)(a1 + 8));
  return (unsigned int)a3;
}
