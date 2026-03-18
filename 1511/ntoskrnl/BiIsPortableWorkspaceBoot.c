/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x14068E354
 * Callers:
 *     BiBindEfiEntries @ 0x14068F08C (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1406901F4 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  bool v0; // bl
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 0x20019u, &Handle) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4,
                &P,
                &Handle) >= 0 )
    {
      v0 = *(_DWORD *)P != 0;
      ExFreePoolWithTag(P, 0);
    }
  }
  else
  {
    BiCloseKey(Handle);
  }
  return v0;
}
