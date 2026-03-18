/*
 * XREFs of PsDeleteMonitorContextServerSilo @ 0x140243B90
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406C1E74 (PspInitializeServerSiloDeferred.c)
 *     PspNotifySeverSiloDeletion @ 0x1406C2388 (PspNotifySeverSiloDeletion.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PsDeleteMonitorContextServerSilo(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  _QWORD *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r9
  _QWORD *ServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // r12
  char v13; // si
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1 - 96;
  v2 = *(_QWORD *)(a1 - 96 + 32);
  v3 = *(_QWORD **)(a1 - 96 + 40);
  v4 = *(unsigned int *)(v2 + 120);
  ServerSiloGlobals = PsGetServerSiloGlobals(v3);
  if ( (unsigned int)v4 < *((_DWORD *)ServerSiloGlobals + 18) )
  {
    if ( *(_BYTE *)(v2 + 125) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v5);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL);
      v11 = v8;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v8, (ULONG_PTR)&SiloMonitorLock, v9);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      CurrentIrql = 0;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock);
      }
    }
    v13 = *(_BYTE *)(v1 + 88);
    if ( v13 && (*(_QWORD *)(ServerSiloGlobals[8] + 8 * v4) & 0xFFFFFFFFFFFFFFFCuLL) == v1 )
    {
      *(_QWORD *)(ServerSiloGlobals[8] + 8 * v4) &= 3uLL;
      *(_QWORD *)(v1 + 40) = 0LL;
      *(_BYTE *)(v1 + 88) = 0;
    }
    if ( *(_BYTE *)(v2 + 125) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
      KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
      v14 = KeGetCurrentThread();
      v15 = v14->KernelApcDisable + 1;
      v14->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
        && !v14->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&SiloMonitorNonpagedContextSpinLock, retaddr);
      else
        _InterlockedAnd64(&SiloMonitorNonpagedContextSpinLock, 0LL);
      __writecr8(CurrentIrql);
    }
    if ( v13 )
    {
      PspDereferenceMonitorContextServerSilo((volatile signed __int32 *)v1);
      if ( v3 )
        ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    }
  }
}
