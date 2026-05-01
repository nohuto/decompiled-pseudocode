/*
 * XREFs of ??$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyUsageManager@@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180024308
 * Callers:
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180024288 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 * Callees:
 *     ?RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x18002450C (-RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@.c)
 *     ??0AppEnergyUsageManager@@QEAA@XZ @ 0x1800246A4 (--0AppEnergyUsageManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppEnergyUsageManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025488 (-InternalRelease@-$ComPtr@VAppEnergyUsageManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppEnergyUsageManager,AppEnergyUsageManager,ExecutionModel::IRMExecServicesProvider * &>(
        AppEnergyUsageManager **a1,
        struct ExecutionModel::IRMExecServicesProvider **a2)
{
  AppEnergyUsageManager *v4; // rax
  AppEnergyUsageManager *v5; // rax
  struct ExecutionModel::IRMExecServicesProvider *v6; // rdx
  AppEnergyUsageManager *v7; // rdi
  int v8; // ebx
  AppEnergyUsageManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = (AppEnergyUsageManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = AppEnergyUsageManager::AppEnergyUsageManager(v4);
    v6 = *a2;
    v7 = v5;
    v10 = v5;
    v8 = AppEnergyUsageManager::RuntimeClassInitialize(v5, v6);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(AppEnergyUsageManager *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::ComPtr<AppEnergyUsageManager>::InternalRelease(&v10);
  return (unsigned int)v8;
}
