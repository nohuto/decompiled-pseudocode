/*
 * XREFs of ExSweepHandleTable @ 0x140508B40
 * Callers:
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     ObKillProcess @ 0x14050BA98 (ObKillProcess.c)
 *     ObClearProcessHandleTable @ 0x14055AC34 (ObClearProcessHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

void __fastcall ExSweepHandleTable(__int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  ULONG_PTR v6; // rbx
  ULONG_PTR Process; // r12
  __int64 *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  bool v11; // al
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 4LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
LABEL_2:
  v8 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a1, v6);
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v8);
        v10 = *v8;
        if ( (*v8 & 1) != 0 )
          break;
        if ( v10 )
        {
          ExpBlockOnLockedHandleEntry(a1, v8, v10);
        }
        else
        {
LABEL_5:
          v6 += 4LL;
          v8 += 2;
          if ( (v6 & 0x3FF) == 0 )
          {
            v6 += 4LL;
            goto LABEL_2;
          }
        }
      }
      if ( v10 == _InterlockedCompareExchange64(v8, v10 - 1, v10) )
      {
        v11 = (int)ObCloseHandleTableEntry(a1, v8, Process, v6, a2, 1) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v11 )
          ++v3;
        goto LABEL_5;
      }
    }
  }
  v12 = KeAbPreAcquire(a1 + 64, 0LL, 0LL, v9);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 64), v12, a1 + 64, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_DWORD *)(a1 + 88) -= v3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
  KeAbPostRelease(a1 + 64);
  *(_BYTE *)(a1 + 44) |= 4u;
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
