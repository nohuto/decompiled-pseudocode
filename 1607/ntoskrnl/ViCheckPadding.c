/*
 * XREFs of ViCheckPadding @ 0x140708D3C
 * Callers:
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViSpecialFreeCommonBuffer @ 0x14070A554 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViCheckTag @ 0x140708EF0 (ViCheckTag.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViHasBufferBeenTouched @ 0x140709C34 (ViHasBufferBeenTouched.c)
 */

void __fastcall ViCheckPadding(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  int v4; // ebp
  __int64 v6; // rax
  int v7; // ebx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  ULONG_PTR HasBufferBeenTouched; // r14
  ULONG_PTR v12; // rbx

  if ( a4 != a2 )
  {
    v4 = a3;
    if ( a4 )
    {
      v8 = a3 + a4;
      v9 = a1 + a2 - v8;
      v10 = a3 - a1;
      if ( a3 - a1 >= 8 )
        v10 -= 8LL;
      if ( v9 >= 8 )
      {
        v9 -= 8LL;
        v8 += 8LL;
      }
      ViCheckTag(a3, a4);
      HasBufferBeenTouched = ViHasBufferBeenTouched(a1, v10);
      if ( HasBufferBeenTouched )
      {
        ViHalPreprocessOptions(
          byte_1402F9960,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        VfReportIssueWithOptions(230, 15, 4, v4, HasBufferBeenTouched, byte_1402F9960);
      }
      v12 = ViHasBufferBeenTouched(v8, v9);
      if ( v12 )
      {
        ViHalPreprocessOptions(
          byte_1402F9958,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        VfReportIssueWithOptions(230, 15, 5, v4, v12, byte_1402F9958);
      }
    }
    else
    {
      v6 = ViHasBufferBeenTouched(a1, a2);
      v7 = v6;
      if ( v6 )
      {
        ViHalPreprocessOptions(
          &dword_1402F995C,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        VfReportIssueWithOptions(230, 15, 3, v7, 0LL, &dword_1402F995C);
      }
    }
  }
}
