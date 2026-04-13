/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180021FA0
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180002FC8 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180021A44 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x180022084 (-IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ @ 0x180021EAC (-_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, int a2, HANDLE *a3)
{
  HRESULT v5; // eax
  CallerIdentity *v6; // rcx
  int v7; // edi
  void *v8; // rsi
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &v10);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -2147417833 )
    {
      *a3 = GetCurrentProcess();
      v7 = 0;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)v10 + 24LL))(v10, 4096LL, a3);
  }
  if ( v7 >= 0 && a2 == 1 )
  {
    CallerIdentity::_EnsureRuntimeBrokerPID(v6);
    if ( GetProcessId(*a3) == CallerIdentity::g_dwRuntimeBrokerProcessId )
    {
      CloseHandle(*a3);
      *a3 = 0LL;
      v7 = -2147467259;
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
