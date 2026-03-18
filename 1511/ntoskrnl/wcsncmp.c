/*
 * XREFs of wcsncmp @ 0x140145C64
 * Callers:
 *     sub_140212384 @ 0x140212384 (sub_140212384.c)
 *     LdrpResCompareResourceNames @ 0x140465AF8 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNames_U @ 0x1404A20DC (LdrpCompareResourceNames_U.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404DAE78 (PfSnFindPrefetchVolumeInfoInList.c)
 *     WmipFindISinGEbyName @ 0x1405023C0 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x140536240 (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140634184 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14063552C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x140635ED4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x140636150 (PopWakeSourceIsParent.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
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
