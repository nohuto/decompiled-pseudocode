/*
 * XREFs of ACPIInitializeKernelTableHandler @ 0x1C001AD1C
 * Callers:
 *     ACPIRootIrpRemoveDevice @ 0x1C00408E0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInitialize @ 0x1C0086558 (ACPIInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIInitializeKernelTableHandler(char a1, __int64 a2)
{
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+34h] [rbp-24h]
  __int64 (__fastcall *v6)(__int64); // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v7 = a2;
  SystemInformation = 1094930505;
  v6 = ACPIEnumMapTableHandler;
  result = ZwSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18uLL);
  if ( a1 )
    return ZwPowerInformation(SystemBatteryState|0x40, 0LL, 0, 0LL, 0);
  return result;
}
