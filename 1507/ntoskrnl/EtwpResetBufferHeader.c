/*
 * XREFs of EtwpResetBufferHeader @ 0x1400754B4
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140063388 (EtwpDequeueFreeBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404ACC34 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404ACD84 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405C13D0 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
