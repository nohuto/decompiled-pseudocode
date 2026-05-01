/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_61beeb39da0ffab562e69952bf082708_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x1800185A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_61beeb39da0ffab562e69952bf082708_::operator() @ 0x180015838 (_lambda_61beeb39da0ffab562e69952bf082708_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_61beeb39da0ffab562e69952bf082708_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_61beeb39da0ffab562e69952bf082708_::operator()((unsigned int *)(a1 + 8));
  return (unsigned int)a3;
}
