/*
 * XREFs of KiRemoveBoostThread @ 0x14009AE80
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140103A14 (KeWakeWaitChain.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 v5; // al
  char v6; // r8
  char v7; // r15
  char v8; // cl
  char v9; // al
  char v10; // r14
  unsigned int v11; // eax
  int v12; // edx
  char v13; // r12
  unsigned int v14; // ebx
  char v15; // bp
  __int64 ready; // rax
  __int64 v17; // r9
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v22; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v24; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  char result; // al

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  v5 = *(_BYTE *)(a2 + 564);
  v6 = *(_BYTE *)(a2 + 195);
  v7 = v6;
  v8 = v5 & 0xF;
  if ( (v5 & 0xF) != 0 )
    v7 = v6 - v8;
  v9 = v5 >> 4;
  if ( v9 )
  {
    *(_BYTE *)(a2 + 564) = v8;
    v10 = v6 - v9;
    v11 = *(_DWORD *)(a2 + 1408);
    if ( v11 )
    {
      _BitScanReverse((unsigned int *)&v12, v11);
      if ( v10 < v12 )
        v10 = v12;
    }
    if ( v10 != v6 )
    {
      v13 = 0;
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v14);
        }
        while ( *(_QWORD *)(a1 + 48) );
      }
      v15 = 1;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        ready = KiSelectReadyThreadEx(a1, a2, 1LL);
        v17 = ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( *(char *)(ready + 195) >= 16
              || !*(_QWORD *)(ready + 104)
              || (v19 = *(_QWORD *)(ready + 104)) == 0
              || (v20 = *(unsigned int *)(a1 + 1624) + v19) == 0
              || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(ready, v20, 0LL),
                  v18 = 1,
                  !ThreadEffectiveRankNonZero) )
            {
              v18 = *(_BYTE *)(v17 + 195);
            }
          }
          else
          {
            v18 = *(_BYTE *)(ready + 195);
          }
          **(_BYTE **)(a1 + 56) = v18;
          *(_QWORD *)(a1 + 16) = v17;
          *(_BYTE *)(v17 + 388) = 3;
        }
        else
        {
          v13 = 1;
        }
      }
      v22 = v10;
      if ( KiAbEnabled )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v10 > *(char *)(a2 + 195) )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v24 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
            if ( *(_QWORD *)(a2 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
              {
                v24->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v24;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1416));
                KiAbQueueAutoBoostDpc(CurrentPrcb);
              }
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v10;
      if ( v13 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          if ( v10 >= 16
            || !*(_QWORD *)(a2 + 104)
            || (v26 = *(_QWORD *)(a2 + 104)) == 0
            || (v27 = *(unsigned int *)(a1 + 1624) + v26) == 0
            || !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v27, 0LL) )
          {
            v15 = *(_BYTE *)(a2 + 195);
          }
          v22 = v15;
        }
        **(_BYTE **)(a1 + 56) = v22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  else
  {
    ++v7;
  }
  result = v7;
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
