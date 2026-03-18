/*
 * XREFs of NtReleaseKeyedEvent @ 0x140553680
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

NTSTATUS __stdcall NtReleaseKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // cl
  char *v9; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r15
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v16; // r15
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int16 v19; // ax
  NTSTATUS result; // eax
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v22; // rcx
  __int16 v23; // ax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  char *v28; // rax
  struct _LIST_ENTRY *v29; // rdx
  struct _LIST_ENTRY *v30; // rcx
  __int16 v31; // ax
  NTSTATUS v32; // [rsp+34h] [rbp-74h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v34; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  KPROCESSOR_MODE WaitMode; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
  v32 = 0;
  StackLimit = 0LL;
  v6 = 1;
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
    v32 = result;
    v9 = (char *)Object;
    v34 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    v34 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  LODWORD(CurrentThread[1].Queue) |= 8u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&v9[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, (__int64)Timeout);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Flink = v11->Flink;
  if ( v11->Flink == v11 )
  {
LABEL_35:
    StackLimit = CurrentThread[1].StackLimit;
    CurrentThread[1].StackLimit = (void *volatile)((unsigned __int64)Key | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v22 = v11->Flink;
    CurrentThread[1].Header.WaitListHead.Flink = v11->Flink;
    CurrentThread[1].Header.WaitListHead.Blink = v11;
    if ( v22->Blink != v11 )
      __fastfail(3u);
    v22->Blink = p_WaitListHead;
    v11->Flink = p_WaitListHead;
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
      if ( Flink == v11 )
        goto LABEL_35;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( v16 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)&v16[99].Blink, 1, 1, 0);
    v19 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v23 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v32 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, Timeouta);
    if ( v32 )
    {
      --CurrentThread->KernelApcDisable;
      v25 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, v24);
      v27 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v25, (ULONG_PTR)v10, v26);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v28 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v28 != v28 )
      {
        v29 = *(struct _LIST_ENTRY **)v28;
        v30 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 || (char *)v30->Flink != v28 )
          __fastfail(3u);
        v30->Flink = v29;
        v29->Blink = v30;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v28 = v28;
        v6 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
      v31 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v31;
      if ( !v31
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v6 )
        v32 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].StackLimit = StackLimit;
  }
  LODWORD(CurrentThread[1].Queue) &= ~8u;
  if ( EventHandle )
    ObfDereferenceObject(v34);
  return v32;
}
