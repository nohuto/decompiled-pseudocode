/*
 * XREFs of SiGetSystemDisk @ 0x140518884
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x140506740 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14050692C (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x140506C64 (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemDisk @ 0x14069230C (SiGetBiosSystemDisk.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  int FirmwareBootDeviceName; // ebx
  int v9; // edi
  int EfiSystemDevice; // eax
  wchar_t *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( !SiIsWinPEBoot(a1, (__int64)a2, a3, a4) )
  {
    FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(0, a2);
    if ( FirmwareBootDeviceName >= 0 )
      return (unsigned int)FirmwareBootDeviceName;
  }
  v9 = a1 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      FirmwareBootDeviceName = -1073741637;
      goto LABEL_10;
    }
    EfiSystemDevice = SiGetEfiSystemDevice(0LL, v6, a2);
  }
  else
  {
    EfiSystemDevice = SiGetBiosSystemDisk(a2);
  }
  FirmwareBootDeviceName = EfiSystemDevice;
LABEL_10:
  if ( FirmwareBootDeviceName >= 0 )
  {
    FirmwareBootDeviceName = SiTranslateSymbolicLink(*a2, &v11);
    if ( FirmwareBootDeviceName < 0 )
    {
      return 0;
    }
    else
    {
      ExFreePoolWithTag((PVOID)*a2, 0);
      *a2 = v11;
    }
  }
  return (unsigned int)FirmwareBootDeviceName;
}
