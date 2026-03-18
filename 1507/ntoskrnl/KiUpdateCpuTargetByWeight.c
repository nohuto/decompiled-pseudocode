/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x140121EA8
 * Callers:
 *     KiUpdateChildrenCpuTarget @ 0x140121448 (KiUpdateChildrenCpuTarget.c)
 *     KiAssignSchedulingGroupWeights @ 0x140121610 (KiAssignSchedulingGroupWeights.c)
 * Callees:
 *     KiUpdateChildrenCpuTarget @ 0x140121448 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x140121E0C (KiCheckForEffectivePriorityChange.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, char a2)
{
  bool v4; // bp
  unsigned __int64 v5; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned int v9; // r15d
  char v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r12d
  char v14; // al
  _QWORD **v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // r14
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v4 = *a1 == a1[1];
  v5 = 0LL;
  if ( *((_QWORD *)a1 + 10) )
  {
    v16 = KiProcessorBlock[0];
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v17);
          v5 = 0LL;
        }
      }
      while ( *(_QWORD *)(v16 + 48) );
    }
    v18 = *((_QWORD *)a1 + 65);
    v19 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 10) + 20LL);
    v8 = v19;
    if ( v4 )
      v7 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 10) + 20LL);
    else
      v7 = *(_QWORD *)(v18 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    v6 = KiCyclesPerGeneration;
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration;
    v8 = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
    v19 = v8;
    if ( *a1 == a1[1] )
      v7 = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v9 = 0;
  if ( KeMaximumProcessors )
  {
    v10 = 16 * (v7 == v6);
    do
    {
      v11 = KiProcessorBlock[v9];
      v12 = (__int64)&a1[204 * v9 + 64];
      if ( v11 )
      {
        v13 = v5;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v13);
              v5 = 0LL;
            }
          }
          while ( *(_QWORD *)(v11 + 48) );
        }
        v8 = v19;
      }
      v14 = *(_BYTE *)(v12 + 112) & 0xEF;
      *(_QWORD *)(v12 + 8) = v8;
      *(_QWORD *)(v12 + 16) = v7;
      *(_BYTE *)(v12 + 112) = v10 | v14;
      if ( v11 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v12 + 32) = v5;
          *(_QWORD *)(v12 + 48) = v5;
          if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
          {
            *(_BYTE *)(v12 + 112) &= 0xF1u;
            *(_QWORD *)v12 = v5;
            *(_QWORD *)(v12 + 24) = v5;
            *(_QWORD *)(v12 + 40) = v5;
            *(_QWORD *)(v12 + 56) = v5;
            *(_DWORD *)(v12 + 116) = v5;
            KiCheckForEffectivePriorityChange(v11, v12);
            v8 = v19;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), v5);
      }
      ++v9;
    }
    while ( v9 < KeMaximumProcessors );
  }
  if ( a2 )
    *((LARGE_INTEGER *)a1 + 3) = KeQueryPerformanceCounter(0LL);
  v15 = (_QWORD **)(a1 + 32);
  if ( *v15 != v15 )
  {
    LOBYTE(v8) = a2;
    KiUpdateChildrenCpuTarget(v15, v8);
  }
}
