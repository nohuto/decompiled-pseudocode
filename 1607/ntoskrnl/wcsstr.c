/*
 * XREFs of wcsstr @ 0x14014F14C
 * Callers:
 *     BcpGetProgressMessages @ 0x140141250 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14021FE7C (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PfSnIsHostingApplication @ 0x1403E6324 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     BiIsWinPEBoot @ 0x14053CF20 (BiIsWinPEBoot.c)
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x1405424B8 (SiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x1406210F4 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1406C421C (SdbpOpenLocalDatabaseEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x1406D6BC8 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x1406E4B08 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  wchar_t v5; // ax
  signed __int64 i; // r9
  const wchar_t *v7; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2LL )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( *(const wchar_t *)((char *)v7 + i) == *v7 )
    {
      if ( *(const wchar_t *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
