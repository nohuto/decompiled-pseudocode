/*
 * XREFs of _lambda_0360a2297a44f13f87cc95834c07ff14_::operator() @ 0x180089E34
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0360a2297a44f13f87cc95834c07ff14_@@@std@@YA?AV_lambda_0360a2297a44f13f87cc95834c07ff14_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180089D34 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180089DE4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall lambda_0360a2297a44f13f87cc95834c07ff14_::operator()(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *result; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  v5 = *v4 - *(_QWORD *)a1;
  if ( *v4 == *(_QWORD *)a1 )
    v5 = v4[1] - *(_QWORD *)(a1 + 8);
  if ( !v5 && !**(_QWORD **)(a1 + 16) )
    return Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(*(__int64 **)(a1 + 16), a2);
  v6 = **(_QWORD **)(a1 + 16);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  if ( v7 < (__int64)result )
    return Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(*(__int64 **)(a1 + 16), a2);
  return result;
}
