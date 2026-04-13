/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_a8dac312d343c3f34a0a00c8a64736dd_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Z @ 0x180044690
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C (_lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_a8dac312d343c3f34a0a00c8a64736dd_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator()((HSTRING *)(a1 + 8), a4);
  return (unsigned int)a3;
}
