/*
 * XREFs of RtlpCreateHeapEncoding @ 0x14012EECC
 * Callers:
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

__int64 __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) |= 0x10u;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= ExGenRandom(1);
    result = ExGenRandom(1);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
