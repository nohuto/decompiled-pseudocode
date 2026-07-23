/*
 * XREFs of PsStartSiloMonitor @ 0x14055FD28
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
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  char v6; // si
  int v7; // ebp
  __int64 v8; // rdx
  __int64 j; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rsi
  __int64 v18; // r8
  void (__fastcall *v19)(__int64); // rdx
  int v20; // esi
  __int64 v21; // rdx
  __int64 k; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  _BYTE v26[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  PspAcquirePushLockExclusive();
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v18 )
      {
        LOBYTE(v3) = 1;
        NextSilo = PspGetNextSilo(i, v3);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
        {
          v2 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_8;
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
      v17 = xHalTimerWatchdogStop();
      v2 = (*(__int64 (__fastcall **)(__int64))(a1 + 24))(v17);
      if ( v2 < 0 )
      {
        v19 = *(void (__fastcall **)(__int64))(a1 + 32);
        if ( v19 )
          v19(v17);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
      if ( v2 >= 0 )
      {
LABEL_8:
        v6 = 0;
        v7 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
        for ( j = 0LL; ; j = v11 )
        {
          LOBYTE(v8) = 1;
          v10 = PspGetNextSilo(j, v8);
          v11 = v10;
          if ( !v10 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v10) - 1) <= 2 )
          {
            ++v7;
            if ( (*(int (__fastcall **)(__int64))(a1 + 24))(v11) < 0 )
              v6 = 1;
          }
        }
        KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
        if ( v6 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v20 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
            for ( k = 0LL; ; k = v24 )
            {
              LOBYTE(v21) = 1;
              v23 = PspGetNextSilo(k, v21);
              v24 = v23;
              if ( !v23 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v23) - 1) <= 2 )
              {
                (*(void (__fastcall **)(__int64))(a1 + 32))(v24);
                ++v20;
              }
            }
            if ( v7 != v20 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v25 = xHalTimerWatchdogStop();
              (*(void (__fastcall **)(__int64))(a1 + 32))(v25);
            }
            KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
          }
          v2 = -1073741248;
        }
        else
        {
          v12 = (__int64 *)qword_1403013F8;
          if ( *(__int64 **)qword_1403013F8 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v12;
          *v12 = a1;
          qword_1403013F8 = a1;
        }
      }
    }
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return (unsigned int)v2;
}
