/*
 * XREFs of ExpSetTimer @ 0x140065EC0
 * Callers:
 *     NtSetTimerEx @ 0x140065D60 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1401362E8 (NtSetTimer.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
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
 *     ExpCheckIRTimerAccess @ 0x140557A34 (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __fastcall ExpSetTimer(
        void *a1,
        KPROCESSOR_MODE a2,
        LARGE_INTEGER *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG Period,
        ULONG TolerableDelay,
        _BYTE *a10)
{
  NTSTATUS result; // eax
  __int64 v11; // r9
  char *v12; // rbx
  char v13; // r15
  __int64 v14; // r12
  volatile signed __int32 *v15; // r14
  __int64 CurrentIrql; // rdi
  PKDPC *v17; // r13
  int v18; // edi
  ULONG v19; // r8d
  ULONG v20; // ecx
  struct _KDPC *v21; // rdx
  _BYTE *v22; // r15
  PKDPC v23; // rcx
  signed __int64 v24; // rax
  struct _KDPC *v25; // r15
  volatile signed __int32 *p_ProcessorHistory; // r15
  char *v27; // rcx
  PKDEFERRED_ROUTINE *p_DeferredRoutine; // rax
  char **DeferredContext; // rdx
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 *v34; // rbx
  __int64 **v35; // rax
  int v36; // edi
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int8 v39; // bl
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _BYTE *v43; // rcx
  char v44; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  int v46; // [rsp+50h] [rbp-68h]
  int v47; // [rsp+54h] [rbp-64h]
  PKDPC Dpc; // [rsp+58h] [rbp-60h]
  int v49; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  __int64 v51; // [rsp+70h] [rbp-48h]
  PVOID v52; // [rsp+78h] [rbp-40h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  result = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, a2, &Object, 0LL);
  v46 = result;
  v12 = (char *)Object;
  v52 = Object;
  v47 = result;
  if ( result >= 0 )
  {
    v13 = 0;
    v44 = 0;
    CurrentThread = 0LL;
    v14 = a6;
    if ( a6 )
    {
      if ( a7 )
      {
        v36 = ExpCheckIRTimerAccess((unsigned __int8)KeGetCurrentThread()->gap0[10]);
        v46 = v36;
        v47 = v36;
        if ( v36 )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          return v36;
        }
        v12 = (char *)Object;
      }
      if ( (int)qword_14032E560 >= 2 || byte_14032E533 )
      {
        v13 = 1;
        v44 = 1;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v30 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, v11);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v30, &ExpWakeTimerLock);
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v12 = (char *)Object;
      }
      else
      {
        v46 = 1073741861;
        v47 = 1073741861;
        v14 = 0LL;
      }
    }
    Dpc = 0LL;
    v15 = (volatile signed __int32 *)(v12 + 64);
    CurrentIrql = KeGetCurrentIrql();
    v51 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12 + 64);
    }
    else
    {
      if ( _interlockedbittestandset64(v15, 0LL) )
        KxWaitForSpinLockAndAcquire(v12 + 64);
      v12 = (char *)Object;
    }
    v17 = (PKDPC *)(v12 + 248);
    if ( !v13 && *((_QWORD *)v12 + 31) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v15, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      __writecr8((unsigned __int8)CurrentIrql);
      v44 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v37 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, v11);
      v38 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v37, &ExpWakeTimerLock);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v39 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v15);
      }
      else if ( _interlockedbittestandset64(v15, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v15);
      }
      LOBYTE(v51) = v39;
      v12 = (char *)Object;
    }
    v18 = ExpCancelTimer((PKTIMER)v12) + 1;
    v49 = *((_DWORD *)v12 + 1);
    v19 = Period;
    *((_DWORD *)v12 + 60) = Period;
    v20 = TolerableDelay;
    *((_DWORD *)v12 + 76) = TolerableDelay;
    if ( a4 )
    {
      v25 = (struct _KDPC *)KeGetCurrentThread();
      Dpc = v25;
      v12 = (char *)Object;
      KeInitializeApc((__int64)Object + 72, (__int64)v25, 2, (__int64)ExpTimerApcRoutine, 0LL, a4, a2, a5);
      p_ProcessorHistory = (volatile signed __int32 *)&v25[24].ProcessorHistory;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(p_ProcessorHistory);
      }
      else
      {
        if ( _interlockedbittestandset64(p_ProcessorHistory, 0LL) )
          KxWaitForSpinLockAndAcquire(p_ProcessorHistory);
        v12 = (char *)Object;
      }
      v27 = v12 + 224;
      p_DeferredRoutine = &Dpc[24].DeferredRoutine;
      DeferredContext = (char **)Dpc[24].DeferredContext;
      *((_QWORD *)v12 + 28) = (char *)Dpc + 1560;
      *((_QWORD *)v12 + 29) = DeferredContext;
      if ( *DeferredContext != (char *)p_DeferredRoutine )
        __fastfail(3u);
      *DeferredContext = v27;
      p_DeferredRoutine[1] = (PKDEFERRED_ROUTINE)v27;
      v12[244] |= 1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(p_ProcessorHistory, retaddr);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)p_ProcessorHistory, 0LL);
        v12 = (char *)Object;
      }
      v21 = (struct _KDPC *)(v12 + 160);
      --v18;
      v19 = 0;
      v20 = TolerableDelay;
    }
    else
    {
      v21 = Dpc;
    }
    v22 = v12 + 244;
    if ( (v12[244] & 2) != 0 )
    {
      *((LARGE_INTEGER *)v12 + 37) = *a3;
      if ( a3->HighPart >= 0 )
        v12[245] = 1;
      else
        v12[245] = (v14 != 0) + 2;
    }
    else
    {
      KeSetCoalescableTimer((PKTIMER)v12, *a3, v19, v20, v21);
      if ( v14 )
      {
        _interlockedbittestandset((volatile signed __int32 *)v12, 9u);
        v12 = (char *)Object;
      }
    }
    v23 = *v17;
    Dpc = *v17;
    *v17 = (PKDPC)v14;
    *v22 ^= (*v22 ^ (4 * a7)) & 4;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v15, retaddr);
      v23 = Dpc;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      v12 = (char *)Object;
    }
    __writecr8((unsigned __int8)v51);
    if ( v44 )
    {
      if ( v23 )
      {
        if ( !v14 )
        {
          v40 = v12 + 256;
          v41 = *v40;
          v42 = (_QWORD *)v40[1];
          if ( *(_QWORD **)(*v40 + 8LL) != v40 || (_QWORD *)*v42 != v40 )
            __fastfail(3u);
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          *v40 = 0LL;
        }
      }
      else if ( v14 )
      {
        v34 = (__int64 *)(v12 + 256);
        v35 = (__int64 **)qword_1403252B8;
        *v34 = (__int64)&ExpWakeTimerList;
        v34[1] = (__int64)v35;
        if ( *v35 != &ExpWakeTimerList )
          __fastfail(3u);
        *v35 = v34;
        qword_1403252B8 = (__int64)v34;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      v32 = CurrentThread;
      v33 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v33;
      if ( !v33
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
        && !v32->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v32);
      }
      if ( Dpc )
        PoDestroyReasonContext(Dpc);
      v12 = (char *)Object;
    }
    if ( v18 )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v12 - 48);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v12 - 6, -v18) - v18;
      if ( v24 <= 0 )
      {
        if ( v24 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v24);
        ObpDeferObjectDeletion((signed __int64)(v12 - 48));
      }
    }
    if ( !a10 )
      return v46;
    if ( !a2 )
    {
      *a10 = v49;
      return v46;
    }
    v43 = a10;
    if ( (unsigned __int64)a10 >= MmUserProbeAddress )
      v43 = (_BYTE *)MmUserProbeAddress;
    *v43 = *v43;
    *a10 = v49;
    return v46;
  }
  return result;
}
