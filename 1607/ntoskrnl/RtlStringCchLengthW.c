/*
 * XREFs of RtlStringCchLengthW @ 0x1400C4760
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x1403EF550 (PiUEventProcessBroadcastNotifications.c)
 *     PnpConcatPWSTR @ 0x140487108 (PnpConcatPWSTR.c)
 *     PiUEventCopyEventData @ 0x14048CC98 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     PnpGetMultiSzLength @ 0x1404A2DC0 (PnpGetMultiSzLength.c)
 *     PnpValidateMultiSz @ 0x1404A2F14 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     WmipMangleInstanceName @ 0x140537EB8 (WmipMangleInstanceName.c)
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     SepParseElamCertResources @ 0x14054F6C8 (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1405786C0 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BB3C (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x140684EF4 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x1406892F4 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x14068960C (RtlpNameprepAsciiWorker.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
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
