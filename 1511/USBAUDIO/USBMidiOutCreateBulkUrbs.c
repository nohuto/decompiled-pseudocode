/*
 * XREFs of USBMidiOutCreateBulkUrbs @ 0x1C0006334
 * Callers:
 *     USBMidiOutProcessPin @ 0x1C0021980 (USBMidiOutProcessPin.c)
 * Callees:
 *     USBMidiOutAllocateRequest @ 0x1C0021410 (USBMidiOutAllocateRequest.c)
 *     USBMIDICreateEventPackets @ 0x1C002175C (USBMIDICreateEventPackets.c)
 */

NTSTATUS __fastcall USBMidiOutCreateBulkUrbs(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // rsi
  PKSSTREAM_POINTER v2; // rbx
  bool v3; // bp
  NTSTATUS result; // eax
  PVOID Context; // rdi
  ULONG Remaining; // r14d
  __int64 v7; // rdx
  KIRQL v8; // r15
  PKSGATE i; // rax
  ULONG InUsed; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  Pin = StreamPointer->Pin;
  v2 = StreamPointer;
  v3 = 0;
  result = 0;
  Context = Pin->Context;
  while ( result >= 0 )
  {
    if ( !v3 )
    {
      Remaining = v2->OffsetIn.Remaining;
      result = USBMidiOutAllocateRequest(v2);
      if ( result >= 0 )
      {
        v7 = v11;
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 36LL) = 0;
        USBMIDICreateEventPackets(v2, v7, &InUsed);
        KsStreamPointerAdvanceOffsets(v2, InUsed, 0, 0);
        if ( Remaining == InUsed )
          v2 = 0LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        _InterlockedIncrement((volatile signed __int32 *)Context + 10);
        v3 = *((_DWORD *)Context + 10) == 20;
        if ( *((_DWORD *)Context + 10) == 20 )
        {
          for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
            ;
          *((_BYTE *)Context + 36) = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v8);
        result = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 40LL), *(PIRP *)(v11 + 16));
      }
      if ( v2 )
        continue;
    }
    if ( result >= 0 )
      return 0;
    return result;
  }
  return result;
}
