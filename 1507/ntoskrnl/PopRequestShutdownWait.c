/*
 * XREFs of PopRequestShutdownWait @ 0x1405A7C70
 * Callers:
 *     PoRequestShutdownEvent @ 0x1405A7C34 (PoRequestShutdownEvent.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  unsigned __int8 v13; // bl
  signed __int32 v14; // eax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)257, 0x10uLL, 0x4C536F50u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = Object;
  ObfReferenceObject(Object);
  v6 = KeAbPreAcquire((ULONG_PTR)&PopShutdownListMutex, 0LL, 0LL, v5);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopShutdownListMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopShutdownListMutex, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14032F148 = (__int64)KeGetCurrentThread();
  dword_14032F170 = CurrentIrql;
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    v10 = dword_14032F170;
    PopShutdownThreadList = v4;
    qword_14032F148 = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopShutdownListMutex, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopShutdownListMutex, v11);
    __writecr8(v10);
  }
  else
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v4, 0);
    qword_14032F148 = 0LL;
    v13 = dword_14032F170;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&PopShutdownListMutex, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopShutdownListMutex, v14);
    __writecr8(v13);
    v3 = -1073741823;
  }
  KeAbPostRelease((ULONG_PTR)&PopShutdownListMutex);
  return v3;
}
