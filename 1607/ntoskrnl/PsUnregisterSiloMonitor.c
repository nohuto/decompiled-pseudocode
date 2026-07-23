/*
 * XREFs of PsUnregisterSiloMonitor @ 0x140681148
 * Callers:
 *     CmpInitServerSilo @ 0x1407AE8A8 (CmpInitServerSilo.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     PspAcquirePushLockExclusive @ 0x14013E708 (PspAcquirePushLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspGetHostSiloStorage @ 0x140171E28 (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x140682B4C (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x140682CD0 (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(unsigned int *P)
{
  __int64 *i; // rcx
  __int64 *NextSilo; // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD); // rcx
  PVOID *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 HostSiloStorage; // rax
  __int64 v12; // r8
  int v13; // edi
  _BYTE v14[48]; // [rsp+20h] [rbp-48h] BYREF

  PspAcquirePushLockExclusive();
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v14);
      for ( i = 0LL; ; i = v4 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v4 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          (*((void (__fastcall **)(__int64 *))P + 4))(v4);
      }
      if ( *((_BYTE *)P + 16) )
      {
        v5 = xHalTimerWatchdogStop();
        (*((void (__fastcall **)(__int64))P + 4))(v5);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
    }
    v6 = *(void (__fastcall **)(_QWORD))P;
    v7 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || *v7 != P )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v14);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v12) = 1;
    v13 = PspStorageRemoveObject(HostSiloStorage, P[5], v12, 0LL);
    KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
    if ( v13 != -1073741275 )
    {
      if ( v13 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(P[5]);
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
