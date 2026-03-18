/*
 * XREFs of PspUnregisterMonitorDeferred @ 0x140640C04
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     PsDeleteMonitorContextServerSilo @ 0x1401F57A8 (PsDeleteMonitorContextServerSilo.c)
 *     PspGetNextSilo @ 0x1405269DC (PspGetNextSilo.c)
 */

__int64 __fastcall PspUnregisterMonitorDeferred(__int64 a1)
{
  int MonitorContextServerSilo; // eax
  void (__fastcall *v3)(_QWORD, __int64); // r8
  int v4; // edi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 *i; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  void (__fastcall *v14)(__int64 *, __int64); // r8
  int v15; // r14d
  __int64 *NextSilo; // rax
  __int64 *v17; // rdi
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  MonitorContextServerSilo = PsGetMonitorContextServerSilo(a1, 0LL, &v19);
  v3 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 48);
  v4 = MonitorContextServerSilo;
  v5 = v19;
  if ( v3 )
    v3(0LL, v19);
  if ( v4 >= 0 )
  {
    PsDeleteMonitorContextServerSilo(0LL, v5);
    PsDereferenceMonitorContextServerSilo(v5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, v7, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  for ( i = 0LL; ; i = v17 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v17 = NextSilo;
    if ( !NextSilo )
      break;
    if ( (unsigned int)PsGetServerSiloState((__int64)NextSilo) - 1 <= 1 )
    {
      v11 = *(unsigned int *)(a1 + 104);
      v12 = *(_QWORD *)(*(_QWORD *)(v17[156] + 136) + 64LL);
      _m_prefetchw((const void *)(v12 + 8 * v11));
      if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 8 * v11), 2u) & 2) == 0 )
      {
        v13 = PsGetMonitorContextServerSilo(a1, v17, &v19);
        v14 = *(void (__fastcall **)(__int64 *, __int64))(a1 + 48);
        v15 = v13;
        if ( v14 )
          v14(v17, v19);
        if ( v15 >= 0 )
        {
          PsDeleteMonitorContextServerSilo(v17, v19);
          PsDereferenceMonitorContextServerSilo(v19);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
