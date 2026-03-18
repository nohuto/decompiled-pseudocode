/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1400A15C0
 * Callers:
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1400D35B8 (KiGroupSchedulingMoveThread.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiFindReadyThread @ 0x14010D020 (KiFindReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 ReadyThread; // rbx
  char v14; // si
  char v15; // di
  __int64 v16; // rcx
  char v17; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax

  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 22680)
          && (*(_BYTE *)(a2 + 23858) != *(_BYTE *)(a1 + 23858)
           || (v6 = *(_QWORD *)(a2 + 16)) == 0
           || v6 == *(_QWORD *)(a2 + 24)
           || **(char **)(a2 + 56) < 16)
          && !*(_QWORD *)(a2 + 22768) )
        {
          return 0LL;
        }
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
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v11);
          }
          while ( *(_QWORD *)(a1 + 48) );
        }
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v12);
          }
          while ( *(_QWORD *)a3 );
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v14 = 0;
      v15 = 1;
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
        if ( *(_BYTE *)(a2 + 23858) != *(_BYTE *)(a1 + 23858)
          || (v16 = *(_QWORD *)(a2 + 16)) == 0
          || v16 == *(_QWORD *)(a2 + 24)
          || **(char **)(a2 + 56) < 16
          || *(_QWORD *)(v16 + 568) != KiCpuSetSequence && (*(_DWORD *)(v16 + 116) & 8) == 0
          || (ReadyThread = *(_QWORD *)(a2 + 16), *(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(ReadyThread + 584))
          || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(ReadyThread + 576)) == 0LL
          || (KiSelectNextThread(a2, 0LL), *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36), !ReadyThread) )
        {
          if ( !*(_DWORD *)(a2 + 22680) || (ReadyThread = KiFindReadyThread(a1, a2, 0LL)) == 0 )
            ReadyThread = KiGroupSchedulingMoveThread(a1, a2, a2 + 22768);
        }
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      }
      if ( !ReadyThread )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return 0LL;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v17 = 3;
        goto LABEL_74;
      }
      *(_BYTE *)(ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, (_BYTE *)ReadyThread);
    }
    if ( a3 )
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  v14 = 1;
  v17 = 1;
LABEL_74:
  if ( (v17 & 2) != 0 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) != 0 )
    {
      if ( *(char *)(ReadyThread + 195) >= 16
        || !*(_QWORD *)(ReadyThread + 104)
        || (v19 = *(_QWORD *)(ReadyThread + 104)) == 0
        || (v20 = *(unsigned int *)(a1 + 1624) + v19) == 0
        || !(unsigned int)KiGetThreadEffectiveRankNonZero(ReadyThread, v20, 0LL) )
      {
        v15 = *(_BYTE *)(ReadyThread + 195);
      }
    }
    else
    {
      v15 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v15;
  }
  if ( (v17 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = ReadyThread;
    *(_BYTE *)(ReadyThread + 388) = 2;
  }
  if ( !v14 )
  {
    v21 = *(unsigned __int8 *)(a1 + 35);
    v22 = *(_QWORD *)(a1 + 1600);
    *(_BYTE *)(a1 + 11755) = 0;
    if ( (v21 & 1) != 0 )
      __fastfail(0x21u);
    v23 = v21 + 1;
    *(_BYTE *)(a1 + 35) = v23;
    if ( v23 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v22, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandreset64((volatile signed __int32 *)(v22 + 16), *(unsigned __int8 *)(a1 + 1617));
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 8), ~*(_QWORD *)(a1 + 24792));
  }
  return ReadyThread;
}
