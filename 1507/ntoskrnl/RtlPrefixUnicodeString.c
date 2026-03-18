/*
 * XREFs of RtlPrefixUnicodeString @ 0x1404369B0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14024FE78 (SepPotentialGlobalTableAttribute.c)
 *     ObpIsUnsecureName @ 0x1404091F4 (ObpIsUnsecureName.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14041056C (AuthzBasepIsCompareRelevantAttribute.c)
 *     _CmValidateDeviceInterfaceName @ 0x140436820 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     ObCheckRefTraceProcess @ 0x14046AC74 (ObCheckRefTraceProcess.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 *     SepIsMinTCB @ 0x14050B46C (SepIsMinTCB.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140526C38 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1405447FC (PiPnpRtlEnumeratorFilterCallback.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14055EBD4 (_CmGetDeviceInterfacePathFormat.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140687EE8 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     PopBatteryDeviceState @ 0x1406B62F4 (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406D712C (SepAppContainerAceProtectionApplies.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
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
  unsigned int v8; // r9d
  unsigned int v9; // r8d
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
