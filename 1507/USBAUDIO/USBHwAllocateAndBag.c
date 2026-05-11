/*
 * XREFs of USBHwAllocateAndBag @ 0x1C001C444
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001CAC8 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001CF20 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001DC38 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C001E970 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001F51C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C00204C0 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00213F0 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0021940 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C0022754 (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx

  v3 = KsAddItemToObjectBag(a2, *a1, ExFreePool);
  if ( v3 < 0 )
    ExFreePool(*a1);
  return (unsigned int)v3;
}
