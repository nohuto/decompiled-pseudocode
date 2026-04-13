/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_d1d6df3afd909720884b15ba4832b47d_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x18002C560
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::operator() @ 0x18001F970 (_lambda_d1d6df3afd909720884b15ba4832b47d_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_d1d6df3afd909720884b15ba4832b47d_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_d1d6df3afd909720884b15ba4832b47d_::operator()(a1 + 8);
  return (unsigned int)a3;
}
