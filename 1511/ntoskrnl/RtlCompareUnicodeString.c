/*
 * XREFs of RtlCompareUnicodeString @ 0x14043D980
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x1400CD528 (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x1401264C4 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401302E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x1401C1B8C (IopEliminateBogusConflict.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14021A86C (AuthzBasepCompareUnicodeStringOperands.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 *     CmpFindNameInListWithStatus @ 0x1403F40F0 (CmpFindNameInListWithStatus.c)
 *     CmpFindValueByNameFromCache @ 0x1403FBA30 (CmpFindValueByNameFromCache.c)
 *     CmpDoCompareKeyName @ 0x1403FBB80 (CmpDoCompareKeyName.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     PnpCompareInstancePath @ 0x14043D94C (PnpCompareInstancePath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404AE068 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1404B9FC4 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1404C2CEC (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404C64C4 (ExCovReadjustUnloadedModuleEntry.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x14054F4AC (KsepCacheDeviceEqual.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1406180BC (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140651738 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140655EC0 (SepRmGlobalSaclFind.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpCovIsModulePresent @ 0x140674540 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x14067460C (ExpCovQueryHypervisorInformation.c)
 *     VerifierRtlCompareUnicodeString @ 0x1406CF14C (VerifierRtlCompareUnicodeString.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140767FA4 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  wchar_t *v4; // r11
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  wchar_t *v8; // r10
  signed __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  signed __int64 v13; // r11
  int v14; // ecx
  int v15; // edx

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = (unsigned __int64)String2->Length >> 1;
  v7 = v6;
  if ( v5 <= v6 )
    v7 = v5;
  v8 = &Buffer[v7];
  if ( CaseInSensitive )
  {
    if ( Buffer < v8 )
    {
      v9 = (char *)v4 - (char *)Buffer;
      while ( 1 )
      {
        v10 = *Buffer;
        v11 = *(wchar_t *)((char *)Buffer + v9);
        if ( v10 != v11 )
        {
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              v10 = (unsigned __int16)(v10
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v10)]]]);
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v11)]]]);
            else
              v11 -= 32;
          }
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v8 )
          return v5 - v6;
      }
      return v10 - v11;
    }
    return v5 - v6;
  }
  if ( Buffer >= v8 )
    return v5 - v6;
  v13 = (char *)v4 - (char *)Buffer;
  while ( 1 )
  {
    v14 = *Buffer;
    v15 = *(wchar_t *)((char *)Buffer + v13);
    if ( v14 != v15 )
      break;
    if ( ++Buffer >= v8 )
      return v5 - v6;
  }
  return v14 - v15;
}
