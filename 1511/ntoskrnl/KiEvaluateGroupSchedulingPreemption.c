/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400840E0
 * Callers:
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGetComparisonRanks @ 0x1400ED9B8 (KiGetComparisonRanks.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KPRCB *v6; // r11
  char v7; // r8
  __int64 v8; // r10
  __int64 v9; // rsi
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 *v13; // r9
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  ThreadEffectiveRankNonZero = 0;
  v7 = a1->CurrentThread != (_KTHREAD *)a2 || a1 == KeGetCurrentPrcb();
  v8 = *(_QWORD *)(a2 + 104);
  if ( v8 )
  {
    v8 += a1->ScbOffset;
    if ( v8 )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v8, v7);
  }
  v14 = 0;
  *a4 = 0LL;
  v9 = *(_QWORD *)(a3 + 104);
  if ( !v9 )
    goto LABEL_6;
  v9 += v6->ScbOffset;
  if ( !v9 )
    goto LABEL_6;
  v14 = KiGetThreadEffectiveRankNonZero(a3, v9, 1);
  v10 = v14;
  if ( v14 )
  {
    *v13 = v9;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x600) == 0 && (*(_DWORD *)(a3 + 484) || *(_BYTE *)(a3 + 390) == 1) )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xAu);
LABEL_6:
    v10 = v14;
  }
LABEL_7:
  if ( !v8 || !v9 )
    goto LABEL_8;
  v11 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero && v10 )
  {
    KiGetComparisonRanks(v8, v9, &ThreadEffectiveRankNonZero, &v14);
    v10 = v14;
LABEL_8:
    v11 = ThreadEffectiveRankNonZero;
  }
  return v10 < v11 || v10 == v11 && *(_BYTE *)(a3 + 195) > *(_BYTE *)(a2 + 195);
}
