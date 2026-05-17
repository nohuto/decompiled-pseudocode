/*
 * XREFs of RtlpHpVsChunkComputeCost @ 0x18001DC8C
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x180050CDC (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800762F8 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkComputeCost(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  __int64 v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned int v10; // r10d
  unsigned __int64 v11; // rdx
  __int64 result; // rax

  v6 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(a1) ^ *(unsigned __int16 *)(a1 + 2));
  v7 = ((v6 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v6 + 4095) >> 12);
  v8 = (a1 + v6 - a2) & 0xFFFFF000;
  v9 = (a1 - a2 + 4127) & 0xFFFFF000;
  if ( v9 < v8 )
  {
    v10 = v8 - v9;
    v11 = *(_QWORD *)(a2 + 16) & (-1LL << (v9 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v10 + v9 - 1) >> 12)));
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  result = v7;
  *a3 = v10 >> 12;
  *a4 = v11;
  return result;
}
