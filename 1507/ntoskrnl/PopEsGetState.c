/*
 * XREFs of PopEsGetState @ 0x1405832B8
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall PopEsGetState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  unsigned int v10; // ebx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rdx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopEsLock, v5, (ULONG_PTR)&PopEsLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = PopEsState;
  qword_14032D448 = (__int64)KeGetCurrentThread();
  if ( qword_14032D448 )
    qword_14032D448 = 0LL;
  _m_prefetchw(&PopEsLock);
  v11 = PopEsLock - 16;
  if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (PopEsLock & 2) != 0
    || (v12 = PopEsLock, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v11, PopEsLock)) )
  {
    ExfReleasePushLock(&PopEsLock, v6);
  }
  KeAbPostRelease((ULONG_PTR)&PopEsLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
