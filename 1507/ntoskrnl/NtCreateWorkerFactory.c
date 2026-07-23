/*
 * XREFs of NtCreateWorkerFactory @ 0x14046FE54
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableQueueingPriorityIncrement @ 0x14002DA2C (KeDisableQueueingPriorityIncrement.c)
 *     ExpInitializeThreadHistory @ 0x14002DA34 (ExpInitializeThreadHistory.c)
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoAllocateMiniCompletionPacket @ 0x14042D398 (IoAllocateMiniCompletionPacket.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
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
  __int64 v16; // rdi
  int v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  int v21; // r9d
  int v22; // ecx
  _QWORD *v23; // rsi
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
  v16 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v17 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  v18 = (volatile signed __int32 *)Object;
  *(_QWORD *)(v16 + 8) = Object;
  if ( v17 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)v16, 0);
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
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
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
  MiniCompletionPacket = IoAllocateMiniCompletionPacket((__int64)ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
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
    v28 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v28 + 56) = 0LL;
    IopFreeMiniCompletionPacket((PSLIST_ENTRY)v28);
    goto LABEL_23;
  }
  v23 = v30;
  *((_QWORD *)v30 + 2) = v16;
  v23[13] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v23 + 28) = 0;
  *((_DWORD *)v23 + 29) = MaxThreadCount;
  *(_QWORD *)((char *)v23 + 132) = 0LL;
  v23[15] = 0LL;
  v24 = StackReserve;
  if ( !StackReserve )
    v24 = 0x10000LL;
  v23[7] = v24;
  v25 = StackCommit;
  if ( !StackCommit )
    v25 = 4096LL;
  v23[18] = 0LL;
  v23[8] = v25;
  v23[3] = StartRoutine;
  v23[4] = StartParameter;
  *((_DWORD *)v23 + 35) = 0;
  *((_DWORD *)v23 + 38) = 0;
  v23[5] = Handle;
  v23[6] = v19;
  *((_DWORD *)v23 + 32) = 0;
  *((_DWORD *)v23 + 100) = 0;
  *((_DWORD *)v23 + 86) = 1;
  KeInitializeTimer2((__int64)(v23 + 20), 0LL, 0LL, 8);
  ExpInitializeThreadHistory((__int64)v23);
  result = ObInsertObject(v23, 0LL, DesiredAccess, 0, 0LL, &v32);
  v27 = result;
  if ( result >= 0 )
  {
    *v13 = v32;
    ObfReferenceObject(v23);
    KeRegisterObjectNotification((__int64)(v23 + 20), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v23 + 37));
    v34[0] = 0LL;
    v34[1] = -1LL;
    KeSetTimer2((__int64)(v23 + 20), v23[13], -v23[13], (__int64)v34);
    return v27;
  }
  return result;
}
