/*
 * XREFs of RtlStringCbLengthW @ 0x140103D90
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14021994C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     SepSetSystemPaths @ 0x140545620 (SepSetSystemPaths.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1406352A4 (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140645274 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidRelativeAttribute @ 0x1406458C4 (RtlpValidRelativeAttribute.c)
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x14069F724 (RtlpMuiRegConfigNodePopulate.c)
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
