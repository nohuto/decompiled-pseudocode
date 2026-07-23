/*
 * XREFs of ExpSetTimer @ 0x1400ED6DC
 * Callers:
 *     NtSetTimerEx @ 0x1400EDCEC (NtSetTimerEx.c)
 *     NtSetTimer @ 0x14010DEAC (NtSetTimer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExpCheckIRTimerAccess @ 0x1404D03D8 (ExpCheckIRTimerAccess.c)
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
  _LIST_ENTRY *p_TimerListEntry; // rax
  struct _LIST_ENTRY *p_ThreadLock; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  _BYTE *v27; // rax
  _BYTE *v28; // rdi
  struct _KTIMER *v29; // rsi
  struct _KTIMER **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // rax
  _BYTE *v35; // rdi
  struct _KTIMER *v36; // rsi
  struct _LIST_ENTRY *v37; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v39; // rcx
  char v40; // [rsp+40h] [rbp-78h]
  KIRQL v41; // [rsp+41h] [rbp-77h]
  PKTIMER Timer; // [rsp+48h] [rbp-70h] BYREF
  int v43; // [rsp+50h] [rbp-68h]
  PKDPC Dpc; // [rsp+58h] [rbp-60h]
  LONG SignalState; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  unsigned int *p_Processor; // [rsp+70h] [rbp-48h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-40h]
  PKTIMER v49; // [rsp+80h] [rbp-38h]

  result = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, a2, (PVOID *)&Timer, 0LL);
  v12 = result;
  v13 = Timer;
  v49 = Timer;
  v43 = result;
  if ( result >= 0 )
  {
    v40 = 0;
    CurrentThread = 0LL;
    v14 = a6;
    if ( a6 )
    {
      if ( a7 )
      {
        LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
        v12 = ExpCheckIRTimerAccess(v11);
        v43 = v12;
        if ( v12 )
        {
          ObfDereferenceObjectWithTag(Timer, 0x746C6644u);
          return v12;
        }
        v13 = Timer;
      }
      if ( (int)qword_140303EE0 >= 2 || byte_140303EB3 )
      {
        v40 = 1;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v27 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
        v28 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v27, (ULONG_PTR)&ExpWakeTimerLock);
        if ( v28 )
          v28[26] |= 1u;
        v13 = Timer;
      }
      else
      {
        v12 = 1073741861;
        v43 = 1073741861;
        v14 = 0LL;
      }
    }
    Dpc = 0LL;
    SpinLock = (PKSPIN_LOCK)&v13[1];
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v13[1]);
    v41 = v15;
    p_Processor = &v13[3].Processor;
    if ( !v40 && *(_QWORD *)&v13[3].Processor )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&v13[1], v15);
      v40 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v34 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v34, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v35 )
        v35[26] |= 1u;
      v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v13[1]);
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
      KeInitializeApc((_DWORD)Timer + 72, (_DWORD)v23, 2, (unsigned int)ExpTimerApcRoutine, 0LL, a4, a2, a5);
      Dpc = (PKDPC)&v23[1].StackBase;
      KxAcquireSpinLock((PKSPIN_LOCK)&v23[1].StackBase);
      p_TimerListEntry = &v13[3].TimerListEntry;
      p_ThreadLock = (struct _LIST_ENTRY *)&v23[1].ThreadLock;
      Blink = p_ThreadLock->Blink;
      if ( Blink->Flink != p_ThreadLock )
        __fastfail(3u);
      p_TimerListEntry->Flink = p_ThreadLock;
      v13[3].TimerListEntry.Blink = Blink;
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
    __writecr8(v41);
    if ( v40 )
    {
      if ( v21 )
      {
        if ( !v14 )
        {
          v36 = v13 + 4;
          v37 = *(struct _LIST_ENTRY **)&v36->Header.Lock;
          Flink = v36->Header.WaitListHead.Flink;
          if ( *(struct _KTIMER **)(*(_QWORD *)&v36->Header.Lock + 8LL) != v36 || (struct _KTIMER *)Flink->Flink != v36 )
            __fastfail(3u);
          Flink->Flink = v37;
          v37->Blink = Flink;
          *(_QWORD *)&v36->Header.Lock = 0LL;
        }
      }
      else if ( v14 )
      {
        v29 = v13 + 4;
        v30 = (struct _KTIMER **)qword_1402FB5C8;
        if ( *(__int64 **)qword_1402FB5C8 != &ExpWakeTimerList )
          __fastfail(3u);
        *(_QWORD *)&v29->Header.Lock = &ExpWakeTimerList;
        v29->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v30;
        *v30 = v29;
        qword_1402FB5C8 = (__int64)v29;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v31, v32, v33);
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
        ObpDeferObjectDeletion((signed __int64)&v13[-1].Header.WaitListHead.Blink);
      }
    }
    if ( a10 )
    {
      if ( a2 )
      {
        v39 = (__int64)a10;
        if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
          v39 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v39 = *(_BYTE *)v39;
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
