/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x1400A547C
 * Callers:
 *     KiUpdateChildrenCpuTarget @ 0x1400A4DC4 (KiUpdateChildrenCpuTarget.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A4EB4 (KiAssignSchedulingGroupWeights.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1400A4DC4 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400A5454 (KiResetScb.c)
 */

void __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, char a2)
{
  bool v4; // bp
  __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  unsigned __int64 v10; // r13
  unsigned int v11; // r14d
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbp
  char v15; // al
  _QWORD **v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // [rsp+70h] [rbp+8h] BYREF
  bool v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v4 = *a1 == a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    v17 = KiProcessorBlock[0];
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)(v17 + 48) );
    }
    v18 = *((_QWORD *)a1 + 67);
    v19 = *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) % v19;
    v10 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / v19;
    if ( v4 )
      v6 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / v19;
    else
      v6 = *(_QWORD *)(v18 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
    v5 = KiCyclesPerGeneration;
  }
  else
  {
    v5 = KiCyclesPerGeneration;
    v6 = KiCyclesPerGeneration;
    v9 = KiCyclesPerGeneration * *a1;
    v7 = v9 / (unsigned int)KiGroupSchedulingTotalWeight;
    v8 = v9 % (unsigned int)KiGroupSchedulingTotalWeight;
    v10 = v7;
    if ( *a1 == a1[1] )
      v6 = v7;
  }
  v11 = 0;
  v24 = KeNumberProcessors_0;
  v22 = v6 == v5;
  if ( KeMaximumProcessors )
  {
    v12 = 16 * (v6 == v5);
    do
    {
      v13 = KiProcessorBlock[v11];
      v14 = (__int64)&a1[212 * v11 + 64];
      if ( v13 )
      {
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(v13 + 48) );
        }
        if ( !v22 && *(_BYTE *)(v13 + 33) )
        {
          v20 = v6 * v24;
          *((_QWORD *)a1 + 5) = v20;
          *((_QWORD *)a1 + 6) = v20;
        }
      }
      v15 = *(_BYTE *)(v14 + 112) & 0xEF;
      *(_QWORD *)(v14 + 8) = v10;
      *(_QWORD *)(v14 + 16) = v6;
      *(_BYTE *)(v14 + 112) = v12 | v15;
      if ( v13 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 48) = 0LL;
          if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
          {
            KiResetScb(v14);
            KiCheckForEffectivePriorityChange(v13, v14);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      }
      ++v11;
    }
    while ( v11 < KeMaximumProcessors );
  }
  if ( a2 )
    *((LARGE_INTEGER *)a1 + 3) = KeQueryPerformanceCounter(0LL);
  v16 = (_QWORD **)(a1 + 40);
  if ( *v16 != v16 )
  {
    LOBYTE(v8) = a2;
    KiUpdateChildrenCpuTarget(v16, v8);
  }
}
