/*
 * XREFs of wcsstr @ 0x140145D70
 * Callers:
 *     BcpGetProgressMessages @ 0x140137CB8 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x140207860 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14039DC8C (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     PfSnIsHostingApplication @ 0x1404D6338 (PfSnIsHostingApplication.c)
 *     BiIsWinPEBoot @ 0x1404FC61C (BiIsWinPEBoot.c)
 *     SiGetFirmwareBootDeviceName @ 0x140506740 (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x140506C64 (SiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x1405F73EC (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 *     SdbpOpenLocalDatabaseEx @ 0x14067F280 (SdbpOpenLocalDatabaseEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140692430 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x14069DF4C (SubstringMatch.c)
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
