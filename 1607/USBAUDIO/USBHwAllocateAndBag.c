/*
 * XREFs of USBHwAllocateAndBag @ 0x1C001C474
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001CB00 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001CF68 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001DCA0 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C001E65C (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C001E9E0 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001F58C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0020520 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0021460 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C00219B0 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C00227D0 (USBMidiInPipePrimer.c)
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
