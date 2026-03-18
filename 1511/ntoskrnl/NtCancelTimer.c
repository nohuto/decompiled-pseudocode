/*
 * XREFs of NtCancelTimer @ 0x1400EC6FC
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpCancelTimer @ 0x140091194 (ExpCancelTimer.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  NTSTATUS v6; // r15d
  _QWORD *v7; // rdi
  KSPIN_LOCK *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // rsi
  int v11; // r13d
  int v12; // ebx
  signed __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _BYTE *v19; // rcx
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v22; // [rsp+48h] [rbp-40h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-38h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  char v25; // [rsp+A0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v19 = CurrentState;
    if ( (unsigned __int64)CurrentState >= MmUserProbeAddress )
      v19 = (_BYTE *)MmUserProbeAddress;
    *v19 = *v19;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    CurrentThread = 0LL;
    v25 = 0;
    v7 = Object;
    v8 = (KSPIN_LOCK *)((char *)Object + 64);
    SpinLock = (PKSPIN_LOCK)((char *)Object + 64);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
    NewIrql = v9;
    v10 = (_QWORD *)v7[31];
    v22 = v10;
    if ( v10 )
    {
      KeReleaseSpinLock(v8, v9);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v14, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      v25 = 1;
      NewIrql = KeAcquireSpinLockRaiseToDpc(v8);
      v10 = (_QWORD *)v7[31];
      v22 = v10;
      v7[31] = 0LL;
      v7 = Object;
    }
    v11 = ExpCancelTimer((PKTIMER)v7) + 1;
    KeReleaseSpinLock(SpinLock, NewIrql);
    if ( v25 )
    {
      if ( v10 )
      {
        v16 = v7 + 32;
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v7 = Object;
    }
    v12 = *((_DWORD *)v7 + 1);
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v7 - 48);
    v13 = _InterlockedExchangeAdd64(v7 - 6, -v11) - v11;
    if ( v13 <= 0 )
    {
      if ( v13 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v13);
      ObpDeferObjectDeletion(v7 - 6);
    }
    if ( CurrentState )
      *CurrentState = v12;
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v6;
  }
  return result;
}
