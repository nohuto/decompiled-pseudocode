/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x140619330
 * Callers:
 *     NtDebugActiveProcess @ 0x140619878 (NtDebugActiveProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // edi
  _QWORD *v7; // rbx
  _QWORD *NextProcessThread; // r15
  struct _KEVENT *Flink; // r15
  __int64 v10; // rcx
  struct _KEVENT *v11; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _KEVENT **v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  LONG v19; // eax
  __int64 *v20; // rax
  struct _KTHREAD *v22; // [rsp+30h] [rbp-30h]
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  __int64 *v25; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v26; // [rsp+50h] [rbp-10h]
  char v27; // [rsp+A8h] [rbp+48h]
  char v28; // [rsp+B0h] [rbp+50h]
  _QWORD *v29; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD *);
  CurrentThread = KeGetCurrentThread();
  v26 = (struct _KEVENT *)&v25;
  v22 = CurrentThread;
  v25 = (__int64 *)&v25;
  v27 = 1;
  v4 = a3;
  v28 = 0;
  if ( a3 >= 0 )
  {
    v7 = v29;
    v4 = 0;
  }
  else
  {
    v7 = 0LL;
    v29 = 0LL;
  }
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v28 = 1;
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
        break;
      *(_QWORD *)(BugCheckParameter1 + 1056) = Event;
      ObfReferenceObjectWithTag(v7, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, v7);
      if ( !NextProcessThread )
        goto LABEL_10;
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      v28 = 0;
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      v4 = DbgkpPostFakeThreadMessages(BugCheckParameter1, Event, NextProcessThread, &Object, (_QWORD **)va);
      if ( v4 < 0 )
      {
        v7 = 0LL;
        v29 = 0LL;
        goto LABEL_10;
      }
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      v7 = v29;
    }
    v4 = -1073741752;
  }
LABEL_10:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PFAST_MUTEX)&Event[1]);
  if ( v4 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      v4 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 3u);
      ObfReferenceObject(Event);
      v7 = v29;
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead )
  {
    v10 = v4;
    while ( 1 )
    {
      v11 = Flink;
      Flink = *(struct _KEVENT **)&Flink->Header.Lock;
      SignalState = v11[3].Header.SignalState;
      if ( (SignalState & 4) != 0 && (struct _KTHREAD *)v11[3].Header.WaitListHead.Flink == CurrentThread )
        break;
LABEL_35:
      if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
      {
        v7 = v29;
        goto LABEL_37;
      }
    }
    Blink = v11[2].Header.WaitListHead.Blink;
    if ( v10 < 0 )
    {
      v17 = *(struct _LIST_ENTRY **)&v11->Header.Lock;
      v18 = v11->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v11->Header.Lock + 8LL) != v11 || (struct _KEVENT *)v18->Flink != v11 )
        __fastfail(3u);
      v18->Flink = v17;
      v17->Blink = v18;
      v16 = (struct _KEVENT **)v26;
      if ( *(__int64 ***)&v26->Header.Lock != &v25 )
        __fastfail(3u);
    }
    else
    {
      if ( (SignalState & 0x10) == 0 )
      {
        if ( v27 )
        {
          v11[3].Header.SignalState = SignalState & 0xFFFFFFFB;
          KeSetEvent(Event, 0, 0);
          v27 = 0;
        }
        v11[3].Header.WaitListHead.Flink = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Blink[108], 0x40u);
        goto LABEL_32;
      }
      _InterlockedOr((volatile signed __int32 *)&Blink[108], 0x80u);
      v14 = *(struct _LIST_ENTRY **)&v11->Header.Lock;
      v15 = v11->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v11->Header.Lock + 8LL) != v11 || (struct _KEVENT *)v15->Flink != v11 )
        __fastfail(3u);
      v15->Flink = v14;
      v14->Blink = v15;
      v16 = (struct _KEVENT **)v26;
      if ( *(__int64 ***)&v26->Header.Lock != &v25 )
        __fastfail(3u);
    }
    *(_QWORD *)&v11->Header.Lock = &v25;
    v11->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
    *v16 = v11;
    v26 = v11;
LABEL_32:
    v19 = v11[3].Header.SignalState;
    if ( (v19 & 8) != 0 )
    {
      v11[3].Header.SignalState = v19 & 0xFFFFFFF7;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Blink[106].Blink);
    }
    CurrentThread = v22;
    v10 = v4;
    goto LABEL_35;
  }
LABEL_37:
  KeReleaseGuardedMutex(Mutex);
  if ( v28 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  while ( v25 != (__int64 *)&v25 )
  {
    v20 = (__int64 *)*v25;
    if ( (__int64 **)v25[1] != &v25 || (__int64 *)v20[1] != v25 )
      __fastfail(3u);
    v25 = (__int64 *)*v25;
    v20[1] = (__int64)&v25;
    DbgkpWakeTarget();
  }
  if ( v4 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v4;
}
