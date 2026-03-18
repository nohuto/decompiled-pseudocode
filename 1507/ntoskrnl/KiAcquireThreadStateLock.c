/*
 * XREFs of KiAcquireThreadStateLock @ 0x14009C1F0
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14000B26C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x14000B7FC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 *     KeUpdateThreadTag @ 0x1401321C8 (KeUpdateThreadTag.c)
 *     KeTryToFreezeThreadStack @ 0x14013A07C (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x140205E64 (KiUpdateThreadCpuSets.c)
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v6; // edi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // r12d
  bool v11; // zf
  __int64 result; // rax
  char v13; // al
  __int64 v14; // r12
  unsigned int v15; // r13d
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned int v18; // r13d

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(unsigned __int8 *)(a1 + 388);
        v7 = 0LL;
        v8 = 0LL;
        if ( v6 != 2 )
          break;
LABEL_2:
        v9 = *(unsigned int *)(a1 + 536);
        if ( (int)v9 >= 0 )
        {
          v7 = KiProcessorBlock[v9];
          v10 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( *(_QWORD *)(v7 + 48) );
          }
          v11 = a1 == *(_QWORD *)(v7 + 8);
LABEL_6:
          if ( v11 )
            goto LABEL_7;
          goto LABEL_48;
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) != 3 )
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_7;
        v13 = *(_BYTE *)(a1 + 112) & 7;
        if ( v13 == 1 || (unsigned __int8)(v13 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v6) = 2;
        goto LABEL_2;
      }
      v14 = *(unsigned int *)(a1 + 536);
      if ( (int)v14 >= 0 )
      {
        v7 = KiProcessorBlock[v14];
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
        {
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v15);
          }
          while ( *(_QWORD *)(v7 + 48) );
        }
        if ( a1 == *(_QWORD *)(v7 + 16) )
          goto LABEL_7;
        if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
          __fastfail(0x1Eu);
LABEL_48:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      }
    }
    v16 = *(unsigned int *)(a1 + 536);
    if ( (int)v16 >= 0 )
    {
      v7 = KiProcessorBlock[v16];
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( *(_QWORD *)(v7 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_48;
      v11 = *(_DWORD *)(a1 + 536) == (_DWORD)v16;
      goto LABEL_6;
    }
    v17 = (unsigned int)v16;
    LODWORD(v17) = v16 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 24776);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
      {
        LODWORD(v7) = v7 + 1;
        if ( ((unsigned int)v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v7);
      }
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
  v7 = 0LL;
LABEL_7:
  result = (unsigned __int8)v6;
  *a2 = v7;
  *a3 = v8;
  return result;
}
