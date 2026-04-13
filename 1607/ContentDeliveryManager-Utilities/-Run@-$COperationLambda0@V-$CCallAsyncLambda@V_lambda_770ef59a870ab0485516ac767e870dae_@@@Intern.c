/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Z @ 0x1800446C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_770ef59a870ab0485516ac767e870dae_::operator() @ 0x180040F4C (_lambda_770ef59a870ab0485516ac767e870dae_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_770ef59a870ab0485516ac767e870dae_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_770ef59a870ab0485516ac767e870dae_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
