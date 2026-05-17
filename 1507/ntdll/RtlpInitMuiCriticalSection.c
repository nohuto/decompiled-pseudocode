/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18001CD58
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800476E4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006AFD0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpSetProcMergedLangList @ 0x18007458C (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800D47A0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = (unsigned int)InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)InitRegistryInfoCritSect;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&RegistryInfoCritSect, 0, 0);
  InitRegistryInfoCritSect = 2;
  return result;
}
