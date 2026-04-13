/*
 * XREFs of ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18001A9B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_ @ 0x18000F088 (_lambda_31b30073c32c2d01143855768ac2b990_--__lambda_31b30073c32c2d01143855768ac2b990_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
