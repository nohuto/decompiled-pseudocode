/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x1400C4518
 * Callers:
 *     KiUpdateChildrenCpuTarget @ 0x1400C3E28 (KiUpdateChildrenCpuTarget.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400C3F18 (KiAssignSchedulingGroupWeights.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1400C3E28 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400C44B0 (KiCheckForEffectivePriorityChange.c)
 */

void __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  bool v5; // si
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // r13
  unsigned int v12; // r15d
  char v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbx
  char v16; // al
  _QWORD **v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbp
  unsigned __int64 v20; // r8
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  v5 = *a1 == a1[1];
  if ( *((_QWORD *)a1 + 10) )
  {
    v18 = KiProcessorBlock[0];
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v22, a2, a3);
      while ( *(_QWORD *)(v18 + 48) );
    }
    v19 = *((_QWORD *)a1 + 65);
    v20 = *(unsigned int *)(*((_QWORD *)a1 + 10) + 20LL);
    v9 = (unsigned __int64)*a1 * *(_QWORD *)(v19 + 8) % v20;
    v11 = (unsigned __int64)*a1 * *(_QWORD *)(v19 + 8) / v20;
    if ( v5 )
      v7 = (unsigned __int64)*a1 * *(_QWORD *)(v19 + 8) / v20;
    else
      v7 = *(_QWORD *)(v19 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v6 = KiCyclesPerGeneration;
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration;
    v10 = KiCyclesPerGeneration * *a1;
    v8 = v10 / (unsigned int)KiGroupSchedulingTotalWeight;
    v9 = v10 % (unsigned int)KiGroupSchedulingTotalWeight;
    v11 = v8;
    if ( *a1 == a1[1] )
      v7 = v8;
  }
  v12 = 0;
  if ( KeMaximumProcessors )
  {
    v13 = 16 * (v7 == v6);
    do
    {
      v14 = KiProcessorBlock[v12];
      v15 = (__int64)&a1[204 * v12 + 64];
      if ( v14 )
      {
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v21, v9, v6);
          while ( *(_QWORD *)(v14 + 48) );
        }
      }
      v16 = *(_BYTE *)(v15 + 112) & 0xEF;
      *(_QWORD *)(v15 + 8) = v11;
      *(_QWORD *)(v15 + 16) = v7;
      *(_BYTE *)(v15 + 112) = v13 | v16;
      if ( v14 )
      {
        if ( v3 )
        {
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 48) = 0LL;
          if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
          {
            *(_BYTE *)(v15 + 112) &= 0xF1u;
            *(_QWORD *)v15 = 0LL;
            *(_QWORD *)(v15 + 24) = 0LL;
            *(_QWORD *)(v15 + 40) = 0LL;
            *(_QWORD *)(v15 + 56) = 0LL;
            *(_DWORD *)(v15 + 116) = 0;
            KiCheckForEffectivePriorityChange(v14, v15);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
      }
      ++v12;
    }
    while ( v12 < KeMaximumProcessors );
  }
  if ( v3 )
    *((LARGE_INTEGER *)a1 + 3) = KeQueryPerformanceCounter(0LL);
  v17 = (_QWORD **)(a1 + 32);
  if ( *v17 != v17 )
  {
    LOBYTE(v9) = v3;
    KiUpdateChildrenCpuTarget(v17, v9);
  }
}
