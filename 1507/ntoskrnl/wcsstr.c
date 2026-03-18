/*
 * XREFs of wcsstr @ 0x140173DA0
 * Callers:
 *     BcpGetProgressMessages @ 0x1401664BC (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140256ABC (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x1403F0168 (PopGetBitlockerKeyLocation.c)
 *     PfSnIsHostingApplication @ 0x140444A10 (PfSnIsHostingApplication.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x14056F0BC (BiIsWinPEBoot.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057FA0C (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x14057FF3C (SiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x1406711E4 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1407040D4 (SdbpOpenLocalDatabaseEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140711F48 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x14071E5A8 (SubstringMatch.c)
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
