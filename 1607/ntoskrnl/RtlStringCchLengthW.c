/*
 * XREFs of RtlStringCchLengthW @ 0x1400C2600
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCopyEventData @ 0x14048D2AC (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14048DCAC (PiUEventHandleRegistration.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
 *     PnpGetMultiSzLength @ 0x14051B1C0 (PnpGetMultiSzLength.c)
 *     PnpValidateMultiSz @ 0x14051B314 (PnpValidateMultiSz.c)
 *     WmipMangleInstanceName @ 0x1405383F8 (WmipMangleInstanceName.c)
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     SepParseElamCertResources @ 0x14054FC08 (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140578C00 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x140684FD8 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x1406893D8 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406896F0 (RtlpNameprepAsciiWorker.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
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
