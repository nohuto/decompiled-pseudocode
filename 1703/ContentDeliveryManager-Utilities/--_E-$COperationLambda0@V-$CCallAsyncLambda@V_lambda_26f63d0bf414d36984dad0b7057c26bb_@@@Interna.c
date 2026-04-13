/*
 * XREFs of ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_26f63d0bf414d36984dad0b7057c26bb_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180033C10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_26f63d0bf414d36984dad0b7057c26bb_::__lambda_26f63d0bf414d36984dad0b7057c26bb_ @ 0x1800281FC (_lambda_26f63d0bf414d36984dad0b7057c26bb_--__lambda_26f63d0bf414d36984dad0b7057c26bb_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_26f63d0bf414d36984dad0b7057c26bb_>,Windows::Internal::CNoResult>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_26f63d0bf414d36984dad0b7057c26bb_::__lambda_26f63d0bf414d36984dad0b7057c26bb_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
