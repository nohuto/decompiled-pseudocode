/*
 * XREFs of NtWaitForKeyedEvent @ 0x1404BBFA0
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

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS v6; // r13d
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // cl
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  struct _LIST_ENTRY *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  struct _LIST_ENTRY *Flink; // rcx
  __int64 i; // r15
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v18; // rcx
  NTSTATUS result; // eax
  __int64 v20; // rdx
  struct _LIST_ENTRY *v21; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  char *v25; // rax
  struct _LIST_ENTRY *v26; // rdx
  struct _LIST_ENTRY *v27; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v30; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
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
    p_QuadPart = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v10 = (char *)Object;
    v30 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v30 = (PVOID)ExpCritSecOutOfMemoryEvent;
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
  for ( i = (__int64)&v12->Flink[-94]; Flink != v12; i = (__int64)&Flink[-94] )
  {
    v20 = *(_QWORD *)(i + 1544);
    if ( (v20 & 1) == 0 )
      break;
    if ( v20 == ((unsigned __int64)Key | 1) && *(_KPROCESS **)(i + 544) == Process )
    {
      v21 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      Blink->Flink = v21;
      v21->Blink = Blink;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      goto LABEL_12;
    }
    Flink = Flink->Flink;
  }
  StackLimit = CurrentThread[1].StackLimit;
  CurrentThread[1].StackLimit = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v18 = (struct _LIST_ENTRY *)v11[2];
  CurrentThread[1].Header.WaitListHead.Flink = v12;
  CurrentThread[1].Header.WaitListHead.Blink = v18;
  if ( v18->Flink != v12 )
    __fastfail(3u);
  v18->Flink = p_WaitListHead;
  v11[2] = (unsigned __int64)p_WaitListHead;
  i = 0LL;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( i )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(i + 1592), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v6 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v6 )
    {
      --CurrentThread->KernelApcDisable;
      v23 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v23, (ULONG_PTR)v11);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      v25 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v25 != v25 )
      {
        v26 = *(struct _LIST_ENTRY **)v25;
        v27 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 || (char *)v27->Flink != v25 )
          __fastfail(3u);
        v27->Flink = v26;
        v26->Blink = v27;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v25 = v25;
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
    ObfDereferenceObject(v30);
  return v6;
}
