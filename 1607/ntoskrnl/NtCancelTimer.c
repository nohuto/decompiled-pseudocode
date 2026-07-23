/*
 * XREFs of NtCancelTimer @ 0x1400EBE20
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  _QWORD *v7; // rbx
  KSPIN_LOCK *v8; // r13
  KIRQL CurrentIrql; // r14
  __int64 v10; // r15
  int v11; // r14d
  int v12; // r13d
  signed __int64 v13; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  KIRQL v23; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  char v25; // [rsp+98h] [rbp+10h]
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v22 = (__int64)CurrentState;
    if ( (unsigned __int64)CurrentState >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v22 = *(_BYTE *)v22;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    CurrentThread = 0LL;
    v25 = 0;
    v7 = Object;
    v8 = (KSPIN_LOCK *)((char *)Object + 64);
    CurrentIrql = KeGetCurrentIrql();
    v23 = CurrentIrql;
    __writecr8(2uLL);
    KxAcquireSpinLock(v8);
    v10 = v7[31];
    if ( v10 )
    {
      KeReleaseSpinLock(v8, CurrentIrql);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v14, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v15 )
        v15[26] |= 1u;
      v25 = 1;
      v23 = KeAcquireSpinLockRaiseToDpc(v8);
      v10 = v7[31];
      v7[31] = 0LL;
      v7 = Object;
    }
    v11 = ExpCancelTimer((PKTIMER)v7) + 1;
    KxReleaseSpinLock(v8);
    __writecr8(v23);
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
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19, v20, v21);
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
      ObpDeferObjectDeletion((signed __int64)(v7 - 6));
    }
    if ( CurrentState )
      *CurrentState = v12;
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v6;
  }
  return result;
}
