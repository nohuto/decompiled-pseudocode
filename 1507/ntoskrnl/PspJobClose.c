/*
 * XREFs of PspJobClose @ 0x14054DB88
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _ERESOURCE *v6; // r15
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r14
  void *v11; // r14
  __int16 v12; // ax
  __int16 v13; // ax

  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1296), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    v6 = (struct _ERESOURCE *)(a2 + 56);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      ExReleaseResourceLite(v6);
      if ( CurrentThread )
      {
        v13 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite(v6, 1u);
    }
    v8 = KeAbPreAcquire(a2 + 1024, 0LL, 0LL, v7);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1024), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1024), v8, a2 + 1024, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1024));
    KeAbPostRelease(a2 + 1024);
    ExReleaseResourceLite(v6);
    if ( CurrentThread )
    {
      v12 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( v11 )
      ObfDereferenceObject(v11);
  }
}
