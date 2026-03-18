/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x14070DE6C
 * Callers:
 *     BiBindEfiEntries @ 0x14070EBA4 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14070FD0C (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
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
