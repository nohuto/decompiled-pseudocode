/*
 * XREFs of RtlInterlockedClearBitRunEx @ 0x140112F08
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedClearBitRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 *v4; // r10
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // eax
  unsigned __int64 v8; // rcx

  v4 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
  v5 = a2 & 0x1F;
  result = v5 + a3;
  if ( v5 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v4 = 0;
      return result;
    }
    v7 = ((1 << a3) - 1) << v5;
    goto LABEL_4;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    _InterlockedAnd(v4, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v5));
    result = 32 - (unsigned int)(a2 & 0x1F);
    a3 -= result;
    ++v4;
  }
  if ( a3 >= 0x20 )
  {
    v8 = a3 >> 5;
    result = -32LL * (a3 >> 5);
    a3 += result;
    do
    {
      *v4++ = 0;
      --v8;
    }
    while ( v8 );
  }
  if ( a3 )
  {
    v7 = (1 << a3) - 1;
LABEL_4:
    result = (unsigned int)~v7;
    _InterlockedAnd(v4, result);
  }
  return result;
}
