/*
 * XREFs of RtlPrefixUnicodeString @ 0x14043C2B0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14000507C (SepPotentialGlobalTableAttribute.c)
 *     ObpIsUnsecureName @ 0x1403B4E10 (ObpIsUnsecureName.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     ObCheckRefTraceProcess @ 0x1403E3858 (ObCheckRefTraceProcess.c)
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     SepIsMinTCB @ 0x14044880C (SepIsMinTCB.c)
 *     _CmIsRootEnumeratedDevice @ 0x140458E9C (_CmIsRootEnumeratedDevice.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404AE068 (RtlpProcessIFEOKeyFilter.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404B00D8 (PiPnpRtlEnumeratorFilterCallback.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1404C2944 (AuthzBasepIsCompareRelevantAttribute.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DD2D8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DE228 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1404E6310 (_CmGetDeviceInterfacePathFormat.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PopBatteryDeviceState @ 0x1406368C0 (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x140655280 (SepAppContainerAceProtectionApplies.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406930F8 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140694D24 (_CmDeleteDeviceContainerRegKeyWorker.c)
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
