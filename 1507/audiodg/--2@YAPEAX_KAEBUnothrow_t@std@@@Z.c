/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140019054
 * Callers:
 *     ?CreateStreamInstance@CStreamInstanceNew@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140013F90 (-CreateStreamInstance@CStreamInstanceNew@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAV.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x14001519C (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140016F80 (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
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
