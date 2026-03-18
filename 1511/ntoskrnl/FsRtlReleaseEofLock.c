/*
 * XREFs of FsRtlReleaseEofLock @ 0x14001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall FsRtlReleaseEofLock(__int64 a1, __int64 AbEntrySummary, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  ULONG_PTR v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rcx
  char *v8; // rsi
  int SessionId; // eax
  __int16 v10; // ax
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rbx
  unsigned __int8 v16; // di
  unsigned __int32 v17; // eax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  __int64 v25; // r9
  _QWORD *v26; // r8
  _QWORD **v27; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v29; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+70h] [rbp+8h] BYREF
  int v32; // [rsp+78h] [rbp+10h]

  v30 = &v29;
  v3 = 0LL;
  v29 = &v29;
  v4 = a1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( !KiAbEnabled )
  {
    v8 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_48;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v32 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  a1 = 96 * v7;
  v8 = (char *)CurrentThread->LockEntries + a1;
  if ( !v8 )
  {
LABEL_48:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v5 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v8 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v8 + 4) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1, AbEntrySummary, a3);
LABEL_11:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5);
  if ( v8 )
    v8[26] |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( (*(_WORD *)(v4 + 38))-- == 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 40LL);
    if ( *(_BYTE *)(v4 + 36) )
    {
      PsBoostThreadIoEx(*(_QWORD *)v4, 1LL, 0LL, 0LL);
      *(_BYTE *)(v4 + 36) = 0;
    }
    v14 = *(_QWORD **)(v4 + 8);
    if ( v14 == (_QWORD *)(v4 + 8) )
      goto LABEL_19;
    do
    {
      v19 = v14;
      v14 = (_QWORD *)*v14;
      v20 = v19[5];
      if ( v20 < 0 || v20 > v13 )
      {
        if ( !v3 )
        {
          v21 = *v19;
          v22 = (_QWORD *)v19[1];
          if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v22 != v19 )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          v23 = v29;
          v19[1] = &v29;
          *v19 = v23;
          if ( (_QWORD **)v23[1] != &v29 )
            __fastfail(3u);
          v23[1] = v19;
          v3 = v19;
          v29 = v19;
        }
      }
      else
      {
        v25 = *v19;
        v26 = (_QWORD *)v19[1];
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v26 != v19 )
          __fastfail(3u);
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        v27 = (_QWORD **)v30;
        *v19 = &v29;
        v19[1] = v27;
        if ( *v27 != &v29 )
          __fastfail(3u);
        *v27 = v19;
        v30 = v19;
      }
    }
    while ( v14 != (_QWORD *)(v4 + 8) );
    if ( !v3 )
    {
LABEL_19:
      *(_QWORD *)v4 = 0LL;
      *(_WORD *)(v4 + 38) = 0;
      *(_DWORD *)(v4 + 32) = 0;
    }
    else
    {
      *(_QWORD *)v4 = v3[6];
      *(_WORD *)(v4 + 38) = 1;
      *(_DWORD *)(v4 + 32) = *((_DWORD *)v3 + 14);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 48LL);
    v16 = *(_BYTE *)(v15 + 48);
    *(_QWORD *)(v15 + 8) = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended(v15, v17);
    __writecr8(v16);
    KeAbPostRelease(v15);
    v18 = v29;
    while ( v18 != &v29 )
    {
      v24 = v18;
      v18 = (_QWORD *)*v18;
      v31 = *((_DWORD *)v24 + 14);
      KeSetEventBoostPriorityEx((_DWORD)v24 + 16, 0, (unsigned int)&v31, 0, 0);
    }
  }
  else
  {
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(v4 + 24) + 48LL));
  }
}
