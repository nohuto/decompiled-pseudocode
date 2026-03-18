/*
 * XREFs of wcsncmp @ 0x140173C94
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x140246420 (LdrpCompareResourceNamesWithValidation.c)
 *     sub_140261938 @ 0x140261938 (sub_140261938.c)
 *     LdrpResCompareResourceNames @ 0x140464CD0 (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140473CFC (PfSnFindPrefetchVolumeInfoInList.c)
 *     WmipFindISinGEbyName @ 0x14057BF4C (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x1405ABD5C (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406B4C20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1406B57B8 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1406B5A34 (PopWakeSourceIsParent.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
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
