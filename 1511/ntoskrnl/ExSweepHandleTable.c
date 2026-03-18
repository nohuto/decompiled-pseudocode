/*
 * XREFs of ExSweepHandleTable @ 0x140488230
 * Callers:
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     ObKillProcess @ 0x14044A8F4 (ObKillProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExSweepSingleHandle @ 0x14002DBA0 (ExSweepSingleHandle.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeStackAttachProcess @ 0x1400C7880 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400DF9CC (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x14065206C (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 */

void __fastcall ExSweepHandleTable(PRKPROCESS PROCESS, __int64 a2, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KPROCESS *v4; // rsi
  int v6; // r14d
  __int64 v7; // rbx
  signed __int64 *v8; // rdi
  signed __int64 v9; // r8
  char v10; // al
  char v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  char v14; // al
  __int64 v15; // rsi
  char v16; // si
  __int64 v17; // rdx
  int v18; // ebp
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  signed __int32 v22[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v23; // [rsp+20h] [rbp-B8h]
  unsigned __int8 v24; // [rsp+21h] [rbp-B7h]
  int v25; // [rsp+24h] [rbp-B4h]
  ULONG_PTR BugCheckParameter1; // [rsp+28h] [rbp-B0h]
  struct _KTHREAD *v27; // [rsp+30h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-A0h] BYREF
  struct _KAPC_STATE v29; // [rsp+68h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = PROCESS;
  v24 = a3;
  BugCheckParameter1 = (ULONG_PTR)PROCESS;
  v23 = 0;
  v27 = CurrentThread;
  if ( CurrentThread->ApcState.Process != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &v29);
    v23 = 1;
  }
  v6 = 0;
  v7 = 4LL;
  --CurrentThread->KernelApcDisable;
  v25 = 0;
  v8 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, 4LL);
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v8);
        v9 = *v8;
        if ( (*v8 & 1) == 0 )
          break;
        if ( v9 == _InterlockedCompareExchange64(v8, v9 - 1, v9) )
        {
          v10 = 1;
LABEL_10:
          if ( v10 )
          {
            v11 = 0;
            v12 = (*v8 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v8) & 0xFFF0) >> 8)];
            if ( !*(_QWORD *)(v13 + 168) )
              goto LABEL_20;
            if ( KeGetCurrentThread()->ApcState.Process != v4 )
            {
              KeStackAttachProcess(v4, &ApcState);
              v11 = 1;
            }
            if ( (*(unsigned __int8 (__fastcall **)(struct _KPROCESS *, unsigned __int64, __int64, _QWORD))(v13 + 168))(
                   v4,
                   v12 + 48,
                   v7,
                   v24) )
            {
LABEL_20:
              v15 = ((__int64)*(unsigned int *)v8 >> 17) & 7;
              if ( (v8[1] & 0x2000000) != 0 )
                LOBYTE(v15) = v15 | 8;
              v16 = v15 & 5;
              if ( (xmmword_140382290 & 0x40) != 0 )
              {
                v17 = v7;
                if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
                  v17 = v7 | 0x80000000LL;
                EtwpTraceHandle(4385LL, v17, v12 + 48, v13);
              }
              v18 = ExSweepSingleHandle(a2, v8);
              KeLeaveCriticalRegion();
              if ( (v16 & 4) != 0 )
              {
                LOBYTE(v19) = 1;
                SeCloseObjectAuditAlarm(v12 + 48, v7 & 0xFFFFFFFFFFFFFFFCuLL, v19);
              }
              v4 = (struct _KPROCESS *)BugCheckParameter1;
              ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v12);
              if ( v11 )
                KeUnstackDetachProcess(&ApcState);
              if ( v18 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v12, -v18);
              ObfDereferenceObjectWithTag((PVOID)(v12 + 48), 0x6E48624Fu);
              v14 = 1;
            }
            else
            {
              _InterlockedExchangeAdd64(v8, 1uLL);
              _InterlockedOr(v22, 0);
              if ( *(_QWORD *)(a2 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(a2 + 48), 0LL);
              KeLeaveCriticalRegion();
              if ( v11 )
                KeUnstackDetachProcess(&ApcState);
              v14 = 0;
            }
            CurrentThread = v27;
            --v27->KernelApcDisable;
            v6 = v25;
            if ( v14 )
              v6 = ++v25;
          }
          v7 += 4LL;
          v8 += 2;
          if ( (v7 & 0x3FF) == 0 )
          {
            v7 += 4LL;
            v8 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v7);
            if ( !v8 )
              goto LABEL_37;
          }
        }
      }
      if ( !v9 )
      {
        v10 = 0;
        goto LABEL_10;
      }
      ExpBlockOnLockedHandleEntry(a2, v8, v9);
    }
  }
LABEL_37:
  v20 = KeAbPreAcquire(a2 + 64, 0LL, 0LL);
  v21 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 64), v20, a2 + 64);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  *(_DWORD *)(a2 + 88) -= v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v23 == 1 )
    KeUnstackDetachProcess(&v29);
}
