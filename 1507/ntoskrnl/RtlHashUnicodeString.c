/*
 * XREFs of RtlHashUnicodeString @ 0x140439AA0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140008200 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x1401297E4 (KsepCacheHwIdHash.c)
 *     PiDmInitializeComparisonObject @ 0x1404399D0 (PiDmInitializeComparisonObject.c)
 *     sub_1404DB9DC @ 0x1404DB9DC (sub_1404DB9DC.c)
 *     PipFindDeviceOverrideEntry @ 0x140540FE4 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054DE28 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x14058322C (KsepCacheDeviceHash.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406827A0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406B4D44 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406B4E78 (PopPluginQuerySocSubsystemMetadata.c)
 *     VerifierRtlHashUnicodeString @ 0x140752D14 (VerifierRtlHashUnicodeString.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // eax
  wchar_t *Buffer; // r10
  int v7; // r9d
  unsigned __int16 v8; // r11
  int v9; // ecx
  int v11; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( CaseInSensitive )
  {
    for ( ; v7; v4 = v9 + 65599 * v4 )
    {
      v8 = *Buffer++;
      --v7;
      if ( v8 >= 0x61u )
      {
        if ( v8 > 0x7Au )
          v9 = (unsigned __int16)(v8
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]]);
        else
          v9 = v8 - 32;
      }
      else
      {
        v9 = v8;
      }
    }
  }
  else
  {
    for ( ; v7; --v7 )
    {
      v11 = *Buffer++;
      v4 = v11 + 65599 * v4;
    }
  }
  *HashValue = v4;
  return 0;
}
