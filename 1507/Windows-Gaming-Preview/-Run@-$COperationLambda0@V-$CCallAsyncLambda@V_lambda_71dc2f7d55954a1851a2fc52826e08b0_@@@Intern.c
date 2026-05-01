/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_71dc2f7d55954a1851a2fc52826e08b0_@@@Internal@Windows@@V?$CBasicResult@E$0A@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@E$0A@@23@@Z @ 0x180017240
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator() @ 0x180013338 (_lambda_71dc2f7d55954a1851a2fc52826e08b0_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_71dc2f7d55954a1851a2fc52826e08b0_>,Windows::Internal::CBasicResult<unsigned char,0>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
