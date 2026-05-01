/*
 * XREFs of RmpRmSidInitialize @ 0x180004D44
 * Callers:
 *     RmpValidateAndCaptureUserSid @ 0x180002244 (RmpValidateAndCaptureUserSid.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x180011100 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180013DF0 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     PsmMemoryLimitNotification2 @ 0x18002F790 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void *__fastcall RmpRmSidInitialize(void *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  return memcpy_0(a1, Src, v4);
}
