/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1400F3D78
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlReleaseEofLock @ 0x1401014F0 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1402018D4 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KiAbFindWakeupLockEntry @ 0x1400F40C4 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400F4204 (KiAbApplyWakeupBoost.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  unsigned int *v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  int v13; // r14d
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  bool v19; // bl
  __int64 v20; // rsi
  _KTHREAD *CurrentThread; // r15
  bool v22; // al
  unsigned int v23; // ebp
  __int64 *v24; // rcx
  char v25; // al
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 WakeupLockEntry; // rax
  unsigned __int8 v30; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v31; // [rsp+38h] [rbp-60h]
  _QWORD *v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+A0h] [rbp+8h]
  _QWORD *v34; // [rsp+A8h] [rbp+10h]
  unsigned int *v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v34 = a2;
  v5 = a4;
  v6 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  v9 = 2;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v33 = (__int64)CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    CurrentPrcb = (struct _KPRCB *)v33;
    a2 = v34;
  }
  *(_DWORD *)(a1 + 4) = 1;
  v12 = *(_QWORD **)(a1 + 8);
  v13 = 0;
  if ( v12 == (_QWORD *)(a1 + 8) )
    goto LABEL_17;
  while ( 1 )
  {
    v14 = (__int64)v12;
    v32 = (_QWORD *)*v12;
    v15 = (_QWORD *)*v12;
    v16 = (_QWORD *)v12[1];
    if ( v15[1] != v14 || *v16 != v14 )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    v17 = *(_BYTE *)(v14 + 16);
    if ( v17 == 1 )
      break;
    if ( v17 == 2 )
    {
      *(_BYTE *)(v14 + 17) = 5;
      v20 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)v14 = 0LL;
      __writecr8(2uLL);
      v31 = KeGetCurrentPrcb();
      CurrentThread = v31->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v22 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
        LOBYTE(a3) = v22;
        EtwTraceEnqueueWork(CurrentThread, v14, a3);
      }
      v23 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v20, 7u) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        while ( (*(_DWORD *)v20 & 0x80u) != 0 );
      }
      if ( *(_QWORD *)(v20 + 16) == v20 + 8
        || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v20 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v31, v20, v14) )
      {
        ++*(_DWORD *)(v20 + 4);
        v24 = *(__int64 **)(v20 + 32);
        *(_QWORD *)v14 = v20 + 24;
        *(_QWORD *)(v14 + 8) = v24;
        if ( *v24 != v20 + 24 )
          __fastfail(3u);
        *v24 = v14;
        *(_QWORD *)(v20 + 32) = v14;
      }
      _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
      v18 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v18 )
        goto LABEL_16;
    }
    else if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL) )
    {
      --v13;
    }
LABEL_44:
    v12 = v32;
    if ( v32 == (_QWORD *)(a1 + 8) )
      goto LABEL_16;
    CurrentPrcb = (struct _KPRCB *)v33;
    a2 = v34;
  }
  if ( !(unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), a2) )
    goto LABEL_44;
  v18 = (*(_DWORD *)(a1 + 4))-- == 1;
  if ( !v18 )
    goto LABEL_44;
  ++v13;
LABEL_16:
  v6 = v35;
  v5 = a4;
  CurrentIrql = v30;
LABEL_17:
  if ( v34 )
    v19 = v13 > 0;
  else
    v19 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v26 = *v6;
    if ( *v6 )
    {
      v27 = *(_QWORD *)(v33 + 11400);
      if ( v27 )
      {
        if ( KiAbEnabled )
        {
          WakeupLockEntry = KiAbFindWakeupLockEntry(v5, v27 - 216);
          if ( WakeupLockEntry )
            KiAbApplyWakeupBoost(v26, WakeupLockEntry, 1LL);
        }
      }
    }
LABEL_62:
    v25 = 1;
    v9 = 1;
  }
  else
  {
    v25 = KiRemoveBoostThread(v33, *(_QWORD *)(v33 + 8));
    if ( v6 )
    {
      if ( *v6 )
      {
        if ( *(char *)v6 > v25 )
          v25 = *(_BYTE *)v6;
      }
      else
      {
        v19 = 0;
      }
    }
    if ( !v19 )
      goto LABEL_62;
  }
  return KiExitDispatcher(v33, 0, v9, v25, CurrentIrql);
}
