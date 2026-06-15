/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140018F94
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140002064 (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140002358 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPi.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140004834 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
