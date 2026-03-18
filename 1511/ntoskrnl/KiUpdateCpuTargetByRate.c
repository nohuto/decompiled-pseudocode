/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1400C42BC
 * Callers:
 *     KiUpdateChildrenCpuTarget @ 0x1400C3E28 (KiUpdateChildrenCpuTarget.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400C3E74 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1400C3E28 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400C44B0 (KiCheckForEffectivePriorityChange.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  unsigned int v12; // r14d
  char v13; // bp
  __int64 v14; // rsi
  __int64 v15; // rbx
  char v16; // al
  _QWORD **v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  if ( *((_QWORD *)a1 + 10) )
  {
    v5 = KiProcessorBlock[0];
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v23, a2, a3);
      while ( *(_QWORD *)(v5 + 48) );
    }
    v6 = *((_QWORD *)a1 + 65);
    v7 = *(_QWORD *)(v6 + 16) * a1[1];
    v8 = v7 * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = (unsigned __int64)*a1 * *(_QWORD *)(v6 + 8) / 0x2710;
    v10 = v7 / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
    v11 = KiCyclesPerGeneration;
  }
  else
  {
    v11 = KiCyclesPerGeneration;
    v18 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v19 = KiCyclesPerGeneration * a1[1];
    v20 = v18;
    v8 = v19 * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = v20 >> 11;
    v10 = v19 / 0x2710;
  }
  v12 = 0;
  if ( KeMaximumProcessors )
  {
    v13 = 16 * (v10 == v11);
    do
    {
      v14 = KiProcessorBlock[v12];
      v15 = (__int64)&a1[204 * v12 + 64];
      if ( v14 )
      {
        v22 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v22, *((__int64 *)&v8 + 1), v11);
          while ( *(_QWORD *)(v14 + 48) );
        }
      }
      v16 = *(_BYTE *)(v15 + 112) & 0xEF;
      *(_QWORD *)(v15 + 8) = v9;
      LOBYTE(v8) = v13 | v16;
      *(_QWORD *)(v15 + 16) = v10;
      *(_BYTE *)(v15 + 112) = v8;
      if ( v14 )
      {
        if ( v3 )
        {
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 48) = 0LL;
          LODWORD(v8) = *((_DWORD *)a1 + 1);
          if ( (v8 & 2) != 0 )
          {
            *(_BYTE *)(v15 + 112) &= 0xF1u;
            *(_QWORD *)v15 = 0LL;
            *(_QWORD *)(v15 + 24) = 0LL;
            *(_QWORD *)(v15 + 40) = 0LL;
            *(_QWORD *)(v15 + 56) = 0LL;
            *(_DWORD *)(v15 + 116) = 0;
            LOBYTE(v8) = KiCheckForEffectivePriorityChange(v14, v15);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
      }
      ++v12;
    }
    while ( v12 < KeMaximumProcessors );
  }
  if ( v3 )
  {
    *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v8;
  }
  v17 = (_QWORD **)(a1 + 32);
  if ( *v17 != v17 )
  {
    BYTE8(v8) = v3;
    LOBYTE(v8) = KiUpdateChildrenCpuTarget(v17, *((__int64 *)&v8 + 1));
  }
  return v8;
}
