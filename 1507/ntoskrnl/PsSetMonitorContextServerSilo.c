/*
 * XREFs of PsSetMonitorContextServerSilo @ 0x14015EC2C
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140593C50 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140593CBC (ExpWnfCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140593D20 (ObInitServerSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PspDereferenceMonitorServerSilo @ 0x140593698 (PspDereferenceMonitorServerSilo.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsSetMonitorContextServerSilo(__int64 a1, _QWORD *a2, char a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // r9
  _DWORD *ServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned int v18; // esi
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+70h] [rbp+28h]

  if ( a5 )
    *a5 = 0LL;
  v8 = a4 - 96;
  if ( *(_BYTE *)(a4 - 96 + 88) )
    return 3223060508LL;
  if ( *(_QWORD *)(v8 + 32) != a1 )
    return 3221225485LL;
  result = PspReferenceMonitorServerSilo();
  if ( (int)result >= 0 )
  {
    v10 = *(unsigned int *)(a1 + 120);
    ServerSiloGlobals = PsGetServerSiloGlobals(a2);
    if ( (unsigned int)v10 >= ServerSiloGlobals[18] )
    {
      v18 = -1073741811;
LABEL_25:
      PspDereferenceMonitorServerSilo(a1);
      return v18;
    }
    if ( *(_BYTE *)(a1 + 125) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v11);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v14, (ULONG_PTR)&SiloMonitorLock, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      CurrentIrql = 0;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&SiloMonitorNonpagedContextSpinLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock);
      }
    }
    v17 = *(_QWORD *)(*((_QWORD *)ServerSiloGlobals + 8) + 8 * v10) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v17 )
    {
      if ( !a3 )
      {
        if ( a5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 48));
          *a5 = v17 + 96;
        }
        v17 = 0LL;
        v18 = -1071906814;
        goto LABEL_18;
      }
      *(_QWORD *)(*((_QWORD *)ServerSiloGlobals + 8) + 8 * v10) = v8 | *(_QWORD *)(*((_QWORD *)ServerSiloGlobals + 8)
                                                                                 + 8 * v10) & 3LL;
      *(_QWORD *)(v8 + 40) = a2;
      *(_BYTE *)(v8 + 88) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
      *(_QWORD *)(v17 + 40) = 0LL;
      *(_BYTE *)(v17 + 88) = 0;
      if ( a5 )
      {
        v21 = v17 + 96;
        v17 = 0LL;
        *a5 = v21;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)ServerSiloGlobals + 8) + 8 * v10) = v8 | *(_QWORD *)(*((_QWORD *)ServerSiloGlobals + 8)
                                                                                 + 8 * v10) & 3LL;
      *(_QWORD *)(v8 + 40) = a2;
      *(_BYTE *)(v8 + 88) = 1;
      if ( a2 )
        ObfReferenceObjectWithTag(a2, 0x746C6644u);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
    }
    v18 = 0;
LABEL_18:
    if ( *(_BYTE *)(a1 + 125) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
      KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
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
    if ( v17 )
      PspDereferenceMonitorContextServerSilo((volatile signed __int32 *)v17);
    goto LABEL_25;
  }
  return result;
}
