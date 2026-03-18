/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x140667F30
 * Callers:
 *     NtDebugActiveProcess @ 0x1406685CC (NtDebugActiveProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x140666EA8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140668390 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  int v5; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // si
  PVOID v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *NextProcessThread; // rbx
  unsigned __int8 v15; // di
  signed __int32 v16; // eax
  PRKEVENT v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int8 v20; // r15
  struct _KEVENT *Flink; // r15
  __int64 v22; // rcx
  struct _KEVENT *v23; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rcx
  struct _LIST_ENTRY *v30; // rax
  LONG v31; // eax
  unsigned __int64 v32; // rtt
  UCHAR Type; // bl
  signed __int32 v34; // eax
  unsigned __int8 v35; // bl
  signed __int32 v36; // eax
  __int64 *v37; // rax
  struct _KTHREAD *v39; // [rsp+30h] [rbp-30h]
  PVOID v40[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v41; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v42; // [rsp+50h] [rbp-10h]
  char v43; // [rsp+A8h] [rbp+48h]
  char v44; // [rsp+B0h] [rbp+50h]
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF

  Object = a4;
  CurrentThread = KeGetCurrentThread();
  v42 = (struct _KEVENT *)&v41;
  v39 = CurrentThread;
  v41 = (__int64 *)&v41;
  v43 = 1;
  v5 = a3;
  v44 = 0;
  if ( a3 >= 0 )
    v5 = 0;
  else
    Object = 0LL;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v44 = 1;
      v8 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, (__int64)a4);
      v9 = v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v8);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      qword_14034D468 = (__int64)KeGetCurrentThread();
      dword_14034D490 = CurrentIrql;
      if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
        break;
      v11 = Object;
      *(_QWORD *)(BugCheckParameter1 + 1056) = Event;
      ObfReferenceObjectWithTag(v11, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, Object, v12, v13);
      if ( !NextProcessThread )
        goto LABEL_17;
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      v15 = dword_14034D490;
      qword_14034D468 = 0LL;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
      if ( v16 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v16);
      __writecr8(v15);
      KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
      v44 = 0;
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      v5 = DbgkpPostFakeThreadMessages(BugCheckParameter1, Event, NextProcessThread, v40, &Object);
      if ( v5 < 0 )
      {
        Object = 0LL;
        goto LABEL_17;
      }
      ObfDereferenceObjectWithTag(v40[0], 0x4F676244u);
    }
    v5 = -1073741752;
  }
LABEL_17:
  v17 = Event + 1;
  v18 = KeAbPreAcquire((ULONG_PTR)&Event[1], 0LL, 0LL, (__int64)a4);
  v19 = v18;
  v20 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Event[1].Header.Lock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&Event[1], v18);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  Event[3].Header.LockNV = v20;
  if ( v5 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      v5 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 3u);
      ObfReferenceObject(Event);
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead )
  {
    v22 = v5;
    while ( 1 )
    {
      v23 = Flink;
      Flink = *(struct _KEVENT **)&Flink->Header.Lock;
      SignalState = v23[3].Header.SignalState;
      if ( (SignalState & 4) != 0 && (struct _KTHREAD *)v23[3].Header.WaitListHead.Flink == CurrentThread )
        break;
LABEL_46:
      if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
        goto LABEL_47;
    }
    Blink = v23[2].Header.WaitListHead.Blink;
    if ( v22 < 0 )
    {
      v29 = *(struct _LIST_ENTRY **)&v23->Header.Lock;
      v30 = v23->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v23->Header.Lock + 8LL) != v23 || (struct _KEVENT *)v30->Flink != v23 )
        __fastfail(3u);
      v30->Flink = v29;
      v29->Blink = v30;
      v28 = (struct _LIST_ENTRY *)v42;
      *(_QWORD *)&v23->Header.Lock = &v41;
      v23->Header.WaitListHead.Flink = v28;
      if ( (__int64 **)v28->Flink != &v41 )
        __fastfail(3u);
    }
    else
    {
      if ( (SignalState & 0x10) == 0 )
      {
        if ( v43 )
        {
          v23[3].Header.SignalState = SignalState & 0xFFFFFFFB;
          KeSetEvent(Event, 0, 0);
          v43 = 0;
        }
        v23[3].Header.WaitListHead.Flink = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Blink[107].Blink + 1, 0x40u);
        goto LABEL_42;
      }
      _InterlockedOr((volatile signed __int32 *)&Blink[107].Blink + 1, 0x80u);
      v26 = *(struct _LIST_ENTRY **)&v23->Header.Lock;
      v27 = v23->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v23->Header.Lock + 8LL) != v23 || (struct _KEVENT *)v27->Flink != v23 )
        __fastfail(3u);
      v27->Flink = v26;
      v26->Blink = v27;
      v28 = (struct _LIST_ENTRY *)v42;
      *(_QWORD *)&v23->Header.Lock = &v41;
      v23->Header.WaitListHead.Flink = v28;
      if ( (__int64 **)v28->Flink != &v41 )
        __fastfail(3u);
    }
    v28->Flink = (struct _LIST_ENTRY *)v23;
    v42 = v23;
LABEL_42:
    v31 = v23[3].Header.SignalState;
    if ( (v31 & 8) != 0 )
    {
      v23[3].Header.SignalState = v31 & 0xFFFFFFF7;
      _m_prefetchw(&Blink[106]);
      v32 = (unsigned __int64)Blink[106].Flink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[106], v32 - 2, v32) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Blink[106]);
    }
    CurrentThread = v39;
    v22 = v5;
    goto LABEL_46;
  }
LABEL_47:
  Type = Event[3].Header.Type;
  Event[1].Header.WaitListHead.Flink = 0LL;
  v34 = _InterlockedCompareExchange(&v17->Header.Lock, 1, 0);
  if ( v34 )
    ExpReleaseFastMutexContended(&v17->Header.Lock, v34);
  __writecr8(Type);
  KeAbPostRelease((ULONG_PTR)v17);
  if ( v44 )
  {
    v35 = dword_14034D490;
    qword_14034D468 = 0LL;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
    if ( v36 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v36);
    __writecr8(v35);
    KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
  while ( v41 != (__int64 *)&v41 )
  {
    v37 = (__int64 *)*v41;
    if ( (__int64 **)v41[1] != &v41 || (__int64 *)v37[1] != v41 )
      __fastfail(3u);
    v41 = (__int64 *)*v41;
    v37[1] = (__int64)&v41;
    DbgkpWakeTarget();
  }
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v5;
}
