/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x14063AE00
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PnpRegistryValueExists @ 0x1401CF2C0 (PnpRegistryValueExists.c)
 *     PnpValidateRegistryDword @ 0x1401CF3AC (PnpValidateRegistryDword.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14063AFF0 (PiDevCfgOpenDeviceMigrationKey.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // edi
  int v7; // ebx
  unsigned int *v8; // rcx
  UNICODE_STRING v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0LL;
  LOBYTE(v6) = 0;
  v7 = PiDevCfgOpenDeviceMigrationKey(*(PCWSTR *)(a2 + 8));
  if ( v7 >= 0 )
  {
    if ( IopGetRegistryValue(0LL, L"ConfigFlags", 0, &v11) >= 0 )
    {
      if ( PnpValidateRegistryDword(v11) )
        v6 = *(unsigned int *)((char *)v8 + v8[2]);
      ExFreePoolWithTag(v8, 0);
    }
    if ( (v6 & 1) == 0 )
      return (unsigned int)-1073741823;
    v10.Buffer = L"DriverInfName";
    *(_DWORD *)&v10.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v10) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, (__int64 *)a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v7;
}
