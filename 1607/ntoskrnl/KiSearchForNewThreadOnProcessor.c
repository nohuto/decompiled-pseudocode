/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x14005B8A0
 * Callers:
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiMayStealStandbyThread @ 0x14005BD10 (KiMayStealStandbyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x140098ADC (KiGroupSchedulingMoveThread.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiFindReadyThread @ 0x1400CCDFC (KiFindReadyThread.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401D7C78 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  __int64 ReadyThread; // rbp
  char v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  __int64 v17; // r9
  int v18; // r13d
  unsigned int v19; // eax
  _QWORD **v20; // r12
  _QWORD *v21; // r15
  unsigned int v22; // eax
  char v23; // bl
  char EffectivePriorityThread; // al
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // [rsp+20h] [rbp-58h]
  _SINGLE_LIST_ENTRY *v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  int v38; // [rsp+88h] [rbp+10h] BYREF
  int v39; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 22680) && !(unsigned __int8)KiMayStealStandbyThread(a2, a1) && !*(_QWORD *)(a2 + 22768) )
          return 0LL;
        v7 = a1;
        v8 = a2;
        if ( a1 > a2 )
        {
          v7 = a2;
          v8 = a1;
        }
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( *(_QWORD *)(v7 + 48) );
        }
        if ( v7 != v8 )
        {
          v10 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v38 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v38);
          while ( *(_QWORD *)(a1 + 48) );
        }
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(_QWORD *)v3 );
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v12 = 0;
      if ( ReadyThread )
        break;
      if ( v3 )
      {
        v17 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
        if ( (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) != 0 )
          ReadyThread = KiFindReadyThread(a1, 0LL, v3);
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
      }
      else
      {
        if ( !(unsigned __int8)KiMayStealStandbyThread(a2, a1)
          || (v31 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v31 + 568) != KiCpuSetSequence)
          && (*(_DWORD *)(v31 + 116) & 8) == 0
          || (ReadyThread = *(_QWORD *)(a2 + 16), *(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(ReadyThread + 584))
          || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(ReadyThread + 576)) == 0LL
          || (KiSelectNextThread(a2, 0LL, v14, v15), *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36), !ReadyThread) )
        {
          v16 = *(_DWORD *)(a2 + 22680);
          if ( v16 )
          {
            v17 = *(_QWORD *)(a1 + 1608);
            v18 = 64;
            v37 = v17;
            while ( 2 )
            {
              _BitScanReverse(&v19, v16);
              v16 ^= 1 << v19;
              v20 = (_QWORD **)(a2 + 22784 + 16LL * v19);
              v35 = v19;
              v21 = *v20;
              do
              {
                v22 = *((unsigned __int8 *)v21 - 91);
                ReadyThread = (__int64)(v21 - 27);
                a3 = v21[45];
                v36 = (_SINGLE_LIST_ENTRY *)a3;
                if ( v22 >= 5 )
                {
                  v22 = KiConvertDynamicHeteroPolicy(v21 - 27, v13, a1);
                  a3 = (unsigned __int64)v36;
                  v17 = v37;
                }
                if ( v22 )
                {
                  v33 = *(_QWORD *)(a1 + 1600);
                  v34 = 3 * ((int)v22 + 8LL);
                  v13 = a3 & *(_QWORD *)(v33 + 8 * v34);
                  if ( v13 )
                    a3 &= *(_QWORD *)(v33 + 8 * v34);
                }
                if ( (a3 & v17) != 0 )
                {
                  v28 = *(_QWORD *)(ReadyThread + 104);
                  if ( !v28
                    || (v32 = *(unsigned int *)(a1 + 1624) + v28) == 0
                    || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v32, v13, a3, v17) )
                  {
                    v29 = (_QWORD *)*v21;
                    v30 = (_QWORD *)v21[1];
                    if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v30 != v21 )
                      __fastfail(3u);
                    *v30 = v29;
                    v29[1] = v30;
                    if ( v30 == v29 )
                      *(_DWORD *)(a2 + 22680) ^= 1 << v35;
                    *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
                    goto LABEL_34;
                  }
                }
                v21 = (_QWORD *)*v21;
                --v18;
              }
              while ( v21 != v20 && v18 );
              if ( v16 && v18 )
                continue;
              break;
            }
          }
          ReadyThread = KiGroupSchedulingMoveThread(a1, a2, a2 + 22768);
LABEL_34:
          v12 = 0;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      }
      if ( !ReadyThread )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v23 = 3;
        goto LABEL_41;
      }
      *(_BYTE *)(ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, (_BYTE *)ReadyThread, (_SINGLE_LIST_ENTRY *)a3, v17);
    }
    if ( v3 )
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  v12 = 1;
  v23 = 1;
LABEL_41:
  if ( (v23 & 2) != 0 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(ReadyThread, a1);
    else
      EffectivePriorityThread = *(_BYTE *)(ReadyThread + 195);
    **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *(_BYTE *)(ReadyThread + 388) == 1 )
    *(_DWORD *)(ReadyThread + 2008) = *(_DWORD *)(ReadyThread + 2008)
                                    - *(_DWORD *)(ReadyThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v12 )
  {
    v25 = *(unsigned __int8 *)(a1 + 35);
    v26 = *(_QWORD *)(a1 + 1600);
    *(_BYTE *)(a1 + 11755) = 0;
    if ( (v25 & 1) != 0 )
      __fastfail(0x21u);
    v27 = v25 + 1;
    *(_BYTE *)(a1 + 35) = v27;
    if ( v27 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v26, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandreset64((volatile signed __int32 *)(v26 + 16), *(unsigned __int8 *)(a1 + 1617));
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 8), ~*(_QWORD *)(a1 + 24920));
  }
  return ReadyThread;
}
