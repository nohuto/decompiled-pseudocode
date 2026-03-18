/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x140121BF4
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140121074 (KeInsertSchedulingGroup.c)
 *     KiUpdateChildrenCpuTarget @ 0x140121448 (KiUpdateChildrenCpuTarget.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14012156C (KeSetSchedulingGroupCpuRates.c)
 * Callees:
 *     KiUpdateChildrenCpuTarget @ 0x140121448 (KiUpdateChildrenCpuTarget.c)
 *     KiCheckForEffectivePriorityChange @ 0x140121E0C (KiCheckForEffectivePriorityChange.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v2; // r11
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  unsigned int v13; // r14d
  char v14; // bp
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // r15d
  char v18; // al
  _QWORD **v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  unsigned __int64 v24; // [rsp+50h] [rbp+8h]

  v2 = 0LL;
  if ( *((_QWORD *)a1 + 10) )
  {
    v5 = KiProcessorBlock[0];
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v6);
          v2 = 0LL;
        }
      }
      while ( *(_QWORD *)(v5 + 48) );
    }
    v7 = *((_QWORD *)a1 + 65);
    v8 = *(_QWORD *)(v7 + 16) * a1[1];
    v9 = v8 * (unsigned __int128)0x346DC5D63886594BuLL;
    v10 = (unsigned __int64)*a1 * *(_QWORD *)(v7 + 8) / 0x2710;
    v11 = v8 / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
    v12 = KiCyclesPerGeneration;
  }
  else
  {
    v12 = KiCyclesPerGeneration;
    v20 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v21 = KiCyclesPerGeneration * a1[1];
    v22 = v20;
    v9 = v21 * (unsigned __int128)0x346DC5D63886594BuLL;
    v10 = v22 >> 11;
    v11 = v21 / 0x2710;
  }
  v24 = v10;
  v13 = 0;
  if ( KeMaximumProcessors )
  {
    v14 = 16 * (v11 == v12);
    do
    {
      v15 = KiProcessorBlock[v13];
      v16 = (__int64)&a1[204 * v13 + 64];
      if ( v15 )
      {
        v17 = v2;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
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
              v2 = 0LL;
            }
          }
          while ( *(_QWORD *)(v15 + 48) );
        }
        v10 = v24;
      }
      v18 = *(_BYTE *)(v16 + 112) & 0xEF;
      *(_QWORD *)(v16 + 8) = v10;
      LOBYTE(v9) = v14 | v18;
      *(_QWORD *)(v16 + 16) = v11;
      *(_BYTE *)(v16 + 112) = v9;
      if ( v15 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v16 + 32) = v2;
          *(_QWORD *)(v16 + 48) = v2;
          LODWORD(v9) = *((_DWORD *)a1 + 1);
          if ( (v9 & 2) != 0 )
          {
            *(_BYTE *)(v16 + 112) &= 0xF1u;
            *(_QWORD *)v16 = v2;
            *(_QWORD *)(v16 + 24) = v2;
            *(_QWORD *)(v16 + 40) = v2;
            *(_QWORD *)(v16 + 56) = v2;
            *(_DWORD *)(v16 + 116) = v2;
            LOBYTE(v9) = KiCheckForEffectivePriorityChange(v15, v16);
            v10 = v24;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), v2);
      }
      ++v13;
    }
    while ( v13 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    *(LARGE_INTEGER *)&v9 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v9;
  }
  v19 = (_QWORD **)(a1 + 32);
  if ( *v19 != v19 )
  {
    BYTE8(v9) = a2;
    LOBYTE(v9) = KiUpdateChildrenCpuTarget(v19, *((__int64 *)&v9 + 1));
  }
  return v9;
}
