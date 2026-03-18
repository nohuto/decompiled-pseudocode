/*
 * XREFs of BiIsWinPEBoot @ 0x14056F0BC
 * Callers:
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 * Callees:
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 */

bool BiIsWinPEBoot()
{
  bool v0; // bl
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiGetRegistryValue(
              0LL,
              L"SystemStartOptions",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1LL,
              &Str,
              &v2) >= 0 )
  {
    v0 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0);
  }
  return v0;
}
