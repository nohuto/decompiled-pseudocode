/*
 * XREFs of NtWaitForKeyedEvent @ 0x1404C8890
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS v5; // r13d
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v9; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r12
  _BYTE *v12; // rax
  _BYTE *v13; // r15
  struct _LIST_ENTRY *Flink; // rcx
  __int64 i; // r15
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS result; // eax
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *Blink; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // r15
  char *v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v38; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v5 = 0;
  StackLimit = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)Key & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout) )
      MEMORY[0x7FFFFFFF0000] = 0;
    QuadPart = Timeout->QuadPart;
    p_QuadPart = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v9 = (char *)Object;
    v38 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    v38 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&v9[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10);
  if ( v13 )
    v13[26] |= 1u;
  Flink = v11->Flink;
  for ( i = (__int64)&v11->Flink[-95].Blink; Flink != v11; i = (__int64)&Flink[-95].Blink )
  {
    v22 = *(_QWORD *)(i + 1552);
    if ( (v22 & 1) == 0 )
      break;
    if ( v22 == ((unsigned __int64)Key | 1) && *(_KPROCESS **)(i + 544) == Process )
    {
      v23 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      Blink->Flink = v23;
      v23->Blink = Blink;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      goto LABEL_12;
    }
    Flink = Flink->Flink;
  }
  StackLimit = CurrentThread[1].StackLimit;
  CurrentThread[1].StackLimit = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v17 = (struct _LIST_ENTRY *)v10[2];
  if ( v17->Flink != v11 )
    __fastfail(3u);
  p_WaitListHead->Flink = v11;
  CurrentThread[1].Header.WaitListHead.Blink = v17;
  v17->Flink = p_WaitListHead;
  v10[2] = (unsigned __int64)p_WaitListHead;
  i = 0LL;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( i )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(i + 1600), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v33, v34, v35);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
    v5 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v5 )
    {
      --CurrentThread->KernelApcDisable;
      v25 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v26 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v25, (ULONG_PTR)v10);
      if ( v26 )
        v26[26] |= 1u;
      v27 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v27 != v27 )
      {
        v28 = *(struct _LIST_ENTRY **)v27;
        v29 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 || (char *)v29->Flink != v27 )
          __fastfail(3u);
        v29->Flink = v28;
        v28->Blink = v29;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v27 = v27;
        v6 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v30, v31, v32);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].StackLimit = StackLimit;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v38);
  return v5;
}
