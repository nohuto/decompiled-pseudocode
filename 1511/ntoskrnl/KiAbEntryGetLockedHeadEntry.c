/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400348F0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400D9E90 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x1400EB1D0 (KiAbCompareSnappedEntryState.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // r13
  int v4; // esi
  __int64 v5; // rbx
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  volatile LONG *v8; // r14
  __int64 *v9; // r12
  int v10; // ebp
  signed __int32 v11; // ett
  __int64 v12; // rdi
  __int64 *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  char v19; // cl
  __int64 *v20; // rax
  char *v21; // rdx
  char v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  char v29; // r9
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int64 *v39; // rax
  unsigned __int64 v40; // [rsp+20h] [rbp-78h] BYREF
  int v41; // [rsp+28h] [rbp-70h]
  __int128 v42; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE *v46; // [rsp+B0h] [rbp+18h]

  v46 = a3;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 80), a3);
    if ( (*(_BYTE *)(v5 + 27) & 1) != 0 )
      return v5;
    KxReleaseQueuedSpinLock(v3, v25, v26, v27);
  }
  v6 = *(_OWORD *)(v5 + 32);
  v42 = v6;
  if ( (v6 & 0x8000000000000000uLL) == 0 && !v4 )
    return 0LL;
  v40 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v7 = ((((unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v41 = DWORD2(v42);
  v8 = (volatile LONG *)((char *)&KiAbTreeArray + v7 + 16);
  v9 = (__int64 *)((char *)&KiAbTreeArray + v7);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, a2, a3);
    }
    else
    {
      _m_prefetchw((const void *)v8);
      v11 = *v8 & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(v8, v11 + 1, v11) )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v8, a2, a3);
      }
    }
    v12 = *v9;
    if ( *v9 )
    {
      do
      {
        v17 = *(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 > v40 )
          goto LABEL_62;
        if ( v17 < v40 )
          goto LABEL_66;
        v18 = *(_DWORD *)(v12 + 40);
        if ( v18 == DWORD2(v42) )
          break;
        if ( v18 < DWORD2(v42) )
LABEL_66:
          v12 = *(_QWORD *)(v12 + 8);
        else
LABEL_62:
          v12 = *(_QWORD *)v12;
      }
      while ( v12 );
      v5 = a1;
      v3 = v46;
    }
    if ( !v4 )
    {
      if ( v12 )
      {
        v14 = v12;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 80), v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( v5 == v12 )
          return v14;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 80), &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle, v31, v32, v33);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v5, &v40) )
          return v14;
        KxReleaseQueuedSpinLock(v3, v34, v35, v36);
      }
      else if ( v10 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      }
      return 0LL;
    }
    if ( v12 )
    {
      v14 = v12;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 80), v3);
      if ( v10 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( *(__int64 *)(v5 + 32) < 0 )
        return v14;
      if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
      {
        v19 = *(_BYTE *)(v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24)) + 195);
        if ( v19 > 15 )
          v19 = 15;
        *(_BYTE *)(v5 + 48) = v19;
        LOBYTE(v20) = 0;
        v21 = *(char **)(v12 + 64);
        v22 = v19;
        v23 = v12 + 64;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( v21[48] < v22 )
            {
              v20 = *(__int64 **)v21;
              if ( !*(_QWORD *)v21 )
                break;
            }
            else
            {
              v20 = (__int64 *)*((_QWORD *)v21 + 1);
              if ( !v20 )
              {
                LOBYTE(v20) = 1;
                break;
              }
            }
            v21 = (char *)v20;
          }
        }
        v24 = (unsigned __int8)v20;
      }
      else
      {
        v28 = KiAbOwnerComputeCpuPriorityKey(v5);
        v23 = v12 + 48;
        *(_BYTE *)(v5 + 48) = v28;
        v21 = *(char **)(v12 + 48);
        LOBYTE(v24) = 0;
        v29 = v28;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( v21[48] > v29 )
            {
              v30 = *(__int64 **)v21;
              if ( !*(_QWORD *)v21 )
              {
                LOBYTE(v24) = 0;
                break;
              }
            }
            else
            {
              v30 = (__int64 *)*((_QWORD *)v21 + 1);
              if ( !v30 )
              {
                LOBYTE(v24) = 1;
                break;
              }
            }
            v21 = (char *)v30;
          }
        }
      }
      RtlRbInsertNodeEx(v23, v21, v24, v5);
      *(_BYTE *)(v5 + 39) |= 0x80u;
      goto LABEL_21;
    }
    if ( v10 )
      break;
    v10 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v8) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v8);
  }
  v13 = (__int64 *)*v9;
  LOBYTE(a3) = 0;
  if ( !*v9 )
    goto LABEL_15;
  while ( 1 )
  {
    v37 = v13[4] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v37 > v40 )
      break;
    if ( v37 >= v40 )
    {
      v38 = *((_DWORD *)v13 + 10);
      if ( v38 != DWORD2(v42) && v38 >= DWORD2(v42) )
        break;
    }
    v39 = (__int64 *)v13[1];
    if ( !v39 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_15;
    }
LABEL_72:
    v13 = v39;
  }
  v39 = (__int64 *)*v13;
  if ( *v13 )
    goto LABEL_72;
  LOBYTE(a3) = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v13, a3, v5);
  v3->LockQueue.Next = 0LL;
  v3->LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
  v14 = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v5 + 80), (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  *(_BYTE *)(v5 + 39) |= 0x80u;
  *(_BYTE *)(v5 + 27) |= 1u;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_WORD *)(v5 + 90) = 0;
LABEL_21:
  v15 = v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24));
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    ++*(_BYTE *)(v15 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v15 + 1419), 1u);
  return v14;
}
