/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0360a2297a44f13f87cc95834c07ff14_@@@std@@YA?AV_lambda_0360a2297a44f13f87cc95834c07ff14_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800870B4
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     _lambda_0360a2297a44f13f87cc95834c07ff14_::operator() @ 0x1800871B4 (_lambda_0360a2297a44f13f87cc95834c07ff14_--operator().c)
 */

__int64 __fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>>,_lambda_0360a2297a44f13f87cc95834c07ff14_>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = a2; i != a3; i += 8LL )
    lambda_0360a2297a44f13f87cc95834c07ff14_::operator()(a4, i);
  result = a1;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 16);
  return result;
}
