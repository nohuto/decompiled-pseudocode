/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_a644c9ca355a20c9ec9333f2681dd115_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@@Z @ 0x18000AC40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a644c9ca355a20c9ec9333f2681dd115_::operator() @ 0x1800091D4 (_lambda_a644c9ca355a20c9ec9333f2681dd115_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_a644c9ca355a20c9ec9333f2681dd115_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()((HSTRING *)(a1 + 8), a4);
  return (unsigned int)a3;
}
