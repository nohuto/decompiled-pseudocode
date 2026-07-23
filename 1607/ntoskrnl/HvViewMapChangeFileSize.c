/*
 * XREFs of HvViewMapChangeFileSize @ 0x14060FB84
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6648 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401B69A0 (HvpViewMapReleaseLockExclusive.c)
 *     HvpViewMapGrowFile @ 0x140610018 (HvpViewMapGrowFile.c)
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
