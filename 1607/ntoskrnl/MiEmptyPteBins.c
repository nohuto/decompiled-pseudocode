/*
 * XREFs of MiEmptyPteBins @ 0x140017698
 * Callers:
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiAdjustPteBins @ 0x1400BCBFC (MiAdjustPteBins.c)
 *     MiCheckProcessorPteCache @ 0x1400DB2D0 (MiCheckProcessorPteCache.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 * Callees:
 *     MiReplenishBitMap @ 0x140088A20 (MiReplenishBitMap.c)
 *     MiReleaseLargePteMappings @ 0x1401264F4 (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  int v5; // r13d
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned int i; // ebx
  signed __int64 v10; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  int v15; // edx
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  _InterlockedOr(v16, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 88);
  v8 = 2 * (unsigned __int16)KeNumberNodes;
  if ( v8 )
  {
    do
    {
      for ( i = 0; i < 8; ++i )
      {
        v10 = *(_QWORD *)(v7 + 8LL * i);
        v17 = v10;
        if ( (_DWORD)v10 && ((unsigned int)(v5 - v10) > 2 || (v10 & 1) == 0 && (unsigned int)(v5 - v10) >= 2 || a2) )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * i), 0LL, v10) )
          {
            _InterlockedOr(v16, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v17) <= 2 )
            {
              if ( (v17 & 1) != 0 || (v13 = 0, (unsigned int)(KiTbFlushTimeStamp - v17) < 2) )
                v13 = 1;
            }
            else
            {
              v13 = 0;
            }
            if ( v6 >= v8 >> 1 )
            {
              v15 = MiReleaseLargePteMappings(a1, &v17, v13);
              __writecr8(CurrentIrql);
            }
            else
            {
              v14 = MiReplenishBitMap(a1, HIDWORD(v17), v13);
              v15 = v14;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v14);
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 64), -v15);
            v3 = 1;
          }
          else
          {
            --i;
          }
          __writecr8(CurrentIrql);
        }
      }
      v7 += 72LL;
      ++v6;
    }
    while ( v6 < v8 );
  }
  return v3;
}
