/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_78183572efa226fa22f190bba0a96e5b_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x1800136A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_78183572efa226fa22f190bba0a96e5b_>,Windows::Internal::CNoResult>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  HSTRING v4; // rcx

  v4 = (HSTRING)a1[1];
  if ( v4 )
    WindowsDeleteString(v4);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
