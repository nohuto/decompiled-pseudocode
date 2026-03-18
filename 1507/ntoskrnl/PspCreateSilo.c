/*
 * XREFs of PspCreateSilo @ 0x1406C18E8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  int Object; // ebx
  __int64 Handle; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 **v11; // rcx
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int16 v18; // ax
  volatile signed __int32 *p_Lock; // rdi
  struct _KTHREAD *v20; // rax
  struct _LIST_ENTRY ***v21; // rdx
  struct _LIST_ENTRY **p_Blink; // rax
  int v23; // ecx
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int16 v26; // ax
  int v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+68h] [rbp-18h]
  __int128 v31; // [rsp+70h] [rbp-10h]
  PRKEVENT Event; // [rsp+C8h] [rbp+48h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v27 = 48;
  v28 = 0LL;
  v30 = 0;
  v29 = 0LL;
  v31 = 0LL;
  Object = ObCreateObject(0, (int)PsSiloType, (int)&v27, 0);
  if ( Object >= 0 )
  {
    memset(Event, 0, 0x110uLL);
    Handle = ExCreateHandleEx(PspSiloIdTable, (__int64)Event, 0, 0, 0);
    *(_QWORD *)&Event[1].Header.Lock = Handle;
    if ( !Handle )
    {
      PspDereferenceSiloObject(Event);
      return 3221225626LL;
    }
    *(_QWORD *)&Event[8].Header.Lock = (char *)Event + 184;
    Event[7].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event[7].Header.WaitListHead.Blink;
    Event[8].Header.WaitListHead.Blink = &Event[8].Header.WaitListHead;
    Event[8].Header.WaitListHead.Flink = &Event[8].Header.WaitListHead;
    Event[9].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&Event[9];
    *(_QWORD *)&Event[9].Header.Lock = Event + 9;
    KeInitializeEvent(Event, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)Event + 232), NotificationEvent, 1u);
    ExInitializeResourceLite((PERESOURCE)&Event[2]);
    v8 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v7);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = (__int64 **)qword_14032C448;
    qword_14032C468 = (__int64)KeGetCurrentThread();
    dword_14032C490 = CurrentIrql;
    Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&PspSiloList;
    Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v11;
    if ( *v11 != &PspSiloList )
      __fastfail(3u);
    *v11 = (__int64 *)&Event[1].Header.WaitListHead;
    v12 = dword_14032C490;
    qword_14032C448 = (__int64)&Event[1].Header.WaitListHead;
    qword_14032C468 = 0LL;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v14);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v15, (ULONG_PTR)&Process[1], v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v17 = Process[2].ActiveProcessors.Bitmap[12];
    if ( v17 )
      PspReferenceSiloObject((void *)Process[2].ActiveProcessors.Bitmap[12]);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    p_Lock = &Event->Header.Lock;
    Event[6].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v17;
    if ( v17 )
    {
      v20 = KeGetCurrentThread();
      --v20->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 48), 1u);
      v21 = *(struct _LIST_ENTRY ****)(v17 + 208);
      p_Blink = &Event[6].Header.WaitListHead.Blink;
      Event[6].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v17 + 200);
      *(_QWORD *)&Event[7].Header.Lock = v21;
      if ( *v21 != (struct _LIST_ENTRY **)(v17 + 200) )
        __fastfail(3u);
      *v21 = p_Blink;
      *(_QWORD *)(v17 + 208) = p_Blink;
      v23 = *(_DWORD *)(v17 + 176);
      *(_DWORD *)(v17 + 176) = v23 + 1;
      if ( !v23 )
      {
        KeResetEvent((PRKEVENT)v17);
        if ( *(_QWORD *)(v17 + 256) )
        {
          if ( !*(_DWORD *)(v17 + 180) )
            KeResetEvent((PRKEVENT)(v17 + 232));
        }
      }
      ExReleaseResourceLite((PERESOURCE)(v17 + 48));
      v24 = KeGetCurrentThread();
      v25 = v24->SpecialApcDisable + 1;
      v24->SpecialApcDisable = v25;
      if ( !v25 && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
        KiCheckForKernelApcDelivery();
      p_Lock = &Event->Header.Lock;
    }
    Object = ObInsertObject((PVOID)p_Lock, 0LL, 0, 0, 0LL, 0LL);
    if ( Object >= 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      if ( *(_QWORD *)(a1 + 1248) )
      {
        Object = -1073740536;
      }
      else
      {
        *(_QWORD *)(a1 + 1248) = p_Lock;
        _InterlockedOr(p_Lock + 66, 1u);
        p_Lock = &Event->Header.Lock;
        Object = 0;
      }
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      v26 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( Object < 0 )
        ObfDereferenceObject((PVOID)p_Lock);
    }
  }
  return (unsigned int)Object;
}
