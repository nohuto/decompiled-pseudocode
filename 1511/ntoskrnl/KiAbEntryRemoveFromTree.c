/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140033590
 * Callers:
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCount @ 0x1400355FC (KiAbTryDecrementIoWaiterCount.c)
 *     RtlRbReplaceNode @ 0x140035A7C (RtlRbReplaceNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // r14
  __int64 **v6; // r15
  unsigned __int8 CurrentIrql; // r12
  BOOL i; // edi
  signed __int32 v9; // edx
  __int64 *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  signed __int32 v29; // eax
  unsigned __int64 v31; // [rsp+20h] [rbp-68h]
  unsigned int v32; // [rsp+28h] [rbp-60h]
  _QWORD v33[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v36; // [rsp+90h] [rbp+8h] BYREF

  v32 = *(_DWORD *)(a1 + 40);
  v31 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v4 = ((v31 >> 4) & 0x3FF) << 6;
  v5 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v4 + 16);
  v6 = (__int64 **)((char *)&KiAbTreeArray + v4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (*(_BYTE *)(a1 + 27) & 1) != 0; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, a2);
      }
      else
      {
        v36 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
        {
          LOBYTE(a2) = -1;
          v36 = ExpWaitForSpinLockExclusiveAndAcquire(v5, a2, a3);
        }
        v9 = *v5;
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v29 = _InterlockedCompareExchange(v5, v9 | 0x40000000, v9);
            v28 = v9 == v29;
            v9 = v29;
            if ( !v28 )
              continue;
          }
          KeYieldProcessorEx(&v36);
          v9 = *v5;
        }
      }
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    }
    v10 = *v6;
    while ( v10 )
    {
      v11 = v10[4] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v11 > v31 )
        goto LABEL_37;
      if ( v11 < v31 )
        goto LABEL_46;
      v12 = *((_DWORD *)v10 + 10);
      if ( v12 == v32 )
        break;
      if ( v12 < v32 )
LABEL_46:
        v10 = (__int64 *)v10[1];
      else
LABEL_37:
        v10 = (__int64 *)*v10;
    }
    v33[1] = v10 + 10;
    v33[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v33);
    }
    else if ( _InterlockedExchange64(v10 + 10, (__int64)v33) )
    {
      KxWaitForLockOwnerShip(v33);
    }
    if ( v10 != (__int64 *)a1 )
      break;
    if ( i )
    {
      if ( v10[8] )
      {
        v13 = v10 + 8;
      }
      else
      {
        v13 = v10 + 6;
        if ( !v10[6] )
        {
LABEL_18:
          RtlRbRemoveNode(v6, v10);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
          else
            *v5 = 0;
          if ( (*((_BYTE *)v10 + 27) & 2) != 0 )
            *((_BYTE *)v10 + 27) &= ~2u;
          goto LABEL_22;
        }
      }
      if ( !v13 )
        goto LABEL_18;
      v19 = *v13;
      RtlRbRemoveNode(v13, *v13);
      RtlRbReplaceNode(v6, v10, v19);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 80), &LockHandle);
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      *(_OWORD *)(v19 + 48) = *((_OWORD *)v10 + 3);
      *(_OWORD *)(v19 + 64) = *((_OWORD *)v10 + 4);
      *(_WORD *)(v19 + 90) = *((_WORD *)v10 + 45);
      KiAbTryDecrementIoWaiterCount(v10, v19, v20);
      *(_BYTE *)(v19 + 27) |= 1u;
      KxReleaseQueuedSpinLock(&LockHandle, v21, v22, v23);
LABEL_22:
      *((_BYTE *)v10 + 39) &= ~0x80u;
      *((_BYTE *)v10 + 27) &= ~1u;
      goto LABEL_23;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    KxReleaseQueuedSpinLock(v33, v25, v26, v27);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  *(_BYTE *)(a1 + 39) &= ~0x80u;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCount(a1, v10, v10 + 8);
    RtlRbRemoveNode(v24, a1);
  }
  else
  {
    RtlRbRemoveNode(v10 + 6, a1);
  }
LABEL_23:
  KxReleaseQueuedSpinLock(v33, v14, v15, v16);
  v17 = 16 * *(unsigned __int8 *)(a1 + 24);
  v18 = a1 - v17;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v18 + 793);
  else
    LOBYTE(v17) = _InterlockedExchangeAdd8((volatile signed __int8 *)(v18 + 1419), 0xFFu);
  __writecr8(CurrentIrql);
  return v17;
}
