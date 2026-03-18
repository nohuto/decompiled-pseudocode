/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x140082E30
 * Callers:
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14002A6EC (KiCheckForMaxOverQuotaScb.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiFindReadyThread @ 0x140096A08 (KiFindReadyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1400C369C (KiGroupSchedulingMoveThread.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401C96E4 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  __int64 ReadyThread; // rbp
  char v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // r11d
  __int64 v16; // r8
  int v17; // r12d
  unsigned int v18; // eax
  _QWORD **v19; // r15
  _QWORD *v20; // r14
  unsigned int v21; // eax
  __int64 v22; // r13
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
  __int64 v33; // rax
  char v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+78h] [rbp+10h] BYREF
  int v37; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v4 )
      {
        if ( !*(_DWORD *)(v4 + 22680)
          && (*(_BYTE *)(v4 + 23858) != *(_BYTE *)(a1 + 23858)
           || (v6 = *(_QWORD *)(v4 + 16)) == 0
           || v6 == *(_QWORD *)(v4 + 24)
           || **(char **)(v4 + 56) < 16)
          && !*(_QWORD *)(v4 + 22768) )
        {
          return 0LL;
        }
        v8 = a1;
        v9 = v4;
        if ( a1 > v4 )
        {
          v8 = v4;
          v9 = a1;
        }
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
        {
          do
          {
            if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v10, a2, a3);
          }
          while ( *(_QWORD *)(v8 + 48) );
        }
        if ( v8 != v9 )
        {
          v11 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v11, a2, a3);
            }
            while ( *(_QWORD *)(v9 + 48) );
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v36, a2, a3);
          while ( *(_QWORD *)(a1 + 48) );
        }
        v37 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v37, a2, a3);
          while ( *(_QWORD *)a3 );
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v13 = 0;
      if ( ReadyThread )
        break;
      if ( a3 )
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
          ReadyThread = KiFindReadyThread(a1, 0LL, a3);
        _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(v4 + 23858) != *(_BYTE *)(a1 + 23858)
          || (v14 = *(_QWORD *)(v4 + 16)) == 0
          || v14 == *(_QWORD *)(v4 + 24)
          || **(char **)(v4 + 56) < 16
          || *(_QWORD *)(v14 + 568) != KiCpuSetSequence && (*(_DWORD *)(v14 + 116) & 8) == 0
          || (ReadyThread = *(_QWORD *)(v4 + 16), *(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(ReadyThread + 584))
          || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(ReadyThread + 576)) == 0LL
          || (KiSelectNextThread(v4, 0LL), *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36), !ReadyThread) )
        {
          v15 = *(_DWORD *)(v4 + 22680);
          if ( v15 )
          {
            v16 = *(_QWORD *)(a1 + 1608);
            v17 = 64;
            v35 = v16;
            while ( 2 )
            {
              _BitScanReverse(&v18, v15);
              v15 ^= 1 << v18;
              v19 = (_QWORD **)(v4 + 22784 + 16LL * v18);
              v34 = v18;
              v20 = *v19;
              do
              {
                v21 = *((unsigned __int8 *)v20 - 91);
                ReadyThread = (__int64)(v20 - 27);
                v22 = v20[45];
                if ( v21 >= 5 )
                {
                  v21 = KiConvertDynamicHeteroPolicy(v20 - 27, a2, a1);
                  v16 = v35;
                }
                if ( v21 )
                {
                  v32 = *(_QWORD *)(a1 + 1600);
                  v33 = 2LL * (int)v21;
                  a2 = v22 & *(_QWORD *)(v32 + 8 * v33 + 184);
                  if ( a2 )
                    v22 &= *(_QWORD *)(v32 + 8 * v33 + 184);
                }
                if ( (v22 & v16) != 0 )
                {
                  v28 = *(_QWORD *)(ReadyThread + 104);
                  if ( !v28 || (v31 = *(unsigned int *)(a1 + 1624) + v28) == 0 || !KiCheckForMaxOverQuotaScb(v31) )
                  {
                    v29 = (_QWORD *)*v20;
                    v30 = (_QWORD *)v20[1];
                    if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v30 != v20 )
                      __fastfail(3u);
                    *v30 = v29;
                    v29[1] = v30;
                    if ( v30 == v29 )
                      *(_DWORD *)(v4 + 22680) ^= 1 << v34;
                    *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
                    goto LABEL_38;
                  }
                }
                v20 = (_QWORD *)*v20;
                --v17;
              }
              while ( v20 != v19 && v17 );
              if ( v15 && v17 )
                continue;
              break;
            }
          }
          ReadyThread = KiGroupSchedulingMoveThread(a1, v4, v4 + 22768);
        }
LABEL_38:
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
        v13 = 0;
      }
      if ( !ReadyThread )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v23 = 3;
        goto LABEL_44;
      }
      *(_BYTE *)(ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, ReadyThread);
    }
    if ( a3 )
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  v13 = 1;
  v23 = 1;
LABEL_44:
  if ( (v23 & 2) != 0 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(ReadyThread, a1);
    else
      EffectivePriorityThread = *(_BYTE *)(ReadyThread + 195);
    **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v13 )
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
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 8), ~*(_QWORD *)(a1 + 24792));
  }
  return ReadyThread;
}
