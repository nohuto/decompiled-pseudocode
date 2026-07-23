/*
 * XREFs of EtwpServerSiloCreateNotify @ 0x140526A2C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140491CDC (ExAllocateCacheAwareRundownProtection.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwpServerSiloCreateNotify(_QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v3; // rbx
  char *v4; // rsi
  int v5; // r13d
  _WORD *v6; // r12
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebp
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  unsigned __int64 *v13; // r14
  __int64 v14; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // r8d
  _BYTE *v19; // r9
  _QWORD *v20; // r10
  char *v21; // rdx
  signed __int64 v22; // rax
  unsigned __int64 v23; // rtt
  void *v24; // [rsp+68h] [rbp+10h] BYREF

  result = PsAllocateMonitorContextServerSilo(EtwSiloMonitor, 5032LL, &v24);
  v3 = 0LL;
  if ( (int)result >= 0 )
  {
    v4 = (char *)v24;
    memset(v24, 0, 0x13A8uLL);
    v5 = PsSetMonitorContextServerSilo(EtwSiloMonitor, a1, 1, (__int64)v4, 0LL);
    if ( v5 >= 0 )
    {
      v6 = v4 + 5008;
      *((_WORD *)v4 + 2504) = 3;
      v7 = v4 + 1424;
      v8 = 64LL;
      do
      {
        v7[6] = 0LL;
        v9 = v7;
        v10 = 3LL;
        do
        {
          v9[1] = v9;
          *v9 = v9;
          v9 += 2;
          --v10;
        }
        while ( v10 );
        v7 += 7;
        --v8;
      }
      while ( v8 );
      v11 = 0;
      while ( 1 )
      {
        *(_QWORD *)&v4[8 * v11 + 912] = 1LL;
        CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
        *(_QWORD *)&v4[8 * v11 + 400] = CacheAwareRundownProtection;
        if ( !CacheAwareRundownProtection )
          break;
        if ( ++v11 >= 0x40 )
        {
          if ( !a1 )
          {
            EtwpSiloState = (__int64)v4;
            qword_1402C7EA8 = (__int64)(v4 + 912);
          }
          memset(v4, 0, 0x190uLL);
          v13 = (unsigned __int64 *)(v4 + 384);
          *(GUID *)(v4 + 24) = SecurityProviderGuid;
          *((_QWORD *)v4 + 48) = 0LL;
          v4[376] = PsIsHostSilo((__int64)a1);
          v14 = PsAttachSiloToCurrentThread(a1);
          EtwpInitializeAutoLoggers();
          PsDetachSiloFromCurrentThread(v14);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v16 = KeAbPreAcquire((ULONG_PTR)(v4 + 384), 0LL, 0LL);
          v17 = v16;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 96, 0LL) )
            ExfAcquirePushLockExclusiveEx(v13, v16, (ULONG_PTR)v13);
          if ( v17 )
            *(_BYTE *)(v17 + 26) |= 1u;
          v18 = 0;
          v19 = v24;
          v20 = v24;
          v21 = (char *)v24 + 116;
          *((_QWORD *)v24 + 49) = KeGetCurrentThread();
          do
          {
            if ( *v6 )
            {
              *((_WORD *)v21 + 1) = *v6;
              *((_DWORD *)v21 - 1) = 1;
              *v21 = -1;
              *(_QWORD *)(v21 + 12) = -1LL;
              *(_QWORD *)(v21 + 20) = 0LL;
              *((_DWORD *)v21 + 1) = 64;
              v19[5024] |= 1 << v18;
            }
            ++v18;
            ++v6;
            v21 += 32;
          }
          while ( v18 < 8 );
          v20[49] = 0LL;
          _m_prefetchw(v13);
          v22 = *v13;
          if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v3 = v22 - 16;
          if ( (v22 & 2) != 0
            || (v23 = *v13, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v3, v22)) )
          {
            ExfReleasePushLock(v13);
          }
          KeAbPostRelease((ULONG_PTR)v13);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v4 = (char *)v24;
          goto LABEL_25;
        }
      }
      v5 = -1073741801;
      if ( !a1 )
        KeBugCheckEx(0x11Du, 8uLL, v11, 0LL, 0LL);
    }
LABEL_25:
    PsDereferenceMonitorContextServerSilo((__int64)v4);
    return (unsigned int)v5;
  }
  return result;
}
