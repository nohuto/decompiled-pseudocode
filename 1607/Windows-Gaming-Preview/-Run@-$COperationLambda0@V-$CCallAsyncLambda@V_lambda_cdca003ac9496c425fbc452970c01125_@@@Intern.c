/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_cdca003ac9496c425fbc452970c01125_@@@Internal@Windows@@V?$CBasicResult@E$0A@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@E$0A@@23@@Z @ 0x1800185D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cdca003ac9496c425fbc452970c01125_::operator() @ 0x180014AD0 (_lambda_cdca003ac9496c425fbc452970c01125_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_cdca003ac9496c425fbc452970c01125_>,Windows::Internal::CBasicResult<unsigned char,0>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_cdca003ac9496c425fbc452970c01125_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
