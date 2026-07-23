/*
 * XREFs of ViGetMdlBufferSa @ 0x140709844
 * Callers:
 *     ViCopyBackModifiedBuffer @ 0x140709084 (ViCopyBackModifiedBuffer.c)
 *     ViFlushDoubleBuffer @ 0x1407092D8 (ViFlushDoubleBuffer.c)
 *     ViSwap @ 0x14070A67C (ViSwap.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetMdlBufferSa(__int64 a1, const void *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  PVOID v6; // rcx

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)a2 < v5 + v4 || (unsigned __int64)a2 >= v4 + v5 + (unsigned __int64)*(unsigned int *)(a1 + 40) )
  {
    ViHalPreprocessOptions(byte_1402F9950, "Virtual address %p out of bounds of MDL %p", (const void *)0x1B, a2);
    VfReportIssueWithOptions(230, 27, (int)a2, a1, 0LL, byte_1402F9950);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
      v6 = *(PVOID *)(a1 + 24);
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      return (__int64)v6 + (_QWORD)a2 - *(_QWORD *)(a1 + 32) - *(unsigned int *)(a1 + 44);
    ViHalPreprocessOptions(&dword_1402F9954, "Dma MDL %p not mapped in system VA.", (const void *)0x22);
    VfReportIssueWithOptions(230, 34, a1, 0, 0LL, &dword_1402F9954);
  }
  return 0LL;
}
