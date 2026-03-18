/*
 * XREFs of RtlPrefixUnicodeString @ 0x1404FDFD0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1400805F4 (SepPotentialGlobalTableAttribute.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F4C50 (_CmIsRootEnumeratedDevice.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x14045CC48 (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x14045F818 (ObCheckRefTraceProcess.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140476898 (AuthzBasepIsCompareRelevantAttribute.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404B7E50 (SepAdtAuditObjectAccessWithContext.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404D32CC (RtlpProcessIFEOKeyFilter.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404F77A4 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404FC520 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140528E90 (_CmGetDeviceInterfacePathFormat.c)
 *     ObpIsUnsecureName @ 0x1405445C8 (ObpIsUnsecureName.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     PopBatteryDeviceState @ 0x14066EC9C (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406948B8 (SepAppContainerAceProtectionApplies.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // r11
  wchar_t *v6; // r10
  signed __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  signed __int64 v11; // r11

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v6 = (wchar_t *)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = (char *)v5 - (char *)Buffer;
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = *(wchar_t *)((char *)Buffer + v7);
          if ( v8 != v9 )
          {
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                                                + 2
                                                                                                * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v8 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v8)]]]);
              else
                v8 -= 32;
            }
            if ( v9 >= 0x61 )
            {
              if ( v9 > 0x7A )
                v9 = (unsigned __int16)(v9
                                      + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v9 & 0xF)
                                                                                                + 2
                                                                                                * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v9 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v9)]]]);
              else
                v9 -= 32;
            }
            if ( v8 != v9 )
              break;
          }
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v11 = (char *)v5 - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v11) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
