/*
 * XREFs of RtlpHpVsChunkCompare @ 0x18001D390
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x18006E5F8 (RtlpHpVsFreeChunkInsert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkCompare(unsigned int a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = (a2 - 8) ^ RtlpLFHKey ^ *(_DWORD *)(a2 - 8);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
