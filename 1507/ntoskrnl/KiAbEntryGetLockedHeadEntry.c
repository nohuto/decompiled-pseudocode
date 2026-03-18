/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400F6A90
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x14012A82C (KiAbCompareSnappedEntryState.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

__int64 *__fastcall KiAbEntryGetLockedHeadEntry(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  struct _KLOCK_QUEUE_HANDLE *v5; // r15
  int v8; // esi
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 **v11; // r12
  signed __int32 v12; // ett
  __int64 *v13; // r14
  unsigned int v14; // ebp
  signed __int32 v15; // edx
  __int64 *v16; // rdx
  __int64 *v17; // rbp
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // cl
  char *v26; // rdx
  __int64 *v27; // rax
  __int64 *v28; // rcx
  char v29; // al
  char v30; // r9
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  __int64 *v36; // rax
  signed __int32 v37; // edx
  __int64 Next; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+28h] [rbp-60h]
  __int128 v41; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE *v44; // [rsp+A0h] [rbp+18h]

  v44 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  v4 = 0;
  v5 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  if ( (*((_BYTE *)a1 + 27) & 1) == 0 )
    goto LABEL_2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 10, (PKLOCK_QUEUE_HANDLE)a3);
  if ( (*((_BYTE *)a1 + 27) & 1) != 0 )
    return a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
  }
  else
  {
    _m_prefetchw(v5);
    Next = (__int64)v5->LockQueue.Next;
    if ( !v5->LockQueue.Next )
    {
      if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v5->LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)v5) )
        goto LABEL_2;
      Next = KxWaitForLockChainValid((__int64 *)v5);
    }
    v5->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_2:
  v41 = *((_OWORD *)a1 + 2);
  if ( (__int64)v41 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v39 = v41 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v41 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v40 = DWORD2(v41);
  v10 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (__int64 **)((char *)&KiAbTreeArray + v9);
  while ( 1 )
  {
    if ( v8 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
      }
      else
      {
        if ( _interlockedbittestandset(v10, 0x1Fu) )
          v4 = ExpWaitForSpinLockExclusiveAndAcquire(v10);
        while ( 1 )
        {
          v37 = *v10;
          if ( (*v10 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v37 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v10, v37 | 0x40000000, v37);
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10);
    }
    else
    {
      _m_prefetchw((const void *)v10);
      v12 = *v10 & 0x7FFFFFFF;
      if ( v12 != _InterlockedCompareExchange(v10, v12 + 1, v12) )
        ExpWaitForSpinLockSharedAndAcquire(v10);
    }
    v13 = *v11;
    if ( *v11 )
    {
      do
      {
        v21 = v13[4] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v21 > v39 )
          goto LABEL_94;
        if ( v21 < v39 )
          goto LABEL_97;
        v22 = *((_DWORD *)v13 + 10);
        if ( v22 == DWORD2(v41) )
          break;
        if ( v22 < DWORD2(v41) )
LABEL_97:
          v13 = (__int64 *)v13[1];
        else
LABEL_94:
          v13 = (__int64 *)*v13;
      }
      while ( v13 );
      v5 = v44;
    }
    if ( !a2 )
    {
      if ( !v13 )
      {
        if ( v8 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
          else
            *v10 = 0;
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
        }
        else
        {
          _InterlockedAnd(v10, 0xBFFFFFFF);
          _InterlockedDecrement(v10);
        }
        return 0LL;
      }
      v17 = v13;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v13 + 10, v5);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
        else
          *v10 = 0;
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
      else
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      if ( a1 == v13 )
        return v17;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 10, &LockHandle);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        v32 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_61;
          v32 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
      }
