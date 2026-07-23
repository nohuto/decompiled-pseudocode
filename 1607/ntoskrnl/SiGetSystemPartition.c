/*
 * XREFs of SiGetSystemPartition @ 0x140542570
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x1405429F8 (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
 */

__int64 __fastcall SiGetSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  int FirmwareBootDeviceName; // ebx
  int v7; // edi
  int EfiSystemDevice; // eax
  const WCHAR *v9; // [rsp+40h] [rbp+18h]

  if ( !(unsigned __int8)SiIsWinPEBoot() )
  {
    FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(1LL, a2);
    if ( FirmwareBootDeviceName >= 0 )
      return (unsigned int)FirmwareBootDeviceName;
  }
  v7 = a1 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      FirmwareBootDeviceName = -1073741637;
      goto LABEL_10;
    }
    EfiSystemDevice = SiGetEfiSystemDevice(1LL, v4, a2);
  }
  else
  {
    EfiSystemDevice = SiGetBiosSystemPartition(a2);
  }
  FirmwareBootDeviceName = EfiSystemDevice;
LABEL_10:
  if ( FirmwareBootDeviceName >= 0 )
  {
    FirmwareBootDeviceName = SiTranslateSymbolicLink(*a2);
    if ( FirmwareBootDeviceName < 0 )
    {
      return 0;
    }
    else
    {
      ExFreePoolWithTag((PVOID)*a2, 0);
      *a2 = v9;
    }
  }
  return (unsigned int)FirmwareBootDeviceName;
}
