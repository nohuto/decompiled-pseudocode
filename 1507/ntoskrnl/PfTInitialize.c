/*
 * XREFs of PfTInitialize @ 0x1405B64DC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     PfpParametersPropagate @ 0x1406B0108 (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14002B748 (KeInitializeGuardedMutex.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PfTAccessTracingInitialize @ 0x1403EC0C0 (PfTAccessTracingInitialize.c)
 *     PfFbBufferListInitialize @ 0x1405B678C (PfFbBufferListInitialize.c)
 *     PfTClearGlobals @ 0x1405B6830 (PfTClearGlobals.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r9
  volatile signed __int32 *v6; // rbx
  struct _FAST_MUTEX *v7; // rcx
  struct _KEVENT *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v15; // r14
  signed __int32 v16; // eax
  _DWORD v17[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall *v19)(_SLIST_ENTRY *); // [rsp+38h] [rbp-38h]
  __int64 (__fastcall *v20)(_DWORD *); // [rsp+40h] [rbp-30h]
  _DWORD v21[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 (__fastcall *v23)(_SLIST_ENTRY *); // [rsp+60h] [rbp-10h]
  LONG (__fastcall *v24)(_SLIST_ENTRY *); // [rsp+68h] [rbp-8h]

  PfTClearGlobals();
  if ( !a3 )
    *(_QWORD *)a1 = 0LL;
  PfKernelGlobals = 0x23C34600uLL / KeQueryTimeIncrement();
  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_WORD *)(a1 + 34) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_DWORD *)(a1 + 24) &= 0xFFFFFFF0;
  *(_WORD *)(a1 + 32) = 2;
  memset((void *)(a1 + 64), 0, 0x28uLL);
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
  *(_WORD *)(a1 + 72) = 0;
  v6 = (volatile signed __int32 *)(a1 + 560);
  v7 = (struct _FAST_MUTEX *)(a1 + 560);
  if ( a3 )
  {
    v12 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, v5);
    v13 = v12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v6, 0) )
      ExpAcquireFastMutexContended(a1 + 560, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    *(_QWORD *)(a1 + 568) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 608) = CurrentIrql;
  }
  else
  {
    KeInitializeGuardedMutex(v7);
  }
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  if ( a3 )
  {
    v15 = *(_BYTE *)(a1 + 608);
    *(_QWORD *)(a1 + 568) = 0LL;
    v16 = _InterlockedCompareExchange(v6, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 560), v16);
    __writecr8(v15);
    KeAbPostRelease(a1 + 560);
  }
  else
  {
    PfTAccessTracingInitialize(a1, (__int64)&PfKernelGlobals, 0);
  }
  v8 = (struct _KEVENT *)(a1 + 136);
  if ( a3 )
  {
    KeResetEvent(v8);
    KeResetEvent((PRKEVENT)(a1 + 160));
    KeResetEvent((PRKEVENT)(a1 + 112));
    KeResetEvent((PRKEVENT)(a1 + 200));
  }
  else
  {
    KeInitializeEvent(v8, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 160), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 112), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  }
  v17[0] = -827260927;
  v20 = PfpSectInfoHandleFullBuffer;
  v17[1] = 1280206416;
  v19 = PfpSectInfoHandleOutOfBuffers;
  LOBYTE(v9) = a3;
  v17[2] = 1;
  v17[3] = 64;
  v18 = 64LL;
  PfFbBufferListInitialize(a1 + 224, v17, v9);
  InitializeSListHead((PSLIST_HEADER)(a1 + 480));
  *(_DWORD *)(a1 + 496) = -1;
  v24 = PfpEventHandleFullBuffer;
  v21[0] = -827260926;
  LOBYTE(v10) = a3;
  v23 = PfpEventHandleOutOfBuffers;
  v21[1] = 1279616592;
  v21[2] = 512;
  v21[3] = 48;
  v22 = 64LL;
  return PfFbBufferListInitialize(a1 + 352, v21, v10);
}
