/*
 * XREFs of wcsncmp @ 0x14014F600
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1402113F8 (LdrpCompareResourceNamesWithValidation.c)
 *     EtwpApplyPredicate @ 0x14022BCB8 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404EDFEC (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14051E54C (LdrpResCompareResourceNames.c)
 *     WmipFindISinGEbyName @ 0x1405384EC (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066DA20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x14066E5DC (PopWakeSourceIsParent.c)
 *     AslPathClean @ 0x1406C5FDC (AslPathClean.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
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