LABEL_61:
      if ( (unsigned int)KiAbCompareSnappedEntryState(a1, &v39) )
        return v17;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
        return 0LL;
      }
      _m_prefetchw(v5);
      v33 = (__int64)v5->LockQueue.Next;
      if ( !v5->LockQueue.Next )
      {
        if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v5->LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)v5) )
          return 0LL;
        v33 = KxWaitForLockChainValid((__int64 *)v5);
      }
      v5->LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v33 + 8), 1uLL);
      return 0LL;
    }
    if ( v13 )
    {
      v17 = v13;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v13 + 10, v5);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
        else
          *v10 = 0;
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
      else
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      if ( a1[4] < 0 )
        return v17;
      if ( (*((_BYTE *)a1 + 25) & 1) != 0 )
      {
        v25 = ((_BYTE *)a1 - (unsigned __int16)(16 * *((unsigned __int8 *)a1 + 24)))[195];
        if ( v25 > 15 )
          v25 = 15;
        *((_BYTE *)a1 + 48) = v25;
        LOBYTE(v24) = 0;
        v26 = (char *)v13[8];
        if ( v26 )
        {
          while ( 1 )
          {
            if ( v26[48] < v25 )
            {
              v27 = *(__int64 **)v26;
              if ( !*(_QWORD *)v26 )
              {
                LOBYTE(v24) = 0;
                break;
              }
            }
            else
            {
              v27 = (__int64 *)*((_QWORD *)v26 + 1);
              if ( !v27 )
              {
                v24 = 1LL;
                break;
              }
            }
            v26 = (char *)v27;
          }
        }
        v28 = v13 + 8;
      }
      else
      {
        v29 = KiAbOwnerComputeCpuPriorityKey(a1, v23);
        v28 = v13 + 6;
        *((_BYTE *)a1 + 48) = v29;
        v26 = (char *)v13[6];
        LOBYTE(v24) = 0;
        v30 = v29;
        if ( v26 )
        {
          while ( 1 )
          {
            if ( v26[48] > v30 )
            {
              v31 = *(__int64 **)v26;
              if ( !*(_QWORD *)v26 )
              {
                LOBYTE(v24) = 0;
                break;
              }
            }
            else
            {
              v31 = (__int64 *)*((_QWORD *)v26 + 1);
              if ( !v31 )
              {
                v24 = 1LL;
                break;
              }
            }
            v26 = (char *)v31;
          }
        }
      }
      RtlRbInsertNodeEx(v28, v26, v24, a1);
      *((_BYTE *)a1 + 39) |= 0x80u;
      goto LABEL_23;
    }
    if ( v8 )
      goto LABEL_16;
    v8 = 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      break;
    if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v10, retaddr, a3, a4) )
      goto LABEL_16;
LABEL_89:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    v4 = 0;
  }
  if ( _interlockedbittestandset(v10, 0x1Fu) )
    goto LABEL_89;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v10;
    if ( (*v10 & 0xBFFFFFFF) == 0x80000001 )
      break;
    if ( (v15 & 0x40000000) == 0 )
      _InterlockedCompareExchange(v10, v15 | 0x40000000, v15);
    if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v14);
  }
LABEL_16:
  v16 = *v11;
  LOBYTE(a3) = 0;
  if ( !*v11 )
    goto LABEL_17;
  a3 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 2 )
  {
    v34 = v16[4] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v34 <= v39 )
    {
      if ( v34 < v39 || (v35 = *((_DWORD *)v16 + 10), v35 == DWORD2(v41)) || v35 < DWORD2(v41) )
      {
        v36 = (__int64 *)v16[1];
        if ( !v36 )
        {
          a3 = 1LL;
          goto LABEL_17;
        }
        goto LABEL_100;
      }
    }
    v36 = (__int64 *)*v16;
    if ( *v16 )
    {
LABEL_100:
      v16 = v36;
      continue;
    }
    break;
  }
  LOBYTE(a3) = 0;
LABEL_17:
  RtlRbInsertNodeEx(v11, v16, a3, a1);
  v5->LockQueue.Next = 0LL;
  v5->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 10);
  v17 = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, a1 + 10);
  }
  else
  {
    v18 = (_QWORD *)_InterlockedExchange64(a1 + 10, (__int64)v5);
    if ( v18 )
      KxWaitForLockOwnerShip((__int64)v5, v18);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
  else
    *v10 = 0;
  *((_BYTE *)a1 + 39) |= 0x80u;
  *((_BYTE *)a1 + 27) |= 1u;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 45) = 0;
LABEL_23:
  v19 = (__int64)a1 - (unsigned __int16)(16 * *((unsigned __int8 *)a1 + 24));
  if ( (*((_BYTE *)a1 + 25) & 1) != 0 )
    ++*(_BYTE *)(v19 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v19 + 1419), 1u);
  return v17;
}
