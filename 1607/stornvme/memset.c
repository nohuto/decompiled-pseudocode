/*
 * XREFs of memset @ 0x1C0003180
 * Callers:
 *     DriverEntry @ 0x1C0004650 (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0004828 (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     AdminQueuesFreeResources @ 0x1C000520C (AdminQueuesFreeResources.c)
 *     InitializePerfOptions @ 0x1C0005ABC (InitializePerfOptions.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     FormInquiryStandardData @ 0x1C00093DC (FormInquiryStandardData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000A784 (NVMeGetRichDeviceDescription.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B2AC (QueryProtocolInfoIdentifyData.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 *     SglToPrp @ 0x1C000C614 (SglToPrp.c)
 *     LocalCommandReuse @ 0x1C000C838 (LocalCommandReuse.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeConfigAsyncEvent @ 0x1C000CA58 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C000CB24 (NVMeControllerIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000D06C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C000D18C (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C000D2C0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C000D384 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C000D4B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000D574 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 *     NVMeSetArbitration @ 0x1C000DE10 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000DF1C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E190 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C000E290 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C000E534 (NVMeSetPowerState.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000323D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
