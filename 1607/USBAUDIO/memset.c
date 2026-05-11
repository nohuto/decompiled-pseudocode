/*
 * XREFs of memset @ 0x1C0008380
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00015D0 (McGenControlCallbackV2.c)
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001870 (EvaluateCurrentStateFromRegistry.c)
 *     DeviceCreate @ 0x1C0001B40 (DeviceCreate.c)
 *     WmiLogEvent @ 0x1C00023FC (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0002510 (WmiLogStreamPosition.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0003800 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0003F40 (USBType1BuildIsochUrbRequest.c)
 *     USBMidiInResetEventQueues @ 0x1C00062D8 (USBMidiInResetEventQueues.c)
 *     WppTraceCallback @ 0x1C0014000 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C0014E64 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C0015430 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0015DB4 (PinBuildDescriptors.c)
 *     TopologyProcessFeatureUnit @ 0x1C0016E40 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x1C0017360 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C0018368 (TopologyBuildFilterTopology.c)
 *     BusApiBuildFunctionUnit @ 0x1C001B3B8 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C001BAD0 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C001C998 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001CCAC (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001CF68 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseMixerUnit @ 0x1C001E9E0 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C001EE60 (USBParseFeatureUnit.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0020520 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0021460 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C00215A0 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C0021E60 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C00226EC (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C0022DA0 (USBMidiOutAllocateRequest.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000843D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
