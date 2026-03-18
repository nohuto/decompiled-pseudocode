/*
 * XREFs of RtlStringCchLengthW @ 0x140090A3C
 * Callers:
 *     PiUEventCopyEventData @ 0x1403BF98C (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PnpValidateMultiSz @ 0x14045FB48 (PnpValidateMultiSz.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1404E1A5C (PiUEventProcessBroadcastNotifications.c)
 *     PnpGetMultiSzLength @ 0x1404E49AC (PnpGetMultiSzLength.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 *     WmipMangleInstanceName @ 0x1405022CC (WmipMangleInstanceName.c)
 *     SepParseElamCertResources @ 0x140521C94 (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140544114 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1405F18E4 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x1406455C4 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x140649B24 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140649E30 (RtlpNameprepAsciiWorker.c)
 *     AslStringDuplicate @ 0x1406802AC (AslStringDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    v3 = cchMax;
    result = 0;
    if ( !cchMax )
      goto LABEL_12;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
LABEL_12:
      result = -1073741811;
    if ( pcchLength )
    {
      if ( result < 0 )
        *pcchLength = 0LL;
      else
        *pcchLength = cchMax - v3;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
