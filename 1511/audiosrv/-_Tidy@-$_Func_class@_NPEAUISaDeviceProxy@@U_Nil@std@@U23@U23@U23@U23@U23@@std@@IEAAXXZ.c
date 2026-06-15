/*
 * XREFs of ?_Tidy@?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@IEAAXXZ @ 0x180066924
 * Callers:
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x180066900 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??1?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@QEAA@XZ @ 0x180066984 (--1-$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@QEAA@XZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Tidy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 32LL))(*(_QWORD *)(a1 + 24), a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
