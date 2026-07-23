/*
 * XREFs of RtlHashUnicodeString @ 0x1404E21B0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x1400860C4 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14010AE00 (KsepCacheHwIdHash.c)
 *     sub_1404D90CC @ 0x1404D90CC (sub_1404D90CC.c)
 *     PiDmInitializeComparisonObject @ 0x1404E20C8 (PiDmInitializeComparisonObject.c)
 *     PnpGenerateDeviceIdsHash @ 0x14050D908 (PnpGenerateDeviceIdsHash.c)
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 *     KsepCacheDeviceHash @ 0x140547684 (KsepCacheDeviceHash.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406327B8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14066DB44 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
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
