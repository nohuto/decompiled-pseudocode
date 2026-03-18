/*
 * XREFs of ViCheckTag @ 0x14073DA54
 * Callers:
 *     ViCheckAdapterBuffers @ 0x14073D760 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x14073D8A0 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x14073E19C (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
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
        byte_140323130,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(230, 15, 1, v4, a1, byte_140323130);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140323124,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(230, 15, 2, v4, a1, byte_140323124);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}
