/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400ECA30
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14006C4AC (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14009A560 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x1400ACD74 (KiAbCompareSnappedEntryState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DDDC (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DE9C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r15
  int v4; // r12d
  __int64 v5; // rbx
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  volatile LONG *v8; // rsi
  __int64 *v9; // r13
  int v10; // ebp
  signed __int32 v11; // ett
  __int64 v12; // r14
  __int64 *v13; // rdx
  __int64 v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r8
  char v21; // cl
  char *v22; // rdx
  char v23; // r9
  __int64 v24; // rcx
  __int64 *v25; // rax
  char v26; // al
  char v27; // r9
  __int64 *v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 *v31; // rax
  unsigned __int64 v32; // [rsp+20h] [rbp-78h] BYREF
  int v33; // [rsp+28h] [rbp-70h]
  __int128 v34; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE *v38; // [rsp+B0h] [rbp+18h]

  v38 = a3;
  v3 = (__int64)a3;
  v4 = a2;
  v5 = a1;
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 80), a3);
    if ( (*(_BYTE *)(v5 + 27) & 1) != 0 )
      return v5;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v3);
  }
  v6 = *(_OWORD *)(v5 + 32);
  v34 = v6;
  if ( (v6 & 0x8000000000000000uLL) == 0 && !v4 )
    return 0LL;
  v32 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v7 = ((((unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v33 = DWORD2(v34);
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
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, a2);
    }
    else
    {
      _m_prefetchw((const void *)v8);
      v11 = *v8 & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(v8, v11 + 1, v11) )
        ExpWaitForSpinLockSharedAndAcquire(v8, 0xFFu);
    }
    v12 = *v9;
    if ( *v9 )
    {
      do
      {
        v18 = *(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v18 < v32 )
          goto LABEL_63;
        if ( v18 > v32 )
          goto LABEL_66;
        v19 = *(_DWORD *)(v12 + 40);
        if ( v19 == DWORD2(v34) )
          break;
        if ( v19 < DWORD2(v34) )
LABEL_63:
          v12 = *(_QWORD *)(v12 + 8);
        else
LABEL_66:
          v12 = *(_QWORD *)v12;
      }
      while ( v12 );
      v5 = a1;
      v3 = (__int64)v38;
    }
    if ( !v4 )
    {
      if ( v12 )
      {
        v14 = v12;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 80), (PKLOCK_QUEUE_HANDLE)v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( v5 == v12 )
          return v14;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 80), &LockHandle);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        if ( KiAbCompareSnappedEntryState((__m128i *)v5, (__int64)&v32) )
          return v14;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)v3);
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
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 80), (PKLOCK_QUEUE_HANDLE)v3);
      if ( v10 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( *(__int64 *)(v5 + 32) < 0 )
        return v14;
      if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
      {
        v21 = *(_BYTE *)(v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24)) + 195);
        if ( v21 > 15 )
          v21 = 15;
        *(_BYTE *)(v5 + 48) = v21;
        LOBYTE(v20) = 0;
        v22 = *(char **)(v12 + 64);
        v23 = v21;
        v24 = v12 + 64;
        if ( !v22 )
          goto LABEL_43;
        while ( 1 )
        {
          if ( v22[48] < v23 )
          {
            v25 = *(__int64 **)v22;
            if ( !*(_QWORD *)v22 )
            {
              LOBYTE(v20) = 0;
              goto LABEL_43;
            }
          }
          else
          {
            v25 = (__int64 *)*((_QWORD *)v22 + 1);
            if ( !v25 )
              goto LABEL_42;
          }
          v22 = (char *)v25;
        }
      }
      v26 = KiAbOwnerComputeCpuPriorityKey(v5);
      v24 = v12 + 48;
      *(_BYTE *)(v5 + 48) = v26;
      v22 = *(char **)(v12 + 48);
      LOBYTE(v20) = 0;
      v27 = v26;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( v22[48] > v27 )
          {
            v28 = *(__int64 **)v22;
            if ( !*(_QWORD *)v22 )
            {
              LOBYTE(v20) = 0;
              break;
            }
          }
          else
          {
            v28 = (__int64 *)*((_QWORD *)v22 + 1);
            if ( !v28 )
            {
LABEL_42:
              LOBYTE(v20) = 1;
              break;
            }
          }
          v22 = (char *)v28;
        }
      }
LABEL_43:
      RtlRbInsertNodeEx(v24, v22, v20, v5);
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
    v29 = v13[4] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v29 >= v32 )
    {
      if ( v29 > v32 )
        break;
      v30 = *((_DWORD *)v13 + 10);
      if ( v30 != DWORD2(v34) && v30 >= DWORD2(v34) )
        break;
    }
    v31 = (__int64 *)v13[1];
    if ( !v31 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_15;
    }
LABEL_70:
    v13 = v31;
  }
  v31 = (__int64 *)*v13;
  if ( *v13 )
    goto LABEL_70;
  LOBYTE(a3) = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v13, a3, v5);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = v5 + 80;
  v14 = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, v5 + 80);
  }
  else
  {
    v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v5 + 80), v3);
    if ( v15 )
      KxWaitForLockOwnerShip(v3, v15);
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
  *(_WORD *)(v5 + 90) &= 1u;
LABEL_21:
  v16 = v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24));
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    ++*(_BYTE *)(v16 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 + 1423), 1u);
  return v14;
}
