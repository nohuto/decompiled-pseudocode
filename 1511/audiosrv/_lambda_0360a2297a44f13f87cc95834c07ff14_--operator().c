/*
 * XREFs of _lambda_0360a2297a44f13f87cc95834c07ff14_::operator() @ 0x1800871B4
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0360a2297a44f13f87cc95834c07ff14_@@@std@@YA?AV_lambda_0360a2297a44f13f87cc95834c07ff14_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800870B4 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180087164 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall lambda_0360a2297a44f13f87cc95834c07ff14_::operator()(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v8);
  if ( *v4 == *(_QWORD *)a1 && v4[1] == *(_QWORD *)(a1 + 8) && !**(_QWORD **)(a1 + 16) )
    return Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(*(__int64 **)(a1 + 16), a2);
  v5 = **(_QWORD **)(a1 + 16);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  if ( v6 < (__int64)result )
    return Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(*(__int64 **)(a1 + 16), a2);
  return result;
}
