/*
 * XREFs of wcsstr @ 0x14014F70C
 * Callers:
 *     BcpGetProgressMessages @ 0x1401417C0 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14021FCA8 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PfSnIsHostingApplication @ 0x1403E7954 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     BiIsWinPEBoot @ 0x14053D460 (BiIsWinPEBoot.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x1405429F8 (SiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x1406211A8 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1406C4354 (SdbpOpenLocalDatabaseEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5F9C (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x1406E4C40 (SubstringMatch.c)
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
