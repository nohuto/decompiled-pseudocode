/*
 * XREFs of MiInitializeCommitment @ 0x14013A1E4
 * Callers:
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rdx

  if ( (int *)a1 == MiSystemPartition )
    *(_QWORD *)(a1 + 5040) = (-(__int64)(*(_QWORD *)(a1 + 5712) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 5040) = 0LL;
  *(_QWORD *)(a1 + 5032) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_DWORD *)(a1 + 416) = 0;
  *(_BYTE *)(a1 + 423) &= ~2u;
  *(_BYTE *)(a1 + 432) = 1;
  *(_QWORD *)(a1 + 376) = 1LL;
  *(_QWORD *)(a1 + 368) = a1;
  *(_BYTE *)(a1 + 420) = -1;
  *(_DWORD *)(a1 + 396) = 0;
  *(_WORD *)(a1 + 392) = 0;
  *(_BYTE *)(a1 + 394) = 6;
  *(_QWORD *)(a1 + 408) = a1 + 400;
  *(_QWORD *)(a1 + 400) = a1 + 400;
  v2 = *(_QWORD *)(a1 + 5888);
  if ( dword_1402FE70C )
  {
    v3 = 0LL;
    v4 = (unsigned int)dword_1402FE70C;
    do
    {
      v5 = (__int64 *)(a1 + 1616);
      v6 = 2LL;
      do
      {
        v7 = *v5++;
        v2 += *(unsigned __int16 *)(v3 + v7);
        --v6;
      }
      while ( v6 );
      v3 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  v8 = *(_QWORD *)(a1 + 5712);
  *(_QWORD *)(a1 + 5952) = v2;
  result = MiIncreaseCommitLimits(a1, v8, v8, 0, 0LL);
  v10 = *(_QWORD *)(a1 + 5712);
  if ( v10 != v2 )
    result = MiChargeCommit(a1, v10 - v2, 2uLL);
  if ( (int *)a1 == MiSystemPartition )
  {
    qword_1402FF818 = *(_QWORD *)(a1 + 5960);
    result = qword_1402FF820;
    qword_1402FF818 -= qword_1402FF820;
  }
  return result;
}
