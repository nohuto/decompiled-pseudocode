/*
 * XREFs of HvViewMapChangeFileSize @ 0x1405EB02C
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401AAC78 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401AAFD0 (HvpViewMapReleaseLockExclusive.c)
 *     HvpViewMapGrowFile @ 0x1405EB4C0 (HvpViewMapGrowFile.c)
 */

__int64 __fastcall HvViewMapChangeFileSize(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // edi

  HvpViewMapAcquireLockExclusive((__int64)a1);
  if ( *a1 >= a3 )
    v6 = 0;
  else
    v6 = HvpViewMapGrowFile(a1, a2, a3);
  HvpViewMapReleaseLockExclusive((__int64)a1);
  return v6;
}
