/*
 * XREFs of NtReleaseKeyedEvent @ 0x1404BBDF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS v6; // r13d
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // cl
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  struct _LIST_ENTRY *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v16; // r15
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  char *v24; // rax
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v29; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
  v6 = 0;
  StackLimit = 0LL;
  v7 = 1;
  if ( ((unsigned __int8)Key & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > MmUserProbeAddress || &Timeout[1] < Timeout) )
      *(_BYTE *)MmUserProbeAddress = 0;
    QuadPart = Timeout->QuadPart;
    Timeouta = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v10 = (char *)Object;
    v29 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v29 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  LODWORD(CurrentThread[1].Queue) |= 0x10u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v12 = (struct _LIST_ENTRY *)(v11 + 1);
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Flink = v12->Flink;
  if ( v12->Flink == v12 )
  {
LABEL_34:
    StackLimit = CurrentThread[1].StackLimit;
    CurrentThread[1].StackLimit = (void *volatile)((unsigned __int64)Key | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v21 = v12->Flink;
    CurrentThread[1].Header.WaitListHead.Flink = v12->Flink;
    CurrentThread[1].Header.WaitListHead.Blink = v12;
    if ( v21->Blink != v12 )
      __fastfail(3u);
    v21->Blink = p_WaitListHead;
    v12->Flink = p_WaitListHead;
    v16 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v16 = Flink - 94;
      if ( Flink[2].Blink == Key && (_KPROCESS *)v16[34].Flink == Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v12 )
        goto LABEL_34;
    }
    v17 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v17;
    v17->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( v16 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)&v16[99].Blink, 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v6 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, Timeouta);
    if ( v6 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v22, (ULONG_PTR)v11);
      if ( v23 )
        *(_BYTE *)(v23 + 26) |= 1u;
      v24 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v24 != v24 )
      {
        v25 = *(struct _LIST_ENTRY **)v24;
        v26 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 || (char *)v26->Flink != v24 )
          __fastfail(3u);
        v26->Flink = v25;
        v25->Blink = v26;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v24 = v24;
        v7 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( v7 )
        v6 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].StackLimit = StackLimit;
  }
  LODWORD(CurrentThread[1].Queue) &= ~0x10u;
  if ( EventHandle )
    ObfDereferenceObject(v29);
  return v6;
}
