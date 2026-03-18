/*
 * XREFs of SiGetSystemDisk @ 0x1406D5FB4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1405422D8 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x1405424B8 (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemDisk @ 0x1406D6AA4 (SiGetBiosSystemDisk.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  int FirmwareBootDeviceName; // ebx
  int v8; // edi
  int EfiSystemDevice; // eax
  wchar_t *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( !SiIsWinPEBoot(a1, (__int64)a2, a3, a4) )
  {
    FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(0, a2);
    if ( FirmwareBootDeviceName >= 0 )
      return (unsigned int)FirmwareBootDeviceName;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      FirmwareBootDeviceName = -1073741637;
      goto LABEL_9;
    }
    EfiSystemDevice = SiGetEfiSystemDevice(0LL, v6, a2);
  }
  else
  {
    EfiSystemDevice = SiGetBiosSystemDisk(a2);
  }
  FirmwareBootDeviceName = EfiSystemDevice;
LABEL_9:
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
