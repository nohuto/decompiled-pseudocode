/*
 * XREFs of NtCreateWorkerFactory @ 0x14044E4E8
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     ExpInitializeThreadHistory @ 0x14009334C (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x140093658 (KeDisableQueueingPriorityIncrement.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     IoAllocateMiniCompletionPacket @ 0x14044EF10 (IoAllocateMiniCompletionPacket.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  int v11; // r12d
  PHANDLE v13; // r15
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v16; // rdi
  int v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  int v21; // r9d
  int v22; // ecx
  char *v23; // rsi
  SIZE_T v24; // rax
  SIZE_T v25; // rax
  NTSTATUS result; // eax
  NTSTATUS v27; // edi
  __int64 v28; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v30; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+68h] [rbp-50h] BYREF
  HANDLE v32; // [rsp+70h] [rbp-48h] BYREF
  PVOID v33; // [rsp+80h] [rbp-38h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  v11 = (int)ObjectAttributes;
  v13 = WorkerFactoryHandleReturn;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)WorkerFactoryHandleReturn >= MmUserProbeAddress )
      WorkerFactoryHandleReturn = (PHANDLE)MmUserProbeAddress;
    *WorkerFactoryHandleReturn = *WorkerFactoryHandleReturn;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v16 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v17 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  v18 = (volatile signed __int32 *)Object;
  *((_QWORD *)v16 + 1) = Object;
  if ( v17 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v16, 0);
    return v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObReferenceObjectByHandleWithTag(
          WorkerProcessHandle,
          0x2Au,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v33,
          0LL);
  if ( v17 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*((PVOID *)v16 + 1));
    goto LABEL_26;
  }
  v19 = v33;
  if ( KeGetCurrentThread()->ApcState.Process != v33 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v17 = ObOpenObjectByPointer(v33, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v17 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *((_QWORD *)v16 + 2) = MiniCompletionPacket;
  v22 = 0;
  if ( !MiniCompletionPacket )
  {
    v17 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  LOBYTE(v21) = PreviousMode;
  LOBYTE(v22) = PreviousMode;
  v17 = ObCreateObject(v22, (_DWORD)ExpWorkerFactoryObjectType, v11, v21, 0, 416, 0, 0, (__int64)&v30);
  if ( v17 < 0 )
  {
    v28 = *((_QWORD *)v16 + 2);
    *(_QWORD *)(v28 + 56) = 0LL;
    IopFreeMiniCompletionPacket((_SLIST_ENTRY *)v28);
    goto LABEL_23;
  }
  v23 = (char *)v30;
  *((_QWORD *)v30 + 2) = v16;
  *((_QWORD *)v23 + 13) = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v23 + 28) = 0;
  *((_DWORD *)v23 + 29) = MaxThreadCount;
  *(_QWORD *)(v23 + 132) = 0LL;
  *((_QWORD *)v23 + 15) = 0LL;
  v24 = StackReserve;
  if ( !StackReserve )
    v24 = 0x10000LL;
  *((_QWORD *)v23 + 7) = v24;
  v25 = StackCommit;
  if ( !StackCommit )
    v25 = 4096LL;
  *((_QWORD *)v23 + 18) = 0LL;
  *((_QWORD *)v23 + 8) = v25;
  *((_QWORD *)v23 + 3) = StartRoutine;
  *((_QWORD *)v23 + 4) = StartParameter;
  *((_DWORD *)v23 + 35) = 0;
  *((_DWORD *)v23 + 38) = 0;
  *((_QWORD *)v23 + 5) = Handle;
  *((_QWORD *)v23 + 6) = v19;
  *((_DWORD *)v23 + 32) = 0;
  *((_DWORD *)v23 + 100) = 0;
  *((_DWORD *)v23 + 86) = 1;
  KeInitializeTimer2((__int64)(v23 + 160), 0LL, 0LL, 8);
  ExpInitializeThreadHistory((__int64)v23);
  result = ObInsertObject(v23, 0LL, DesiredAccess, 0, 0LL, &v32);
  v27 = result;
  if ( result >= 0 )
  {
    *v13 = v32;
    ObfReferenceObject(v23);
    KeRegisterObjectNotification((__int64)(v23 + 160), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v23 + 296));
    v34[0] = 0LL;
    v34[1] = -1LL;
    KeSetTimer2((unsigned int *)v23 + 40, *((_QWORD *)v23 + 13), -*((_QWORD *)v23 + 13), (__int64)v34);
    return v27;
  }
  return result;
}
