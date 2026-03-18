/*
 * XREFs of RtlStringCbLengthW @ 0x140025FE8
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14026962C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x14043DFF4 (_PnpRegQueryValueIndirect.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     _PnpValidatePropertyData @ 0x1404D90AC (_PnpValidatePropertyData.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140546BD0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     SepSetSystemPaths @ 0x1405BC640 (SepSetSystemPaths.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1406B4998 (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1406C8300 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidRelativeAttribute @ 0x1406C88B8 (RtlpValidRelativeAttribute.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x14071F940 (RtlpMuiRegConfigNodePopulate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  STRSAFE_PCNZWCH v5; // r9
  size_t v6; // rax
  size_t v7; // r8
  NTSTATUS v8; // ecx

  v3 = cbMax >> 1;
  v5 = psz;
  v6 = 0LL;
  if ( !psz )
    goto LABEL_12;
  if ( v3 > 0x7FFFFFFF )
    goto LABEL_12;
  v7 = v3;
  v8 = 0;
  if ( !v3 )
    goto LABEL_12;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v6 = v3 - v7;
  else
LABEL_12:
    v8 = -1073741811;
  if ( pcbLength )
  {
    if ( v8 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v6;
  }
  return v8;
}
