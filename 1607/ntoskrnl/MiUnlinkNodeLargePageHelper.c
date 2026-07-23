/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x14008A180
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14008A878 (MiPageListCollision.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiWakeLargePageRebuild @ 0x1401FDD50 (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  int *v9; // rbx
  int v10; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // r11
  unsigned __int64 v20; // r10
  volatile signed __int32 *v21; // rdx
  unsigned int v22; // r9d
  int v23; // r15d
  unsigned __int64 v24; // r8

  v5 = a4;
  v7 = a3;
  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
  {
    MiPageListCollision(a2, a2);
    MiSetOriginalPtePfnFromFreeList(a2 + 16);
  }
  v8 = ((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = MiSystemPartition;
  else
    v9 = *(int **)(qword_140327038 + 8LL * v8);
  v10 = *(_BYTE *)(a2 + 34) & 7;
  v11 = (__int64)a1 - *((_QWORD *)v9 + 6);
  *(_QWORD *)(a2 + 8) = 0LL;
  v12 = (a2 + 0x58000000000LL) / 48;
  v13 = v11 / 2184;
  v14 = v7;
  v15 = MiLargePageSizes[v7];
  --a1[2 * v14 + v10];
  v16 = v5 + 4 * (v10 + 2 * (2 * v14 + (v12 < 0x100000)));
  v17 = -v15;
  --a1[v16 + 102];
  if ( v10 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 232, v17);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 224, v17);
  v18 = MiDecreaseAvailablePages(v9, v15, -1LL, 0LL);
  if ( dword_1403270A0 == 1 )
  {
    v19 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v20 = v15;
    v21 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v12 >> 5);
    if ( (unsigned __int64)(v19 + v15) <= 0x20 )
    {
      if ( v15 == 32 )
      {
        *v21 = -1;
        goto LABEL_22;
      }
      v22 = ((1 << v15) - 1) << v19;
      goto LABEL_21;
    }
    if ( (v12 & 0x1F) != 0 )
    {
      v23 = v12 & 0x1F;
      _InterlockedOr(v21, ((1 << (32 - v23)) - 1) << v19);
      v20 = v15 - (unsigned int)(32 - v23);
      ++v21;
    }
    if ( v20 >= 0x20 )
    {
      v24 = v20 >> 5;
      v20 += -32LL * (v20 >> 5);
      do
      {
        *v21++ = -1;
        --v24;
      }
      while ( v24 );
    }
    if ( v20 )
    {
      v22 = (1 << v20) - 1;
LABEL_21:
      _InterlockedOr(v21, v22);
    }
  }
LABEL_22:
  if ( *((_BYTE *)v9 + 4492) == 1 )
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 1;
  if ( v15 == 16
    && (unsigned __int64)(16 * (a1[4] + a1[5] + 32LL * (a1[2] + a1[3] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v13, 0LL);
  }
  return v18;
}
