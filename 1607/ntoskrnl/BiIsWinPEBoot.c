/*
 * XREFs of BiIsWinPEBoot @ 0x14053D460
 * Callers:
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 * Callees:
 *     wcsstr @ 0x14014F70C (wcsstr.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
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
    ExFreePoolWithTag(Str, 0x4B444342u);
  }
  return v0;
}
