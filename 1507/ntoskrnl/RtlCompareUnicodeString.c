/*
 * XREFs of RtlCompareUnicodeString @ 0x14043A4D0
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x140017FCC (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x140159CFC (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x1401FD724 (IopEliminateBogusConflict.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     CmpFindNameInListWithStatus @ 0x140429D80 (CmpFindNameInListWithStatus.c)
 *     PnpCompareInstancePath @ 0x140439F70 (PnpCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpCheckLexicographicalOrder @ 0x1404AE400 (CmpCheckLexicographicalOrder.c)
 *     CmpFindValueByNameFromCache @ 0x1404CABB0 (CmpFindValueByNameFromCache.c)
 *     CmpDoCompareKeyName @ 0x1404CB110 (CmpDoCompareKeyName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140557FC4 (PiSwBusRelationsCompareInstancePath.c)
 *     PiCompareDDBCacheEntries @ 0x14057E758 (PiCompareDDBCacheEntries.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1405C7258 (KsepCacheDeviceEqual.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1406962B0 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406D3E38 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpCovIsModulePresent @ 0x1406F8BB8 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 *     VerifierRtlCompareUnicodeString @ 0x140752C18 (VerifierRtlCompareUnicodeString.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     KiHwPolicyFindDriverImage @ 0x1407DB878 (KiHwPolicyFindDriverImage.c)
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
