/*
 * XREFs of PpmRegisterVetoList @ 0x1406B1BB8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall PpmRegisterVetoList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // ebx
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = KeGetCurrentThread();
  qword_14032E288 = (__int64)v11;
  if ( PpmIdleVetoList )
  {
    v12 = -1073741431;
  }
  else
  {
    PpmIdleVetoList = a1;
    v12 = 0;
  }
  if ( v11 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v13 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v14 = PpmIdlePolicyLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v13, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
