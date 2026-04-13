/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_78183572efa226fa22f190bba0a96e5b_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x180013650
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_78183572efa226fa22f190bba0a96e5b_::operator() @ 0x18000A268 (_lambda_78183572efa226fa22f190bba0a96e5b_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_78183572efa226fa22f190bba0a96e5b_>,Windows::Internal::CNoResult>::Run(
        __int64 a1,
        void *a2,
        int a3)
{
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_78183572efa226fa22f190bba0a96e5b_::operator()(a1 + 8, a2);
  return (unsigned int)a3;
}
