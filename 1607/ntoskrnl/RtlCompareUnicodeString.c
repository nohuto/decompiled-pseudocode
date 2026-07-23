/*
 * XREFs of RtlCompareUnicodeString @ 0x1404E27E0
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x1400C1DE4 (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x140131DC4 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142990 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x1401D0FC8 (IopEliminateBogusConflict.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047400C (SepValidateReferencedLowBoxHandles.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404B6D6C (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1404C681C (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1404CE278 (PiSwBusRelationsCompareInstancePath.c)
 *     PnpCompareInstancePath @ 0x1404E27A8 (PnpCompareInstancePath.c)
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140547A34 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140581650 (KsepCacheDeviceEqual.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CEC0 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140690AA4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1406956E8 (SepRmGlobalSaclFind.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpCovIsModulePresent @ 0x1406B6FB8 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     KiHwPolicyFindDriverImage @ 0x1407B2D44 (KiHwPolicyFindDriverImage.c)
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
