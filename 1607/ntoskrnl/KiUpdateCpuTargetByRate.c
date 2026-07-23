/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1400A51E8
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400A498C (KeInsertSchedulingGroup.c)
 *     KiUpdateChildrenCpuTarget @ 0x1400A4DC4 (KiUpdateChildrenCpuTarget.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400A4E10 (KeSetSchedulingGroupCpuRates.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1400A4DC4 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400A5454 (KiResetScb.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  unsigned int v11; // r15d
  char v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // al
  _QWORD **v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  int v22; // [rsp+70h] [rbp+8h] BYREF
  bool v23; // [rsp+78h] [rbp+10h]
  int v24; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h]

  if ( *((_QWORD *)a1 + 12) )
  {
    v4 = KiProcessorBlock[0];
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(v4 + 48) );
    }
    v5 = *((_QWORD *)a1 + 67);
    v6 = *(_QWORD *)(v5 + 16) * a1[1];
    v7 = v6 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v5 + 8) / 0x2710;
    v9 = v6 / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    v10 = KiCyclesPerGeneration;
  }
  else
  {
    v10 = KiCyclesPerGeneration;
    v17 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v18 = KiCyclesPerGeneration * a1[1];
    v19 = v17;
    v7 = v18 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v19 >> 11;
    v9 = v18 / 0x2710;
  }
  v11 = 0;
  v25 = KeNumberProcessors_0;
  v23 = v9 == v10;
  if ( KeMaximumProcessors )
  {
    v12 = 16 * (v9 == v10);
    do
    {
      v13 = KiProcessorBlock[v11];
      v14 = (__int64)&a1[212 * v11 + 64];
      if ( v13 )
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(_QWORD *)(v13 + 48) );
        }
        if ( !v23 && *(_BYTE *)(v13 + 33) )
        {
          v20 = v9 * v25;
          *((_QWORD *)a1 + 5) = v20;
          *((_QWORD *)a1 + 6) = v20;
        }
      }
      v15 = *(_BYTE *)(v14 + 112) & 0xEF;
      *(_QWORD *)(v14 + 8) = v8;
      LOBYTE(v7) = v12 | v15;
      *(_QWORD *)(v14 + 16) = v9;
      *(_BYTE *)(v14 + 112) = v7;
      if ( v13 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            KiResetScb(v14);
            LOBYTE(v7) = KiCheckForEffectivePriorityChange(v13, v14);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      }
      ++v11;
    }
    while ( v11 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v16 = (_QWORD **)(a1 + 40);
  if ( *v16 != v16 )
  {
    BYTE8(v7) = a2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v16, *((__int64 *)&v7 + 1));
  }
  return v7;
}
