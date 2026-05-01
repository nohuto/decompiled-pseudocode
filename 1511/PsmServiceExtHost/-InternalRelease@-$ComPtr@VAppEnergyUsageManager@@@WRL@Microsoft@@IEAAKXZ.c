/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppEnergyUsageManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025488
 * Callers:
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180024288 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 *     ??$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyUsageManager@@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180024308 (--$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppEnergyUsageManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
