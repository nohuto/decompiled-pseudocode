/*
 * XREFs of ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180024288
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 * Callees:
 *     ??$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyUsageManager@@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180024308 (--$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@.c)
 *     ?InternalRelease@?$ComPtr@VAppEnergyUsageManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025488 (-InternalRelease@-$ComPtr@VAppEnergyUsageManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreateAppEnergyManager(
        struct ExecutionModel::IRMExecServicesProvider *a1,
        struct IAppEnergyUsageManager **a2)
{
  struct IAppEnergyUsageManager *v2; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ExecutionModel::IRMExecServicesProvider *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  v2 = 0LL;
  v13 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    v8 = 57LL;
    v9 = 2147942487LL;
LABEL_9:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v8,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v9,
      v10);
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<AppEnergyUsageManager>::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<AppEnergyUsageManager,AppEnergyUsageManager,ExecutionModel::IRMExecServicesProvider * &>(
         &v13,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v8 = 61LL;
    goto LABEL_9;
  }
  v6 = v13;
  v13 = 0LL;
  if ( v6 )
    v2 = (struct IAppEnergyUsageManager *)(v6 + 8);
  *a2 = v2;
LABEL_6:
  Microsoft::WRL::ComPtr<AppEnergyUsageManager>::InternalRelease(&v13);
  return v5;
}
