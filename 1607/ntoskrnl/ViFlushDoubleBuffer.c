/*
 * XREFs of ViFlushDoubleBuffer @ 0x1407092A8
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140706E98 (VfFlushAdapterBuffers.c)
 *     VfPutScatterGatherList @ 0x140708310 (VfPutScatterGatherList.c)
 * Callees:
 *     MmMapLockedPages @ 0x1401E4010 (MmMapLockedPages.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViCopyBackModifiedBuffer @ 0x140709054 (ViCopyBackModifiedBuffer.c)
 *     ViFindMappedRegisterInFile @ 0x140709278 (ViFindMappedRegisterInFile.c)
 *     ViFreeMapRegistersToFile @ 0x1407095A8 (ViFreeMapRegistersToFile.c)
 *     ViGetMdlBufferSa @ 0x140709814 (ViGetMdlBufferSa.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViFlushDoubleBuffer(_QWORD *a1, ULONG_PTR a2, int a3, unsigned int a4, char a5)
{
  ULONG_PTR v6; // rbx
  __int64 MdlBufferSa; // rax
  __int64 v10; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  char *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  MdlBufferSa = ViGetMdlBufferSa(a2);
  v10 = MdlBufferSa;
  if ( !MdlBufferSa )
    return 0LL;
  if ( !ViFindMappedRegisterInFile((__int64)a1, MdlBufferSa, &v18) )
  {
    ViHalPreprocessOptions(byte_1402F9978, "Cannot flush buffers that aren't mapped (Addr %p).", (const void *)0x16);
    VfReportIssueWithOptions(230, 22, v10, (int)a1, 0LL, byte_1402F9978);
    return 0LL;
  }
  v12 = (v10 & 0xFFF) + (unsigned int)((_DWORD)v18 << 12);
  v13 = a1[7];
  v14 = (char *)(v12 + a1[8]);
  v18 = v12;
  if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
    v15 = *(_QWORD *)(v13 + 24);
  else
    LODWORD(v15) = (unsigned int)MmMapLockedPages((PMDL)v13, 0);
  v16 = v15 + *(_DWORD *)(a1[7] + 40LL) - (_DWORD)v14;
  if ( (unsigned int)v6 > v16 )
  {
    ViHalPreprocessOptions(
      byte_1402F9974,
      "FLUSH: Can only flush %x bytes to end of map register file (%x attempted)",
      0x10000000,
      1);
    VfReportIssueWithOptions(230, 0, 1, v16, v6, byte_1402F9974);
    v12 = v18;
    LODWORD(v6) = v16;
  }
  if ( !a5 )
  {
    v17 = a1[9];
    if ( v17 )
      ViCopyBackModifiedBuffer(a2, a3, v14, (char *)(v17 + v12), (unsigned int)v6);
  }
  if ( !(unsigned int)ViFreeMapRegistersToFile(a1, v10, (unsigned int)v6) )
    VfUtilDbgPrint("Flushing too many map registers\n");
  return 1LL;
}
