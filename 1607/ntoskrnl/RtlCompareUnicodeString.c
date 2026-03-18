/*
 * XREFs of RtlCompareUnicodeString @ 0x1404FF850
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x1400C3F44 (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x140131854 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x1401D119C (IopEliminateBogusConflict.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140234B30 (AuthzBasepCompareUnicodeStringOperands.c)
 *     CmpFindNameInListCellWithStatus @ 0x140402BC0 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckRegistry2 @ 0x14043EF70 (CmpCheckRegistry2.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404D32CC (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x1404E3B64 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1404EC1F0 (PiSwBusRelationsCompareInstancePath.c)
 *     PnpCompareInstancePath @ 0x1404FF818 (PnpCompareInstancePath.c)
 *     CmpDoCompareKeyName @ 0x140512350 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x1405126A0 (CmpCompareInIndex.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1405474F4 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1405811A4 (KsepCacheDeviceEqual.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CDDC (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406909C0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140695604 (SepRmGlobalSaclFind.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpCovIsModulePresent @ 0x1406B6E80 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B6F4C (ExpCovQueryHypervisorInformation.c)
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
