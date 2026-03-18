/*
 * XREFs of FsRtlReleaseEofLock @ 0x1401014F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall FsRtlReleaseEofLock(__int64 a1)
{
  _QWORD *v1; // rbp
  ULONG_PTR v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  __int64 v7; // rsi
  int SessionId; // eax
  __int16 v9; // ax
  unsigned __int8 CurrentIrql; // di
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rbx
  unsigned __int8 v16; // di
  signed __int32 v17; // eax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  ULONG_PTR v25; // rbx
  unsigned __int8 v26; // di
  signed __int32 v27; // eax
  __int64 v28; // r9
  _QWORD *v29; // r8
  _QWORD **v30; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v32; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-30h]
  unsigned int v34; // [rsp+70h] [rbp+8h] BYREF
  int v35; // [rsp+78h] [rbp+10h]

  v33 = &v32;
  v1 = 0LL;
  v32 = &v32;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v3, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v3);
      goto LABEL_50;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  v35 = v6;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  v7 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v7 )
  {
LABEL_50:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v3 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_11:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
    ExpAcquireFastMutexContended(v3, v7);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 48) = CurrentIrql;
  v11 = (*(_WORD *)(a1 + 38))-- == 1;
  v12 = *(_QWORD *)(a1 + 24);
  if ( v11 )
  {
    v13 = *(_QWORD *)(v12 + 40);
    if ( *(_BYTE *)(a1 + 36) )
    {
      PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
      *(_BYTE *)(a1 + 36) = 0;
    }
    v14 = *(_QWORD **)(a1 + 8);
    if ( v14 == (_QWORD *)(a1 + 8) )
      goto LABEL_19;
    do
    {
      v19 = v14;
      v14 = (_QWORD *)*v14;
      v20 = v19[5];
      if ( v20 >= 0 && v20 <= v13 )
      {
        v28 = *v19;
        v29 = (_QWORD *)v19[1];
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v29 != v19 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        v30 = (_QWORD **)v33;
        *v19 = &v32;
        v19[1] = v30;
        if ( *v30 != &v32 )
          __fastfail(3u);
        *v30 = v19;
        v33 = v19;
      }
      else if ( !v1 )
      {
        v21 = *v19;
        v22 = (_QWORD *)v19[1];
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v22 != v19 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = v32;
        v19[1] = &v32;
        *v19 = v23;
        if ( (_QWORD **)v23[1] != &v32 )
          __fastfail(3u);
        v23[1] = v19;
        v1 = v19;
        v32 = v19;
      }
    }
    while ( v14 != (_QWORD *)(a1 + 8) );
    if ( !v1 )
    {
LABEL_19:
      *(_QWORD *)a1 = 0LL;
      *(_WORD *)(a1 + 38) = 0;
      *(_DWORD *)(a1 + 32) = 0;
    }
    else
    {
      *(_QWORD *)a1 = v1[6];
      *(_WORD *)(a1 + 38) = 1;
      *(_DWORD *)(a1 + 32) = *((_DWORD *)v1 + 14);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    v16 = *(_BYTE *)(v15 + 48);
    *(_QWORD *)(v15 + 8) = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v15, v17);
    __writecr8(v16);
    KeAbPostRelease(v15);
    v18 = v32;
    while ( v18 != &v32 )
    {
      v24 = v18;
      v18 = (_QWORD *)*v18;
      v34 = *((_DWORD *)v24 + 14);
      KeSetEventBoostPriorityEx((__int64)(v24 + 2), 0LL, &v34, 0LL, 0);
    }
  }
  else
  {
    v25 = *(_QWORD *)(v12 + 48);
    v26 = *(_BYTE *)(v25 + 48);
    *(_QWORD *)(v25 + 8) = 0LL;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25, 1, 0);
    if ( v27 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v25, v27);
    __writecr8(v26);
    KeAbPostRelease(v25);
  }
}
