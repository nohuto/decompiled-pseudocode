/*
 * XREFs of PspFreeMonitorContextServerSilo @ 0x1406C1D2C
 * Callers:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeMonitorContextServerSilo(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v4; // rbp
  void (__fastcall *Count)(_QWORD *); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  PVOID *v13; // rax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  unsigned __int64 v16; // rtt

  v4 = (struct _EX_RUNDOWN_REF *)P[4];
  Count = (void (__fastcall *)(_QWORD *))v4[11].Count;
  if ( Count )
    Count(P + 12);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v8, (ULONG_PTR)&SiloMonitorLock, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (_QWORD *)*P;
  v13 = (PVOID *)P[1];
  if ( *(_QWORD **)(*P + 8LL) != P || *v13 != P )
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
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
  ExFreePoolWithTag(P, 0x436C6953u);
  _m_prefetchw(&v4[6]);
  v16 = v4[6].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&v4[6], v16 - 2, v16) )
    ExfReleaseRundownProtection(v4 + 6);
}
