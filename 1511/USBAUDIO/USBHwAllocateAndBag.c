/*
 * XREFs of USBHwAllocateAndBag @ 0x1C001B374
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001B9F8 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001BE54 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001CAFC (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C001D610 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001DF44 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C001ECA8 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C001FB00 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0020050 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C0020E64 (USBMidiInPipePrimer.c)
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
