/*
 * XREFs of ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800763A0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180039CDC (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

char __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(void **a1, unsigned __int64 a2)
{
  char v2; // bl
  void *v5; // rax
  size_t Size; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  Size = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, a2, 4uLL) < 0 )
    return 0;
  v5 = realloc(*a1, Size);
  if ( v5 )
  {
    *a1 = v5;
    return 1;
  }
  return v2;
}
