/*
 * XREFs of MiInitializeCommitment @ 0x14016BB7C
 * Callers:
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 */

__int16 *__fastcall MiInitializeCommitment(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rdx
  __int16 *result; // rax

  v2 = -(__int64)(*(_QWORD *)(a1 + 5328) < 0x4000uLL);
  *(_QWORD *)(a1 + 4776) = 0LL;
  *(_QWORD *)(a1 + 4784) = (v2 & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  *(_BYTE *)(a1 + 439) &= ~2u;
  *(_BYTE *)(a1 + 448) = 1;
  *(_QWORD *)(a1 + 392) = 1LL;
  *(_QWORD *)(a1 + 384) = a1;
  *(_BYTE *)(a1 + 436) = -1;
  *(_DWORD *)(a1 + 412) = 0;
  *(_WORD *)(a1 + 408) = 0;
  *(_BYTE *)(a1 + 410) = 6;
  *(_QWORD *)(a1 + 424) = a1 + 416;
  *(_QWORD *)(a1 + 416) = a1 + 416;
  v3 = *(_QWORD *)(a1 + 5504);
  if ( dword_14034EBBC )
  {
    v4 = 0LL;
    v5 = (unsigned int)dword_14034EBBC;
    do
    {
      v6 = (__int64 *)(a1 + 1488);
      v7 = 2LL;
      do
      {
        v8 = *v6++;
        v3 += *(unsigned __int16 *)(v8 + v4);
        --v7;
      }
      while ( v7 );
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  v9 = *(_QWORD *)(a1 + 5328);
  *(_QWORD *)(a1 + 5568) = v3;
  MiIncreaseCommitLimits(a1, v9, v9, 0, 0LL);
  v10 = *(_QWORD *)(a1 + 5328);
  if ( v10 != v3 )
    MiChargeCommit(a1, v10 - v3, 2);
  result = MiSystemPartition;
  if ( (__int16 *)a1 == MiSystemPartition )
  {
    qword_14034FCD8 = *(_QWORD *)(a1 + 5576);
    result = (__int16 *)qword_14034FCE0;
    qword_14034FCD8 -= qword_14034FCE0;
  }
  return result;
}
