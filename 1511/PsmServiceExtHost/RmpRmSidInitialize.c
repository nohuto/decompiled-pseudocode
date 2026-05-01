/*
 * XREFs of RmpRmSidInitialize @ 0x18002015C
 * Callers:
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180002A70 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     RmpValidateAndCaptureUserSid @ 0x180002AF4 (RmpValidateAndCaptureUserSid.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800124E0 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     PsmMemoryLimitNotification2 @ 0x180036F60 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

void *__fastcall RmpRmSidInitialize(void *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  return memcpy_0(a1, Src, v4);
}
