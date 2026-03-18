/*
 * XREFs of RtlHashUnicodeString @ 0x14043D630
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x1400EFFE0 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14010779C (KsepCacheHwIdHash.c)
 *     PiDmInitializeComparisonObject @ 0x14043D548 (PiDmInitializeComparisonObject.c)
 *     sub_140459E40 @ 0x140459E40 (sub_140459E40.c)
 *     PipFindDeviceOverrideEntry @ 0x1404F0914 (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404F0B04 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x14050BE4C (KsepCacheDeviceHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140514A28 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140634184 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140635650 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140635784 (PopPluginQuerySocSubsystemMetadata.c)
 *     VerifierRtlHashUnicodeString @ 0x1406CF248 (VerifierRtlHashUnicodeString.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
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
