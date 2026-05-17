/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x180013B94
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x180012958 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x1800847CC (RtlpSetProcMergedLangList.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A20 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800E58F0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
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
