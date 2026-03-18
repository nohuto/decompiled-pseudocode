/*
 * XREFs of EtwpResetBufferHeader @ 0x1400857F4
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1400ED600 (EtwpDequeueFreeBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404912D0 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14049355C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14057EACC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1406A9E8C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( (*(_WORD *)(a1 + 52) & 0x100) != 0 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
