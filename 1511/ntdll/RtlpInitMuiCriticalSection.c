/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18003D4E4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18003F1A4 (RtlpSetProcMergedLangList.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180084820 (RtlSetProcessPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180084C2C (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800DC6C0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
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
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
  InitRegistryInfoCritSect = 2;
  return result;
}
