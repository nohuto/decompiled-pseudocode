/*
 * XREFs of NtCancelTimer @ 0x140129E6C
 * Callers:
 *     <none>
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // r13
  volatile signed __int32 *v9; // rsi
  __int64 CurrentIrql; // rbx
  _QWORD *v11; // r14
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  signed __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r14
  unsigned __int8 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int16 v23; // ax
  _BYTE *v24; // rcx
  NTSTATUS v25; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  _QWORD *v28; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v30; // [rsp+98h] [rbp+10h]
  _QWORD *v31; // [rsp+A8h] [rbp+20h]
  int v32; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v24 = CurrentState;
    if ( (unsigned __int64)CurrentState >= MmUserProbeAddress )
      v24 = (_BYTE *)MmUserProbeAddress;
    *v24 = *v24;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  v25 = result;
  if ( result >= 0 )
  {
    CurrentThread = 0LL;
    v30 = 0;
    v9 = (volatile signed __int32 *)((char *)Object + 64);
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((char *)Object + 64);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v9);
    }
    v31 = Object;
    v11 = (_QWORD *)*((_QWORD *)Object + 31);
    v28 = v11;
    if ( v11 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v9, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      __writecr8((unsigned __int8)CurrentIrql);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, v7);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v15, (ULONG_PTR)&ExpWakeTimerLock, v16);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v30 = 1;
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v9);
      }
      else if ( _interlockedbittestandset64(v9, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v9);
      }
      LOBYTE(v27) = v19;
      v11 = (_QWORD *)v31[31];
      v28 = v11;
      v31[31] = 0LL;
    }
    v32 = ExpCancelTimer((PKTIMER)Object, v6) + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v9, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    __writecr8((unsigned __int8)v27);
    if ( v30 )
    {
      if ( v11 )
      {
        v20 = (char *)Object + 256;
        v21 = *((_QWORD *)Object + 32);
        v22 = (_QWORD *)*((_QWORD *)Object + 33);
        if ( *(PVOID *)(v21 + 8) != (char *)Object + 256 || (_QWORD *)*v22 != v20 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *v20 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      v23 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v12 = *((_DWORD *)Object + 1);
    v13 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Object - 48);
    v14 = _InterlockedExchangeAdd64(v13, -v32) - v32;
    if ( v14 <= 0 )
    {
      if ( v14 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v14);
      ObpDeferObjectDeletion((signed __int64)v13);
    }
    if ( CurrentState )
      *CurrentState = v12;
    if ( v11 )
      PoDestroyReasonContext(v11);
    return v25;
  }
  return result;
}
