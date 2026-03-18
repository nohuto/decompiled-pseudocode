/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400EBAC0
 * Callers:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

char __fastcall KiEvaluateGroupSchedulingPreemption(
        struct _KPRCB *a1,
        _KTHREAD *a2,
        __int64 a3,
        struct _LIST_ENTRY **a4)
{
  unsigned int ThreadEffectiveRankNonZero; // r11d
  __int64 v6; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // r10
  unsigned int v10; // edx
  struct _LIST_ENTRY *Blink; // r9
  char v12; // r8
  unsigned __int8 v13; // r8
  char v14; // r11
  unsigned __int8 v15; // cl
  unsigned int v16; // eax
  unsigned int Flink_high; // eax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *i; // rcx

  ThreadEffectiveRankNonZero = 0;
  v6 = a3;
  LOBYTE(a3) = a1->CurrentThread != a2 || a1 == KeGetCurrentPrcb();
  SchedulingGroup = a2->SchedulingGroup;
  if ( SchedulingGroup )
  {
    SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + a1->ScbOffset);
    if ( SchedulingGroup )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, SchedulingGroup, a3);
  }
  v10 = 0;
  *a4 = 0LL;
  Blink = *(struct _LIST_ENTRY **)(v6 + 104);
  if ( Blink )
  {
    Blink = (struct _LIST_ENTRY *)((char *)Blink + a1->ScbOffset);
    if ( Blink )
    {
      LOBYTE(a3) = 1;
      v10 = KiGetThreadEffectiveRankNonZero(v6, Blink, a3);
      if ( v10 )
      {
        *a4 = Blink;
      }
      else if ( (*(_DWORD *)(v6 + 120) & 0x600) == 0 && (*(_DWORD *)(v6 + 484) || *(_BYTE *)(v6 + 390) == v12) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0xAu);
      }
    }
  }
  if ( !SchedulingGroup || !Blink || !ThreadEffectiveRankNonZero || !v10 )
    goto LABEL_38;
  if ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)Blink )
  {
    v13 = *((_BYTE *)&SchedulingGroup->Parent + 33);
    v14 = 0;
    v15 = BYTE1(Blink[7].Flink);
    v10 = 0;
    if ( v13 <= v15 )
    {
      if ( v13 < v15 )
      {
        v14 = -1;
        do
        {
          Flink_high = HIDWORD(Blink[7].Flink);
          Blink = Blink[24].Blink;
          if ( Flink_high > v10 )
            v10 = Flink_high;
        }
        while ( v13 < BYTE1(Blink[7].Flink) );
      }
    }
    else
    {
      v14 = 1;
      do
      {
        v16 = *((_DWORD *)&SchedulingGroup->Parent + 9);
        SchedulingGroup = (_KSCHEDULING_GROUP *volatile)SchedulingGroup->PerProcessor[0].ReadyListHead[9].Flink;
        if ( v16 > v10 )
          v10 = v16;
      }
      while ( *((_BYTE *)&SchedulingGroup->Parent + 33) > v15 );
    }
    if ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)Blink )
    {
      Flink = SchedulingGroup->PerProcessor[0].ReadyListHead[9].Flink;
      for ( i = Blink[24].Blink; Flink != i; i = i[24].Blink )
      {
        SchedulingGroup = (_KSCHEDULING_GROUP *volatile)Flink;
        Blink = i;
        Flink = Flink[24].Blink;
      }
      goto LABEL_37;
    }
    if ( !v14 )
    {
LABEL_37:
      ThreadEffectiveRankNonZero = *((_DWORD *)&SchedulingGroup->Parent + 9);
      v10 = HIDWORD(Blink[7].Flink);
      goto LABEL_38;
    }
    if ( v14 <= 0 )
    {
      ThreadEffectiveRankNonZero = 0;
LABEL_39:
      if ( v10 != ThreadEffectiveRankNonZero )
        return 0;
      return *(_BYTE *)(v6 + 195) > a2->Priority;
    }
    ThreadEffectiveRankNonZero = v10;
    v10 = 0;
LABEL_38:
    if ( v10 < ThreadEffectiveRankNonZero )
      return 1;
    goto LABEL_39;
  }
  return *(_BYTE *)(v6 + 195) > a2->Priority;
}
