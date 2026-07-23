/*
 * XREFs of MiInitializeCommitment @ 0x1400019CC
 * Callers:
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rdx

  if ( (int *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 5680) = (-(__int64)(*(_QWORD *)(a1 + 6288) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 5680) = 0LL;
  *(_QWORD *)(a1 + 5672) = 0LL;
  v2 = *(_BYTE *)(a1 + 431);
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_DWORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 431) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 384) = 1LL;
  *(_QWORD *)(a1 + 376) = a1;
  *(_BYTE *)(a1 + 428) = -1;
  *(_WORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 404) = 0;
  *(_BYTE *)(a1 + 402) = 6;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  v3 = *(_QWORD *)(a1 + 6464);
  if ( dword_140326A3C )
  {
    v4 = 0LL;
    v5 = (unsigned int)dword_140326A3C;
    do
    {
      v6 = (__int64 *)(a1 + 1744);
      v7 = 2LL;
      do
      {
        v8 = *v6++;
        v3 += *(unsigned __int16 *)(v4 + v8);
        --v7;
      }
      while ( v7 );
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  v9 = *(_QWORD *)(a1 + 6288);
  *(_QWORD *)(a1 + 6528) = v3;
  result = MiIncreaseCommitLimits(a1, v9, v9, 0, 0LL);
  v11 = *(_QWORD *)(a1 + 6288);
  if ( v11 != v3 )
    result = MiChargeCommit(a1, v11 - v3, 2LL);
  if ( (int *)a1 == &MiSystemPartition )
  {
    qword_140327920 = *(_QWORD *)(a1 + 7208);
    result = qword_140327928;
    qword_140327920 -= qword_140327928;
  }
  return result;
}
