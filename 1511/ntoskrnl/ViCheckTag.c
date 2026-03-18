/*
 * XREFs of ViCheckTag @ 0x1406BCE4C
 * Callers:
 *     ViCheckAdapterBuffers @ 0x1406BCBA4 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x1406BCC98 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x1406BD554 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(ULONG_PTR a1, size_t Size, int a3, char a4)
{
  int v4; // esi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = Size;
  v6 = (unsigned int)Size;
  v9 = (void *)a1;
  v10 = (const void *)((unsigned int)Size + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_1402D4000,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(230, 15, 1, v4, a1, byte_1402D4000);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_1402D3FF8,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(230, 15, 2, v4, a1, byte_1402D3FF8);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}
