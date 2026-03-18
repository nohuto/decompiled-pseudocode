/*
 * XREFs of RtlStringCchLengthW @ 0x140008670
 * Callers:
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     PiUEventCopyEventData @ 0x14041689C (PiUEventCopyEventData.c)
 *     PnpGetMultiSzLength @ 0x140416AD8 (PnpGetMultiSzLength.c)
 *     PnpValidateMultiSz @ 0x140416B48 (PnpValidateMultiSz.c)
 *     PnpConcatPWSTR @ 0x140416C20 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     WmipMangleInstanceName @ 0x14057BE58 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x140590958 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1405BA370 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14066A574 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x1406C8650 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x1406CCBA8 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406CCEB4 (RtlpNameprepAsciiWorker.c)
 *     AslStringDuplicate @ 0x1407050E0 (AslStringDuplicate.c)
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
