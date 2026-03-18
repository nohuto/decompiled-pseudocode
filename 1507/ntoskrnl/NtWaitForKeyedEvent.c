/*
 * XREFs of NtWaitForKeyedEvent @ 0x1405534A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
  __int64 v14; // r9
  __int64 v15; // r15
  struct _LIST_ENTRY *Flink; // rcx
  __int64 i; // r15
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v19; // rcx
  __int16 v20; // ax
  __int64 v21; // r9
  NTSTATUS result; // eax
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r15
  char *v29; // rax
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *v31; // rcx
  __int16 v32; // ax
  __int16 v33; // ax
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v36; // [rsp+40h] [rbp-68h]
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
    v36 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v36 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  LODWORD(CurrentThread[1].Queue) |= 8u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v12 = (struct _LIST_ENTRY *)(v11 + 1);
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, (__int64)Timeout);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  Flink = v12->Flink;
  for ( i = (__int64)&v12->Flink[-94]; Flink != v12; i = (__int64)&Flink[-94] )
  {
    v23 = *(_QWORD *)(i + 1544);
    if ( (v23 & 1) == 0 )
      break;
    if ( v23 == ((unsigned __int64)Key | 1) && *(_KPROCESS **)(i + 544) == Process )
    {
      v24 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      Blink->Flink = v24;
      v24->Blink = Blink;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      goto LABEL_12;
    }
    Flink = Flink->Flink;
  }
  StackLimit = CurrentThread[1].StackLimit;
  CurrentThread[1].StackLimit = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v19 = (struct _LIST_ENTRY *)v11[2];
  CurrentThread[1].Header.WaitListHead.Flink = v12;
  CurrentThread[1].Header.WaitListHead.Blink = v19;
  if ( v19->Flink != v12 )
    __fastfail(3u);
  v19->Flink = p_WaitListHead;
  v11[2] = (unsigned __int64)p_WaitListHead;
  i = 0LL;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( i )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(i + 1592), 1, 1, 0);
    v33 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v20 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v6 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v6 )
    {
      --CurrentThread->KernelApcDisable;
      v26 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, v21);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v26, (ULONG_PTR)v11, v27);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v29 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v29 != v29 )
      {
        v30 = *(struct _LIST_ENTRY **)v29;
        v31 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 || (char *)v31->Flink != v29 )
          __fastfail(3u);
        v31->Flink = v30;
        v30->Blink = v31;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v29 = v29;
        v7 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      v32 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v7 )
        v6 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].StackLimit = StackLimit;
  }
  LODWORD(CurrentThread[1].Queue) &= ~8u;
  if ( EventHandle )
    ObfDereferenceObject(v36);
  return v6;
}
