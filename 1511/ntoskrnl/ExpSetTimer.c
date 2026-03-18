/*
 * XREFs of ExpSetTimer @ 0x140090DFC
 * Callers:
 *     NtSetTimerEx @ 0x140090CA0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x14010564C (NtSetTimer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpCancelTimer @ 0x140091194 (ExpCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpCheckIRTimerAccess @ 0x1404C02DC (ExpCheckIRTimerAccess.c)
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
  __int64 v11; // rcx
  int v12; // r14d
  PKTIMER v13; // rsi
  __int64 v14; // r13
  KIRQL v15; // di
  int v16; // r12d
  ULONG v17; // r8d
  ULONG v18; // edx
  struct _KDPC *v19; // r9
  PKDPC v20; // rcx
  __int64 v21; // rdi
  signed __int64 v22; // rdx
  struct _KTHREAD *v23; // rdi
  struct _LIST_ENTRY *p_TimerListEntry; // rax
  struct _LIST_ENTRY *p_ThreadLock; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  struct _KTIMER *v29; // rsi
  __int64 **v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  struct _KTIMER *v33; // rsi
  struct _LIST_ENTRY *v34; // rcx
  struct _LIST_ENTRY *Flink; // rax
  _BYTE *v36; // rcx
  char v37; // [rsp+40h] [rbp-78h]
  KIRQL v38; // [rsp+41h] [rbp-77h]
  PKTIMER Timer; // [rsp+48h] [rbp-70h] BYREF
  int v40; // [rsp+50h] [rbp-68h]
  PKDPC Dpc; // [rsp+58h] [rbp-60h]
  LONG SignalState; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  unsigned int *p_Processor; // [rsp+70h] [rbp-48h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-40h]
  PKTIMER v46; // [rsp+80h] [rbp-38h]

  result = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, a2, (PVOID *)&Timer, 0LL);
  v12 = result;
  v13 = Timer;
  v46 = Timer;
  v40 = result;
  if ( result >= 0 )
  {
    v37 = 0;
    CurrentThread = 0LL;
    v14 = a6;
    if ( a6 )
    {
      if ( a7 )
      {
        LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
        v12 = ExpCheckIRTimerAccess(v11);
        v40 = v12;
        if ( v12 )
        {
          ObfDereferenceObjectWithTag(Timer, 0x746C6644u);
          return v12;
        }
        v13 = Timer;
      }
      if ( (int)qword_1402DDFA0 >= 2 || byte_1402DDF73 )
      {
        v37 = 1;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v27 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
        v28 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v27, (ULONG_PTR)&ExpWakeTimerLock);
        if ( v28 )
          *(_BYTE *)(v28 + 26) |= 1u;
        v13 = Timer;
      }
      else
      {
        v12 = 1073741861;
        v40 = 1073741861;
        v14 = 0LL;
      }
    }
    Dpc = 0LL;
    SpinLock = (PKSPIN_LOCK)&v13[1];
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v13[1]);
    v38 = v15;
    p_Processor = &v13[3].Processor;
    if ( !v37 && *(_QWORD *)&v13[3].Processor )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&v13[1], v15);
      v37 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v31 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v31, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v32 )
        *(_BYTE *)(v32 + 26) |= 1u;
      v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v13[1]);
      v13 = Timer;
    }
    v16 = ExpCancelTimer(v13) + 1;
    SignalState = v13->Header.SignalState;
    v17 = Period;
    LODWORD(v13[3].Dpc) = Period;
    v18 = TolerableDelay;
    LODWORD(v13[4].Dpc) = TolerableDelay;
    if ( a4 )
    {
      v23 = KeGetCurrentThread();
      v13 = Timer;
      KeInitializeApc(
        (__int64)&Timer[1].Header.WaitListHead,
        (__int64)v23,
        2,
        (__int64)ExpTimerApcRoutine,
        0LL,
        a4,
        a2,
        a5);
      Dpc = (PKDPC)&v23[1].StackBase;
      KxAcquireSpinLock((PKSPIN_LOCK)&v23[1].StackBase);
      p_TimerListEntry = &v13[3].TimerListEntry;
      p_ThreadLock = (struct _LIST_ENTRY *)&v23[1].ThreadLock;
      Blink = p_ThreadLock->Blink;
      v13[3].TimerListEntry.Flink = p_ThreadLock;
      v13[3].TimerListEntry.Blink = Blink;
      if ( Blink->Flink != p_ThreadLock )
        __fastfail(3u);
      Blink->Flink = p_TimerListEntry;
      p_ThreadLock->Blink = p_TimerListEntry;
      BYTE4(v13[3].Dpc) |= 1u;
      KxReleaseSpinLock((PKSPIN_LOCK)&Dpc->TargetInfoAsUlong);
      v19 = (struct _KDPC *)&v13[2].TimerListEntry;
      --v16;
      v17 = 0;
      v18 = TolerableDelay;
    }
    else
    {
      v19 = Dpc;
    }
    v20 = (PKDPC)((char *)&v13[3].Dpc + 4);
    Dpc = (PKDPC)((char *)&v13[3].Dpc + 4);
    if ( (BYTE4(v13[3].Dpc) & 2) != 0 )
    {
      v13[4].TimerListEntry.Blink = (struct _LIST_ENTRY *)a3->QuadPart;
      if ( a3->HighPart >= 0 )
        BYTE5(v13[3].Dpc) = 1;
      else
        BYTE5(v13[3].Dpc) = (v14 != 0) + 2;
    }
    else
    {
      KeSetCoalescableTimer(v13, *a3, v17, v18, v19);
      v20 = Dpc;
      if ( v14 )
      {
        _interlockedbittestandset(&v13->Header.Lock, 9u);
        v13 = Timer;
      }
    }
    v21 = *(_QWORD *)p_Processor;
    *(_QWORD *)p_Processor = v14;
    v20->Type ^= (v20->Type ^ (4 * a7)) & 4;
    KxReleaseSpinLock(SpinLock);
    __writecr8(v38);
    if ( v37 )
    {
      if ( v21 )
      {
        if ( !v14 )
        {
          v33 = v13 + 4;
          v34 = *(struct _LIST_ENTRY **)&v33->Header.Lock;
          Flink = v33->Header.WaitListHead.Flink;
          if ( *(struct _KTIMER **)(*(_QWORD *)&v33->Header.Lock + 8LL) != v33 || (struct _KTIMER *)Flink->Flink != v33 )
            __fastfail(3u);
          Flink->Flink = v34;
          v34->Blink = Flink;
          *(_QWORD *)&v33->Header.Lock = 0LL;
        }
      }
      else if ( v14 )
      {
        v29 = v13 + 4;
        v30 = (__int64 **)qword_1402D6188;
        *(_QWORD *)&v29->Header.Lock = &ExpWakeTimerList;
        v29->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v30;
        if ( *v30 != &ExpWakeTimerList )
          __fastfail(3u);
        *v30 = (__int64 *)&v29->Header.Lock;
        qword_1402D6188 = (__int64)v29;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( v21 )
        PoDestroyReasonContext(v21);
      v13 = Timer;
    }
    if ( v16 )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v13 - 48);
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v13[-1].Header.WaitListHead.Blink, -v16) - v16;
      if ( v22 <= 0 )
      {
        if ( v22 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Timer, 5uLL, v22);
        ObpDeferObjectDeletion(&v13[-1].Header.WaitListHead.Blink);
      }
    }
    if ( a10 )
    {
      if ( a2 )
      {
        v36 = a10;
        if ( (unsigned __int64)a10 >= MmUserProbeAddress )
          v36 = (_BYTE *)MmUserProbeAddress;
        *v36 = *v36;
        *a10 = SignalState;
      }
      else
      {
        *a10 = SignalState;
      }
    }
    return v12;
  }
  return result;
}
