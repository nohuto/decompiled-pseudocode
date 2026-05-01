/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_bbf38d9c7f6d38a94907f74399a6babc_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x180016DD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator() @ 0x180013A54 (_lambda_bbf38d9c7f6d38a94907f74399a6babc_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_bbf38d9c7f6d38a94907f74399a6babc_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator()((unsigned int *)(a1 + 8));
  return (unsigned int)a3;
}
