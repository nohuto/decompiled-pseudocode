/*
 * XREFs of wcsncmp @ 0x14014F040
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1402115CC (LdrpCompareResourceNamesWithValidation.c)
 *     EtwpApplyPredicate @ 0x14022BE8C (EtwpApplyPredicate.c)
 *     LdrpResCompareResourceNames @ 0x1404A614C (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14050B05C (PfSnFindPrefetchVolumeInfoInList.c)
 *     WmipFindISinGEbyName @ 0x140537FAC (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066D93C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x14066E27C (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x14066E4F8 (PopWakeSourceIsParent.c)
 *     AslPathClean @ 0x1406C5EA4 (AslPathClean.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
