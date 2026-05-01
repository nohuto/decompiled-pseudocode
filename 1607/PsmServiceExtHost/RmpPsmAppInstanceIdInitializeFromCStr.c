/*
 * XREFs of RmpPsmAppInstanceIdInitializeFromCStr @ 0x180018C9C
 * Callers:
 *     ?RemoveApplicationState@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C5EC (-RemoveApplicationState@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C69C (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     RmpSystemGetProcessPsmInfo @ 0x180018A18 (RmpSystemGetProcessPsmInfo.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18002F144 (RmpActivityHostFindPsmResourceSets.c)
 * Callees:
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpPsmAppInstanceIdInitializeFromCStr(
        wchar_t *Destination,
        wchar_t *Source,
        void *Src,
        int a4,
        int a5,
        __int64 a6)
{
  ULONG v10; // eax
  __int64 result; // rax

  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(Destination + 232, 0, 0x44uLL);
  v10 = RtlLengthSid(Src);
  memcpy_0(Destination + 232, Src, v10);
  *((_DWORD *)Destination + 134) = a5;
  result = a6;
  *((_DWORD *)Destination + 133) = a4;
  *((_QWORD *)Destination + 68) = a6;
  return result;
}
