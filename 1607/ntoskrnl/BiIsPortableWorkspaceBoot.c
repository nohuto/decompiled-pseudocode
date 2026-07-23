/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x1406D2C70
 * Callers:
 *     BiBindEfiEntries @ 0x1406D3944 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1406D4AD4 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
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
      ExFreePoolWithTag(P, 0x4B444342u);
    }
  }
  else
  {
    BiCloseKey(Handle);
  }
  return v0;
}
