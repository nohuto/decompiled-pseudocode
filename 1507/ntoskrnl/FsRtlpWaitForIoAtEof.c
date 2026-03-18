/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x1400D5A80
 * Callers:
 *     FsRtlGetIoAtEof @ 0x1400D5760 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x1400D57D0 (FsRtlAcquireEofLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // r14
  int v6; // ebx
  bool v7; // cc
  int v8; // edx
  KPRIORITY PriorityThread; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // r14
  unsigned __int32 v15; // eax
  ULONG_PTR v16; // r14
  __int64 v17; // r9
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // r13
  KPRIORITY v21; // eax
  bool v22; // cc
  int v23; // eax
  _QWORD v24[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v26; // [rsp+42h] [rbp-2Eh]
  int v27; // [rsp+44h] [rbp-2Ch]
  _QWORD v28[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v29; // [rsp+68h] [rbp-8h]
  int v30; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)a1;
  v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v6 = 0;
  v7 = v6 < 2;
  if ( v6 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v6 = 2;
    v7 = v6 < 2;
  }
  if ( !v7 )
    v6 = 2;
  if ( v6 > 1 && !*(_BYTE *)(a1 + 36) )
  {
    v8 = (*(_DWORD *)(v3 + 1724) >> 9) & 7;
    if ( (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 772LL) & 0x100000) != 0 )
      v8 = 0;
    if ( v8 < 2 )
    {
      if ( (struct _KTHREAD *)v3 == KeGetCurrentThread() && *(_DWORD *)(v3 + 1788) )
        v8 = 2;
      if ( v8 < 2 )
      {
        PsBoostThreadIoEx(*(_QWORD *)a1, 0, 0, 0LL);
        IoBoostThreadIoPriority(v3, (unsigned int)v6, 0LL);
        *(_BYTE *)(a1 + 36) = 1;
      }
    }
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v3) )
      KeSetPriorityBoost(v3, (unsigned int)PriorityThread);
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = a1 + 8;
  while ( v10 != v11 )
  {
    v21 = *(_DWORD *)(v10 + 56);
    v22 = PriorityThread <= v21;
    if ( PriorityThread <= v21 )
    {
      if ( *(_DWORD *)(v10 + 60) >= v6 )
        break;
      v22 = PriorityThread <= v21;
    }
    if ( !v22 )
      v21 = PriorityThread;
    *(_DWORD *)(v10 + 56) = v21;
    v23 = *(_DWORD *)(v10 + 60);
    if ( v6 > v23 )
      v23 = v6;
    *(_DWORD *)(v10 + 60) = v23;
    v10 = *(_QWORD *)(v10 + 8);
  }
  v26 = 6;
  v28[1] = v28;
  Object = 1;
  v28[0] = v28;
  v12 = *(_QWORD **)(a1 + 16);
  v27 = 0;
  v28[3] = CurrentThread;
  v29 = PriorityThread;
  v30 = v6;
  v28[2] = a2;
  v24[0] = a1 + 8;
  v24[1] = v12;
  if ( *v12 != v11 )
    __fastfail(3u);
  *v12 = v24;
  *(_QWORD *)(a1 + 16) = v24;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v14 = *(_BYTE *)(v13 + 48);
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)v13, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended(v13, v15);
  __writecr8(v14);
  KeAbPostRelease(v13);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v18 = KeAbPreAcquire(v16, 0LL, 0LL, v17);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v16, 0) )
    ExpAcquireFastMutexContended(v16);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v16 + 48) = CurrentIrql;
  if ( a2 >= 0 && a2 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( v6 < 2 && v30 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
