/*
 * XREFs of PopEnlargeHiberFile @ 0x1404F6A34
 * Callers:
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     PopResizeHiberFile @ 0x1404F5DF0 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  signed __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = MmGetNumberOfPhysicalPages(0) << 12;
  v3 = PopResizeHiberFile(v2, &v5);
  if ( v3 >= 0 && a1 )
    *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  return (unsigned int)v3;
}
