/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_d1d6df3afd909720884b15ba4832b47d_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18002DB80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::__lambda_d1d6df3afd909720884b15ba4832b47d_ @ 0x18001FEC4 (_lambda_d1d6df3afd909720884b15ba4832b47d_--__lambda_d1d6df3afd909720884b15ba4832b47d_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_d1d6df3afd909720884b15ba4832b47d_>,Windows::Internal::CNoResult>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_d1d6df3afd909720884b15ba4832b47d_::__lambda_d1d6df3afd909720884b15ba4832b47d_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
