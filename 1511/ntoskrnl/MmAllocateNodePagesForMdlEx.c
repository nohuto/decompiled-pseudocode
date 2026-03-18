/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1400BC6B8
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1400BC654 (MmAllocatePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x1401AEED8 (HvlpDepositPages.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1406CF8D0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7)
{
  int v7; // ebx
  int v8; // r11d

  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v7 = a5 == -1 || a5 > 2 ? 3 : MiPlatformCacheAttributes[a5];
  v8 = a7;
  if ( (a7 & 0xFFFFFC00) != 0 )
    return 0LL;
  if ( (a7 & 0x20) != 0 )
  {
    v8 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v8 = a7 | 0x14;
    }
  }
  if ( (v8 & 0x100) == 0 || (v8 & 4) == 0 && !KeGetCurrentIrql() )
    return MiAllocatePagesForMdl((unsigned int)MiSystemPartition, a1, a2, a3, a4, v7, a6, v8);
  return 0LL;
}
