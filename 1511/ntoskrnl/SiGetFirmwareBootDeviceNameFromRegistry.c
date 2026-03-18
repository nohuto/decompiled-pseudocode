/*
 * XREFs of SiGetFirmwareBootDeviceNameFromRegistry @ 0x140506BF8
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x140506740 (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140692568 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     _wcslwr @ 0x1401443C0 (_wcslwr.c)
 *     SiGetRegistryValue @ 0x140506CC8 (SiGetRegistryValue.c)
 */

__int64 __fastcall SiGetFirmwareBootDeviceNameFromRegistry(wchar_t **a1, __int64 a2, __int64 a3, int a4)
{
  int RegistryValue; // edi
  wchar_t *v6; // rbx
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *String; // [rsp+50h] [rbp+18h] BYREF

  RegistryValue = SiGetRegistryValue(
                    (_DWORD)a1,
                    (unsigned int)L"FirmwareBootDevice",
                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                    a4,
                    (__int64)&String,
                    (__int64)&v8);
  if ( RegistryValue >= 0 )
  {
    if ( v8 < 4 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v6 = String;
      wcslwr(String);
      *a1 = v6;
    }
  }
  return (unsigned int)RegistryValue;
}
