/*
 * XREFs of KiTimer2Expiration @ 0x1400F5180
 * Callers:
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x14014A938 (KiTimerExpirationDpc.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400D5F78 (KiSendClockInterruptToClockOwner.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1400F5C10 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiShouldSetClockIntervalForHighResolutionTimers @ 0x1400F731C (KiShouldSetClockIntervalForHighResolutionTimers.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 *v8; // rdi
  __int64 i; // rsi
  _QWORD *v10; // rbx
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // esi
  char v13; // al
  _BOOL8 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rsi
  char inserted; // si
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  char v21; // [rsp+58h] [rbp+10h] BYREF

  result = KiNextTimer2DueTime;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v19[1] = v19;
    v19[0] = v19;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    v7 = 0;
    v8 = (__int64 *)&unk_140338D88;
    do
    {
      for ( i = *v8; *v8; i = *v8 )
      {
        v14 = v7 != 3 && (unsigned int)v7 >= 2;
        v15 = i - 24 * (v14 + 1);
        if ( a2 < *(_QWORD *)(v15 + 72) )
          break;
        KiRemoveTimer2(v15);
        KiUpdateTimer2Flags(v15, 2LL, 1LL);
        v16 = v19[0];
        v17 = (_QWORD *)(v15 + 24);
        v17[1] = v19;
        *v17 = v16;
        if ( *(_QWORD **)(v16 + 8) != v19 )
          __fastfail(3u);
        *(_QWORD *)(v16 + 8) = v17;
        v19[0] = v17;
      }
      ++v7;
      v8 += 3;
    }
    while ( v7 < 4 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    else
      _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
    v10 = (_QWORD *)v19[0];
    while ( v10 != v19 )
    {
      v11 = (volatile signed __int32 *)(v10 - 3);
      v12 = 0;
      v10 = (_QWORD *)*v10;
      if ( _interlockedbittestandset(v11, 7u) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*v11 & 0x80u) != 0 || _interlockedbittestandset(v11, 7u) );
      }
      v13 = *((_BYTE *)v11 + 1);
      if ( (v13 & 2) == 0 )
      {
        if ( (v13 & 8) == 0 )
        {
          KiUpdateTimer2Flags(v11, 0LL, 4LL);
          continue;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
        }
        inserted = KiInsertTimer2WithCollectionLockHeld(v11, 0LL, &v21);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
        else
          _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
        if ( inserted )
        {
          KiUpdateTimer2Flags(v11, 1LL, 0LL);
          continue;
        }
      }
      KiExpireTimer2(v11, a1, a2, a3);
    }
    if ( *(_QWORD *)(a1 + 11400) )
      KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
    result = KiShouldSetClockIntervalForHighResolutionTimers(MEMORY[0xFFFFF78000000008], qword_140338DC0);
    if ( (_BYTE)result )
      return KiSendClockInterruptToClockOwner();
  }
  return result;
}
