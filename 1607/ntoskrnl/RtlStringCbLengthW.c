/*
 * XREFs of RtlStringCbLengthW @ 0x14009ED7C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     AslpFileVerBlockGetValueOffset @ 0x140233B9C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140233C00 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     SepSetSystemPaths @ 0x14057A068 (SepSetSystemPaths.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14066D6B4 (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140684BA4 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidRelativeAttribute @ 0x1406851F4 (RtlpValidRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x1406C92A4 (AslpFileVerStringBlockGetValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF418 (LocalGetStringForRelativeAttribute.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x1406E6B70 (RtlpMuiRegConfigNodePopulate.c)
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
