/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1400F49B0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404CA100 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404CAC9C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405498AC (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  result = *a1;
  *((_WORD *)a2 + 21) = result;
  if ( !(_WORD)result )
  {
    result = 0xFFFFLL;
    *((_WORD *)a2 + 21) = -1;
  }
  return result;
}
