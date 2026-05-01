/*
 * XREFs of RmpRmSidInitialize @ 0x180017BDC
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18000E1B8 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180017860 (PsmRetrieveHostMemoryLimit.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     RmpSystemGetProcessPsmInfo @ 0x180018A18 (RmpSystemGetProcessPsmInfo.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void *__fastcall RmpRmSidInitialize(void *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  return memcpy_0(a1, Src, v4);
}
