/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400184A8
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x14000135C (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140001620 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPi.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x1400019F4 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
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
