/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x18001A640
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_31b30073c32c2d01143855768ac2b990_::operator()(a1 + 8);
  return (unsigned int)a3;
}
