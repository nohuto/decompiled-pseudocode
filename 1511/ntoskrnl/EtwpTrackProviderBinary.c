/*
 * XREFs of EtwpTrackProviderBinary @ 0x1404C015C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(HANDLE *a1)
{
  signed __int64 v1; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // r13
  char v10; // al
  __int64 SiloDriverState; // rbp
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 *v15; // rdi
  signed __int64 v16; // rax
  __int64 v17; // rtt
  unsigned int *v18; // rax
  __int64 v19; // rdx
  unsigned int *v20; // r12
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0LL;
  result = ObReferenceObjectByHandle(*a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v3 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = Object;
    v6 = (unsigned __int64 *)(*((_QWORD *)Object + 4) + 384LL);
    v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = Object;
    *(_QWORD *)(v5[4] + 392LL) = KeGetCurrentThread();
    v10 = v9[98];
    if ( (v10 & 0x20) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v9[98] = v10 | 0x20;
      SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
      v12 = 0LL;
      v13 = 8LL;
      do
      {
        v14 = v5[4];
        if ( *(_DWORD *)(v14 + v12 + 112) )
        {
          v18 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, *(unsigned __int16 *)(v14 + v12 + 118), 0);
          v20 = v18;
          if ( v18 )
          {
            LOBYTE(v19) = 1;
            EtwpProviderArrivalCallback(v18, v19, v9);
            EtwpReleaseLoggerContext(SiloDriverState, v20, 0);
          }
        }
        v12 += 32LL;
        --v13;
      }
      while ( v13 );
      PsDereferenceMonitorContextServerSilo(SiloDriverState);
    }
    *(_QWORD *)(v5[4] + 392LL) = 0LL;
    v15 = (__int64 *)(v5[4] + 384LL);
    _m_prefetchw(v15);
    v16 = *v15;
    if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v1 = v16 - 16;
    if ( (v16 & 2) != 0 || (v17 = *v15, v17 != _InterlockedCompareExchange64(v15, v1, v16)) )
      ExfReleasePushLock(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
