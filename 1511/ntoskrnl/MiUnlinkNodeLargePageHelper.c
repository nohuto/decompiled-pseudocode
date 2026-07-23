/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1400196EC
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x1400197DC (MiDecreaseAvailablePages.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  unsigned __int64 v5; // rbp
  int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned int v10; // r10d
  unsigned __int64 v12; // r9
  volatile signed __int32 *v13; // r8
  int v14; // ebp
  unsigned __int64 v15; // rcx

  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = (v4 + 0x58000000000LL) / 48;
  --*(_QWORD *)(a1 + 8LL * v6);
  v8 = v7 + 4 * (v6 + 2LL * (v5 < 0x100000));
  --*(_QWORD *)(a1 + 8 * v8 + 272);
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 1728), 0xFFFFFFFFFFFFFE00uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 1664), 0xFFFFFFFFFFFFFE00uLL);
  v9 = 512LL;
  v10 = MiDecreaseAvailablePages(v3, 512LL, -1LL, 0LL);
  if ( dword_1402FEC90 == 1 )
  {
    v12 = v5 & 0x1F;
    v13 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v5 >> 5);
    if ( v12 + 512 > 0x20 )
    {
      if ( (v5 & 0x1F) == 0
        || (v14 = v5 & 0x1F,
            _InterlockedOr(v13, ((1 << (32 - v14)) - 1) << v12),
            ++v13,
            v9 = 512LL - (unsigned int)(32 - v14),
            v9 >= 0x20) )
      {
        v15 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v13++ = -1;
          --v15;
        }
        while ( v15 );
      }
      if ( v9 )
        _InterlockedOr(v13, (1 << v9) - 1);
    }
    else
    {
      _InterlockedOr(v13, 0);
    }
  }
  return v10;
}
