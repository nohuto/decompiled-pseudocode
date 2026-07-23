/*
 * XREFs of MiCoalesceFreeLargePages @ 0x1401FCABC
 * Callers:
 *     MiProcessLargeCoalesceList @ 0x1401FD398 (MiProcessLargeCoalesceList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140066D30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     MiUnlockDynamicMemoryShared @ 0x1401E2094 (MiUnlockDynamicMemoryShared.c)
 *     MiConstructNewLargeFreePage @ 0x1401FCF1C (MiConstructNewLargeFreePage.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rsi
  unsigned __int64 *v7; // rdi
  unsigned __int8 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r11
  __int64 v12; // rsi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // r9
  int v19; // r10d
  unsigned int v20; // r12d
  __int64 v21; // rbx
  char v22; // al
  __int64 v23; // rbx
  unsigned int v24; // r8d
  int v25; // r10d
  __int64 v26; // r9
  unsigned int v27; // r12d
  __int64 v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  char v31; // al
  int v32; // edx
  unsigned __int64 i; // rax
  unsigned int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+28h] [rbp-90h]
  _QWORD *v37; // [rsp+40h] [rbp-78h]
  unsigned __int64 v38; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  char v40; // [rsp+C0h] [rbp+8h]
  __int64 v43; // [rsp+D8h] [rbp+20h]
  int v44; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 224);
  v8 = 17;
  v9 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  v36 = 17;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v35 = v5 - 1;
  v10 = MiLargePageSizes[v5];
  v38 = MiLargePageSizes[(unsigned int)(v5 - 1)];
  v11 = MiLargePageContainingFrames[v5];
  v12 = 48 * a2 - 0x58000000000LL;
  v43 = v11;
  v13 = a2;
  v14 = v38 / v10;
  if ( v38 / v10 )
  {
    while ( MiIsPfnInline(v13)
         && (*(_BYTE *)(v16 + 34) & 7u) <= 1
         && (v15 & *(_QWORD *)(v16 + 40)) == v17
         && (*(_QWORD *)(v16 + 8) & 0x8000000000000000uLL) != 0
         && MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF) == (int *)a1 )
    {
      v13 = v10 + v18;
      if ( (unsigned int)(v19 + 1) >= v14 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v20 = 0;
    v21 = v12;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( v21 == v12 )
        {
          v22 = MiLockPageInline(v21);
          v11 = v43;
          v8 = v22;
          v36 = v22;
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
        {
          do
          {
            v21 -= 48 * v10;
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          while ( v21 != v12 );
          goto LABEL_40;
        }
        if ( (*(_BYTE *)(v21 + 34) & 7u) > 1
          || (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL) != v11
          || *(__int64 *)(v21 + 8) >= 0
          || MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF) != (int *)a1 )
        {
          break;
        }
        ++v20;
        v21 += 48 * v10;
        if ( v20 >= v14 )
          goto LABEL_21;
      }
      for ( ; v21 != v12; v21 -= 48 * v10 )
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
LABEL_21:
      v23 = v12;
      v40 = 0;
      v37 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 2184LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(v12 + 40)) >> 2));
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v37 + 272, &LockHandle);
      v24 = 0;
      LOBYTE(v25) = 1;
      if ( v14 )
      {
        v26 = v43;
        do
        {
          if ( (unsigned __int8)(*(_BYTE *)(v23 + 34) & 7) > (unsigned __int8)v25 )
            break;
          if ( (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL) != v26 )
            break;
          if ( (*(_QWORD *)(v23 + 8) & 0x8000000000000000uLL) == 0 )
            break;
          if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v23 + 40)) >> 8) & 0x3FF) != (int *)a1 )
            break;
          v24 += v25;
          v23 += 48 * v10;
        }
        while ( v24 < v14 );
        v8 = v36;
      }
      v27 = 0;
      if ( v24 == v14 )
      {
        v44 = 0;
        v28 = v12;
        v40 = v25;
        if ( v14 )
        {
          do
          {
            v29 = *(_QWORD *)v28;
            v30 = *(_QWORD **)(v28 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || *v30 != v28 )
              __fastfail(3u);
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            MiUnlinkNodeLargePageHelper(v37, v28, a3, (*(_QWORD *)(v28 + 40) >> 36) & 3);
            v31 = *(_BYTE *)(v28 + 34);
            v32 = v44;
            if ( (v31 & 7) != 0 )
              v27 = 1;
            *(_BYTE *)(v28 + 34) = v31 & 0xF8 | 5;
            v28 += 48 * v10;
            ++v44;
          }
          while ( (unsigned int)(v32 + 1) < v14 );
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      for ( i = v12 + 48 * (v38 - v10); i != v12; i -= 48 * v10 )
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v40 )
        MiConstructNewLargeFreePage(a2, v35, v27);
    }
LABEL_40:
    __writecr8(v8);
  }
  return MiUnlockDynamicMemoryShared(a1, (__int64)CurrentThread);
}
