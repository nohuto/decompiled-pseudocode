/*
 * XREFs of KiSearchForNewThread @ 0x14005B500
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1400D04D0 (KiIdleSchedule.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140098B9C (KiSelectThreadFromSchedulingGroup.c)
 *     KiSetProcessorIdle @ 0x1400ACFA8 (KiSetProcessorIdle.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // r12d
  char v6; // si
  __int64 ready; // rdi
  _SINGLE_LIST_ENTRY *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  char EffectivePriorityThread; // dl
  BOOL v17; // ecx
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r13d
  unsigned __int64 v21; // rbp
  char v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  int v25; // r14d
  unsigned __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  int v31; // r14d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r14
  int v36; // [rsp+60h] [rbp+8h]
  int v37; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( v2 )
  {
LABEL_34:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 2008) = *(_DWORD *)(v2 + 2008) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  else
  {
    v6 = 1;
    while ( 1 )
    {
      ready = KiSelectReadyThread(1LL, a1);
      if ( !ready )
      {
        v10 = *(_QWORD *)(a1 + 22776);
        for ( ready = 0LL; v10; v10 = *(_QWORD *)(v35 + 400) )
        {
          v35 = v10 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a1, v10 - 88, 0LL);
          if ( ready )
            break;
        }
        if ( !ready )
        {
          ready = KiSelectReadyThread(0LL, a1);
          if ( !ready )
            break;
        }
      }
      if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( !(unsigned __int8)KiIsThreadRankNonZero(ready, a1) )
            v6 = *(_BYTE *)(ready + 195);
        }
        else
        {
          v6 = *(_BYTE *)(ready + 195);
        }
        **(_BYTE **)(a1 + 56) = v6;
        *(_QWORD *)(a1 + 8) = ready;
        if ( *(_BYTE *)(ready + 388) == 1 )
          *(_DWORD *)(ready + 2008) = *(_DWORD *)(ready + 2008) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(ready + 388) = 2;
        if ( a2 )
          KiSetProcessorIdle(a1, 0LL, 0LL);
        return ready;
      }
      *(_BYTE *)(ready + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, (_BYTE *)ready, v8, v9);
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a1 + 16) = 0LL;
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
        goto LABEL_34;
    }
    if ( !a2 )
    {
      v11 = *(unsigned __int8 *)(a1 + 35);
      v12 = *(_QWORD *)(a1 + 1600);
      *(_BYTE *)(a1 + 11755) = 0;
      if ( (v11 & 1) != 0 )
      {
        v13 = v11 - 1;
        *(_BYTE *)(a1 + 35) = v13;
        if ( !v13 )
          _interlockedbittestandset64((volatile signed __int32 *)v12, *(unsigned __int8 *)(a1 + 1617));
        _interlockedbittestandset64((volatile signed __int32 *)(v12 + 16), *(unsigned __int8 *)(a1 + 1617));
        v14 = *(_QWORD *)(a1 + 24920);
        if ( (*(_QWORD *)(v12 + 16) & v14) == v14 )
          _InterlockedOr64((volatile signed __int64 *)(v12 + 8), v14);
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v15, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v15 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
    }
    v17 = (*(_BYTE *)(a1 + 35) & 2) != 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( v17 )
    {
      return 0LL;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 1600);
      v19 = *(unsigned __int8 *)(a1 + 1616);
      v20 = *(unsigned __int16 *)(v18 + 146);
      LODWORD(v21) = *(_DWORD *)(v18 + 128);
      v22 = *(_BYTE *)(a1 + 1617);
      v36 = v19;
LABEL_18:
      v23 = *(_QWORD *)(v18 + 152);
      if ( *(unsigned __int16 *)(v18 + 146) == v20 )
        v23 &= ~*(_QWORD *)(a1 + 24896);
      if ( v23 )
      {
        v24 = __ROR8__(v23, v22);
        v25 = v19 << 6;
        while ( 1 )
        {
          _BitScanForward64(&v26, v24);
          v24 ^= 1LL << v26;
          result = KiSearchForNewThreadOnProcessor(
                     a1,
                     0LL,
                     *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v25 + (((_BYTE)v26 + v22) & 0x3F)]]
                               + 24904));
          if ( result )
            break;
          if ( !v24 )
          {
            v19 = v36;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        v28 = *(_QWORD *)(v18 + 136);
        if ( *(unsigned __int16 *)(v18 + 146) == v20 )
          v28 ^= *(_QWORD *)(a1 + 1608);
        v29 = ~*(_QWORD *)(v18 + 16) & v28;
        if ( v29 )
        {
          v30 = __ROR8__(v29, v22);
          v31 = v19 << 6;
          while ( 1 )
          {
            _BitScanForward64(&v32, v30);
            v30 ^= 1LL << v32;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v31 + (((_BYTE)v32 + v22) & 0x3F)]],
                       0LL);
            if ( result )
              break;
            if ( !v30 )
              goto LABEL_31;
          }
        }
        else
        {
LABEL_31:
          v21 = (unsigned int)v21 & (unsigned __int64)~(1LL << *(_WORD *)(v18 + 146));
          if ( (_DWORD)v21 )
          {
            while ( ++v3 != (unsigned __int16)KeNumberNodes )
            {
              v33 = *((unsigned __int16 *)qword_1403269E8 + v3 + v20 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v34 = (unsigned int)v21;
              if ( _bittest64(&v34, v33) )
              {
                v18 = KeNodeBlock[v33];
                v19 = v36;
                goto LABEL_18;
              }
            }
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
