/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1401025F8
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140159228 (MiTryUnlinkNodeLargePage.c)
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiDecreaseAvailablePages @ 0x1401026DC (MiDecreaseAvailablePages.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(__int64 a1, __int64 a2)
{
  __int16 *v3; // rsi
  __int64 v4; // r11
  unsigned __int64 v5; // rbp
  int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // r9
  volatile signed __int32 *v12; // r8
  int v13; // ebp
  unsigned __int64 v14; // rcx

  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = (v4 + 0x58000000000LL) / 48;
  --*(_QWORD *)(a1 + 8LL * v6);
  v8 = v7 + 4 * (v6 + 2LL * (v5 < 0x100000));
  --*(_QWORD *)(a1 + 8 * v8 + 272);
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 200, 0xFFFFFFFFFFFFFE00uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 192, 0xFFFFFFFFFFFFFE00uLL);
  v9 = 512LL;
  result = MiDecreaseAvailablePages(v3, 512LL);
  if ( dword_14034F150 == 1 )
  {
    v11 = v5 & 0x1F;
    result = v11 + 512;
    v12 = (volatile signed __int32 *)qword_14034F160->Buffer + (v5 >> 5);
    if ( v11 + 512 > 0x20 )
    {
      if ( (v5 & 0x1F) == 0
        || (v13 = v5 & 0x1F,
            _InterlockedOr(v12, ((1 << (32 - v13)) - 1) << v11),
            result = (unsigned int)(32 - v13),
            ++v12,
            v9 = 512 - result,
            (unsigned __int64)(512 - result) >= 0x20) )
      {
        v14 = v9 >> 5;
        result = -32LL * (v9 >> 5);
        v9 += result;
        do
        {
          *v12++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v9 )
      {
        result = (unsigned int)((1 << v9) - 1);
        _InterlockedOr(v12, result);
      }
    }
    else
    {
      _InterlockedOr(v12, 0);
    }
  }
  return result;
}
