/*
 * XREFs of PspPointerDereferenceMonitorServerSilo @ 0x1406C2640
 * Callers:
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PspPointerDereferenceMonitorServerSilo(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 10, 0xFFFFFFFF) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v6, (ULONG_PTR)&SiloMonitorLock, v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = *(_QWORD **)P;
    v11 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v11 != P )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    _bittestandreset((signed __int32 *)MonitorContextIndexBitmap.Buffer, *((_DWORD *)P + 30));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *((_DWORD *)P + 8) = 0;
    ExFreePoolWithTag(P, 0x4D6C6953u);
  }
}
