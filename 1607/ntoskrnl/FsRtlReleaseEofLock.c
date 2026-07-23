/*
 * XREFs of FsRtlReleaseEofLock @ 0x1400C4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400C5280 (FsRtlReleaseHeaderMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rbx
  __int64 **v3; // r15
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v5; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  char *v8; // rbp
  int SessionId; // eax
  __int16 v10; // ax
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rdi
  __int64 *v14; // rcx
  ULONG_PTR v15; // rbx
  unsigned __int8 v16; // di
  signed __int32 v17; // eax
  __int64 *v18; // rbx
  __int64 *result; // rax
  __int64 **v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // r9
  __int64 **v23; // r8
  __int64 v24; // r8
  __int64 *v25; // rcx
  __int64 *v26; // r9
  __int64 ***v27; // r8
  __int64 **v28; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 *v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 **v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  int v35; // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+90h] [rbp+18h]
  volatile signed __int32 *v38; // [rsp+98h] [rbp+20h]

  v36 = a2;
  v38 = a2;
  v33 = &v32;
  v2 = a1;
  v32 = (__int64 *)&v32;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
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
      goto LABEL_52;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v37 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  a1 = 96 * v7;
  v8 = (char *)CurrentThread->LockEntries + a1;
  if ( !v8 )
  {
LABEL_52:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_7;
  }
  if ( v5 < qword_140326950 || v5 >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  *((_DWORD *)v8 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v8 + 4) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5);
  if ( v8 )
    v8[26] |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( v38 )
    _InterlockedIncrement(v38);
  if ( (*(_WORD *)(v2 + 38))-- != 1 )
    return (__int64 *)FsRtlReleaseHeaderMutex(v2, v36);
  v13 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 40LL);
  if ( *(_BYTE *)(v2 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)v2, 1, 0, 0LL);
    *(_BYTE *)(v2 + 36) = 0;
  }
  v14 = *(__int64 **)(v2 + 8);
  if ( v14 == (__int64 *)(v2 + 8) )
    goto LABEL_20;
  do
  {
    v20 = (__int64 **)v14;
    v14 = (__int64 *)*v14;
    v21 = (__int64)v20[5];
    if ( v21 >= 0 && v21 <= v13 )
    {
      v26 = *v20;
      v27 = (__int64 ***)v20[1];
      if ( (__int64 **)(*v20)[1] != v20 || *v27 != v20 )
        __fastfail(3u);
      *v27 = (__int64 **)v26;
      v26[1] = (__int64)v27;
      v28 = v33;
      if ( *v33 != (__int64 *)&v32 )
        __fastfail(3u);
      v20[1] = (__int64 *)v33;
      *v20 = (__int64 *)&v32;
      *v28 = (__int64 *)v20;
      v33 = v20;
    }
    else if ( !v3 )
    {
      v22 = *v20;
      v23 = (__int64 **)v20[1];
      if ( (__int64 **)(*v20)[1] != v20 || *v23 != (__int64 *)v20 )
        __fastfail(3u);
      *v23 = v22;
      v22[1] = (__int64)v23;
      v24 = (__int64)v32;
      if ( (__int64 **)v32[1] != &v32 )
        __fastfail(3u);
      *v20 = v32;
      v20[1] = (__int64 *)&v32;
      v3 = v20;
      *(_QWORD *)(v24 + 8) = v20;
      v32 = (__int64 *)v20;
    }
  }
  while ( v14 != (__int64 *)(v2 + 8) );
  if ( !v3 )
  {
LABEL_20:
    *(_QWORD *)v2 = 0LL;
    *(_WORD *)(v2 + 38) = 0;
    *(_DWORD *)(v2 + 32) = 0;
  }
  else
  {
    *(_QWORD *)v2 = v3[6];
    *(_WORD *)(v2 + 38) = 1;
    *(_DWORD *)(v2 + 32) = *((_DWORD *)v3 + 14);
  }
  if ( v36 )
    _InterlockedIncrement(v36);
  v15 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 48LL);
  v16 = *(_BYTE *)(v15 + 48);
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v15, v17);
  __writecr8(v16);
  KeAbPostRelease(v15);
  v18 = v32;
  for ( result = (__int64 *)&v32; v18 != (__int64 *)&v32; result = (__int64 *)&v32 )
  {
    v25 = v18;
    LODWORD(BugCheckParameter4) = 0;
    v18 = (__int64 *)*v18;
    v35 = *((_DWORD *)v25 + 14);
    KeSetEventBoostPriorityEx(
      (__int64)(v25 + 2),
      0LL,
      &v35,
      0LL,
      BugCheckParameter4,
      v31,
      (__int64)v32,
      (__int64)v33,
      v34);
  }
  return result;
}
