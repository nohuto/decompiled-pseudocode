/*
 * XREFs of NtCreateWorkerFactory @ 0x14046FD64
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     ExpInitializeThreadHistory @ 0x14007DF1C (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14007E56C (KeDisableQueueingPriorityIncrement.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     IoAllocateMiniCompletionPacket @ 0x1404707FC (IoAllocateMiniCompletionPacket.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
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
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v16; // rsi
  int v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  int v21; // r9d
  int v22; // ecx
  _QWORD *v23; // rdi
  SIZE_T v24; // rax
  SIZE_T v25; // rax
  PVOID v26; // rcx
  NTSTATUS result; // eax
  _QWORD *v28; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  v11 = (int)ObjectAttributes;
  v13 = WorkerFactoryHandleReturn;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)WorkerFactoryHandleReturn >= 0x7FFFFFFF0000LL )
      WorkerFactoryHandleReturn = (PHANDLE)0x7FFFFFFF0000LL;
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
          &v31,
          0LL);
  if ( v17 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*((PVOID *)v16 + 1));
    goto LABEL_26;
  }
  v19 = v31;
  if ( KeGetCurrentThread()->ApcState.Process != v31 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v17 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
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
  v17 = ObCreateObject(v22, (_DWORD)ExpWorkerFactoryObjectType, v11, v21, 0, 416, 0, 0, (__int64)&v32);
  if ( v17 < 0 )
  {
    v28 = (_QWORD *)*((_QWORD *)v16 + 2);
    v28[7] = 0LL;
    IopFreeMiniCompletionPacket(v28);
    goto LABEL_23;
  }
  v23 = v32;
  *((_QWORD *)v32 + 2) = v16;
  v23[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v23 + 30) = 0;
  *((_DWORD *)v23 + 31) = MaxThreadCount;
  *(_QWORD *)((char *)v23 + 140) = 0LL;
  v23[16] = 0LL;
  v24 = StackReserve;
  if ( !StackReserve )
    v24 = 0x10000LL;
  v23[7] = v24;
  v25 = StackCommit;
  if ( !StackCommit )
    v25 = 4096LL;
  v23[19] = 0LL;
  v23[8] = v25;
  v23[3] = StartRoutine;
  v23[4] = StartParameter;
  *((_DWORD *)v23 + 37) = 0;
  *((_DWORD *)v23 + 40) = 0;
  v23[5] = Handle;
  v23[6] = v19;
  *((_DWORD *)v23 + 34) = 0;
  *((_DWORD *)v23 + 102) = 0;
  *((_DWORD *)v23 + 88) = 1;
  KeInitializeTimer2((__int64)(v23 + 21), 0LL, 0LL, 8);
  ExpInitializeThreadHistory((__int64)v23);
  v23[13] = 0LL;
  ObfReferenceObject(v26);
  KeRegisterObjectNotification((__int64)(v23 + 21), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v23 + 38));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v23 + 21), v23[14], -v23[14], (__int64)v34);
  result = ObInsertObject(v23, 0LL, DesiredAccess, 0, 0LL, &v33);
  if ( result >= 0 )
    *v13 = v33;
  return result;
}
