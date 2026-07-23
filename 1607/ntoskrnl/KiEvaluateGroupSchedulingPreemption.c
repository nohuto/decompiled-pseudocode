/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400CDE50
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 * Callees:
 *     KiGetComparisonRanks @ 0x1400AA4A4 (KiGetComparisonRanks.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400CE170 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // ebx
  __int64 *v5; // r15
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a4;
  ThreadEffectiveRankNonZero = 0;
  LOBYTE(a4) = a1->CurrentThread != (_KTHREAD *)a2 || a1 == KeGetCurrentPrcb();
  v9 = *(_QWORD *)(a2 + 104);
  if ( v9 )
  {
    v9 += a1->ScbOffset;
    if ( v9 )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v9, a3, (_DWORD)a4, 0LL);
  }
  v10 = *(_QWORD *)(a3 + 104);
  v19 = 0;
  *v5 = 0LL;
  if ( !v10 )
    goto LABEL_6;
  v10 += a1->ScbOffset;
  if ( !v10 )
    goto LABEL_6;
  LOBYTE(v14) = *(_BYTE *)(a3 + 195);
  LODWORD(v11) = 0;
  if ( (char)v14 < 16 && (*(_DWORD *)(a3 + 120) & 0x100) == 0 && !(unsigned __int8)KiShouldPreemptionBeDeferred(a3) )
  {
    if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v10, v11, v15, v14) )
    {
      LODWORD(v11) = -1;
      v19 = -1;
      goto LABEL_37;
    }
    do
    {
      LODWORD(v11) = *(_DWORD *)(v16 + 116) + v11;
      if ( (_DWORD)v11 )
        break;
      v16 = *(_QWORD *)(v16 + 408);
    }
    while ( v16 );
  }
  v19 = v11;
  if ( (_DWORD)v11 )
  {
LABEL_37:
    *v5 = v10;
    goto LABEL_7;
  }
  v17 = v10;
  do
  {
    v4 += *(_DWORD *)(v17 + 116);
    v17 = *(_QWORD *)(v17 + 408);
  }
  while ( v17 );
  if ( v4 )
  {
    v18 = *(_DWORD *)(a3 + 120);
    if ( (v18 & 0x100) == 0 && (char)v14 < 16 && (v18 & 0x600) == 0 && (unsigned __int8)KiShouldPreemptionBeDeferred(a3) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xAu);
LABEL_6:
      LODWORD(v11) = v19;
    }
  }
LABEL_7:
  if ( !v9 || !v10 )
    goto LABEL_8;
  v12 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero && (_DWORD)v11 )
  {
    KiGetComparisonRanks(v9, v10, &ThreadEffectiveRankNonZero, &v19);
    LODWORD(v11) = v19;
LABEL_8:
    v12 = ThreadEffectiveRankNonZero;
  }
  return (unsigned int)v11 < v12 || (_DWORD)v11 == v12 && *(_BYTE *)(a3 + 195) > *(_BYTE *)(a2 + 195);
}
