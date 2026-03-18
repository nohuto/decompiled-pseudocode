/*
 * XREFs of NtCreateWorkerFactory @ 0x140470E94
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeTimer2 @ 0x14007DD48 (KeInitializeTimer2.c)
 *     ExpInitializeThreadHistory @ 0x14007DE9C (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14007E4EC (KeDisableQueueingPriorityIncrement.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400EDDA0 (KeRegisterObjectNotification.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 *     IoAllocateMiniCompletionPacket @ 0x14047192C (IoAllocateMiniCompletionPacket.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x14051BA70 (IopFreeMiniCompletionPacket.c)
 */

NTSTATUS __fastcall NtCreateWorkerFactory(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        int a3,
        void *a4,
        HANDLE Handle,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v13; // r15
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v16; // rsi
  NTSTATUS v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  int v21; // r9d
  int v22; // ecx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  PVOID v26; // rcx
  NTSTATUS result; // eax
  _QWORD *v28; // rcx
  HANDLE v29; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  v13 = (_QWORD *)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v16 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v17 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
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
          Handle,
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
  v17 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &v29);
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
    ObCloseHandle(v29, 0);
    goto LABEL_24;
  }
  LOBYTE(v21) = PreviousMode;
  LOBYTE(v22) = PreviousMode;
  v17 = ObCreateObject(v22, (_DWORD)ExpWorkerFactoryObjectType, a3, v21, 0, 416, 0, 0, (__int64)&v32);
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
  *((_DWORD *)v23 + 31) = a8;
  *(_QWORD *)((char *)v23 + 140) = 0LL;
  v23[16] = 0LL;
  v24 = a9;
  if ( !a9 )
    v24 = 0x10000LL;
  v23[7] = v24;
  v25 = a10;
  if ( !a10 )
    v25 = 4096LL;
  v23[19] = 0LL;
  v23[8] = v25;
  v23[3] = a6;
  v23[4] = a7;
  *((_DWORD *)v23 + 37) = 0;
  *((_DWORD *)v23 + 40) = 0;
  v23[5] = v29;
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
  result = ObInsertObject(v23, 0LL, a2, 0, 0LL, &v33);
  if ( result >= 0 )
    *v13 = v33;
  return result;
}
