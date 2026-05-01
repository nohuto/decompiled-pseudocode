/*
 * XREFs of ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x18004C5C8
 * Callers:
 *     ?FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x18004935C (-FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002229C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18004B5A8 (-PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::SendPackageEnergyStateChangeNotification(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _WNF_STATE_NAME v8; // rdx
  AppEnergyInformation *v9; // rcx
  int v10; // eax
  char v11[256]; // [rsp+20h] [rbp-128h] BYREF
  int v12; // [rsp+120h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  if ( !*(_DWORD *)(a1 + 280) && !*(_DWORD *)(a1 + 284) )
  {
    v4 = -2147019873;
    v5 = 1494LL;
    v6 = 2147947423LL;
LABEL_4:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v5,
      (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v6);
    return v4;
  }
  StringCchCopyNW(v11, 128LL, *(char **)(a1 + 240), (__int64)(*(_QWORD *)(a1 + 248) - *(_QWORD *)(a1 + 240)) >> 1);
  v8 = *(struct _WNF_STATE_NAME *)(a1 + 280);
  v12 = a2;
  v10 = AppEnergyInformation::PublishWnfStateData(v9, v8, (unsigned __int8 *)v11, 260LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    v6 = (unsigned int)v10;
    v5 = 1502LL;
    goto LABEL_4;
  }
  return 0LL;
}
