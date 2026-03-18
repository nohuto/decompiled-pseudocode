/*
 * XREFs of PopEnlargeHiberFile @ 0x14056A6FC
 * Callers:
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
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
