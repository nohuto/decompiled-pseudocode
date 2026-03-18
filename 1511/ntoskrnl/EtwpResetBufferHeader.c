/*
 * XREFs of EtwpResetBufferHeader @ 0x1400F4998
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404CA100 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404CAC9C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405498AC (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
}
