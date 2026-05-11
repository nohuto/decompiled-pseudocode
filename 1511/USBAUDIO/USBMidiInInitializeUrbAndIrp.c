/*
 * XREFs of USBMidiInInitializeUrbAndIrp @ 0x1C0020D7C
 * Callers:
 *     USBMIDIInReQueueUrb @ 0x1C0005970 (USBMIDIInReQueueUrb.c)
 *     USBMidiInPipePrimer @ 0x1C0020E64 (USBMidiInPipePrimer.c)
 * Callees:
 *     memset @ 0x1C0008000 (memset.c)
 */

struct _IO_STACK_LOCATION *__fastcall USBMidiInInitializeUrbAndIrp(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // rsi
  unsigned __int16 *v4; // rdi
  IRP *v5; // rbp
  __int16 v6; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 **)(a1 + 56);
  v5 = *(IRP **)(a1 + 24);
  memset(v1, 0, 0x80uLL);
  *v1 = 589952;
  *((_QWORD *)v1 + 3) = *((_QWORD *)v4 + 1);
  v1[8] = 3;
  *((_QWORD *)v1 + 5) = *(_QWORD *)(a1 + 40);
  v1[9] = *v4;
  memset(*(void **)(a1 + 40), 0, *v4);
  v6 = *(char *)(*(_QWORD *)(v3 + 40) + 76LL);
  IoInitializeIrp(v5, 72 * v6 + 208, v6);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 32);
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  result = v5->Tail.Overlay.CurrentStackLocation;
  result[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBMidiInCompleteCallback;
  result[-1].Context = (PVOID)a1;
  result[-1].Control = -32;
  return result;
}
