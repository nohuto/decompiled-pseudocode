/*
 * XREFs of NtNotifyChangeSession @ 0x1404C2F6C
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtNotifyChangeSession(
        void *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char *Src,
        SIZE_T NumberOfBytes)
{
  SIZE_T v10; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  char *v17; // rbx
  struct _WORK_QUEUE_ITEM *v18; // rax
  char *PoolWithTag; // rax
  unsigned __int16 v20; // r12
  char *v21; // rax
  char v22; // [rsp+30h] [rbp-1C8h]
  char v23; // [rsp+31h] [rbp-1C7h]
  KPROCESSOR_MODE v24; // [rsp+32h] [rbp-1C6h]
  NTSTATUS v25; // [rsp+48h] [rbp-1B0h]
  PVOID Object; // [rsp+58h] [rbp-1A0h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-198h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-188h] BYREF
  _LIST_ENTRY v29; // [rsp+90h] [rbp-168h]
  __int128 v30; // [rsp+A0h] [rbp-158h]
  PVOID v31; // [rsp+B0h] [rbp-148h]
  _BYTE v32[256]; // [rsp+C0h] [rbp-138h] BYREF

  v10 = (unsigned int)NumberOfBytes;
  v22 = 0;
  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = PreviousMode;
  if ( (unsigned int)NumberOfBytes > 0x100 )
    return -1073741580;
  result = ObReferenceObjectByHandle(a1, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v25 = result;
  v13 = Object;
  v31 = Object;
  if ( result < 0 )
    return result;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 7960LL), Executive, 0, 0, 0LL);
  v14 = v13[3];
  v15 = *(_DWORD *)(v14 + 7956);
  if ( v15 == a2 )
  {
    v16 = v15 + 1;
LABEL_5:
    *(_DWORD *)(v14 + 7956) = v16;
    goto LABEL_6;
  }
  if ( v15 <= a2 || v15 - a2 >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v20 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v14 + 7960), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v13[3] + 7960LL), Executive, 0, 0, 0LL);
      ++v20;
      v14 = v13[3];
    }
    while ( *(_DWORD *)(v14 + 7956) != a2 && v20 <= 0xAu );
    v16 = a2 + 1;
    v10 = (unsigned int)NumberOfBytes;
    goto LABEL_5;
  }
LABEL_6:
  if ( !a4 )
  {
    KeSetEvent((PRKEVENT)(v13[3] + 7960LL), 0, 0);
    ObfDereferenceObject(v13);
    return 0;
  }
  *(_DWORD *)(v13[3] + 7952LL) = a5;
  v17 = 0LL;
  if ( !(_DWORD)v10 )
    goto LABEL_8;
  if ( v24 == 1 )
  {
    if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x6E536F49u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      v22 = 1;
      memmove(PoolWithTag, Src, v10);
    }
    else
    {
      v17 = v32;
      memmove(v32, Src, v10);
      v23 = 1;
    }
    LODWORD(v10) = NumberOfBytes;
    goto LABEL_8;
  }
  if ( a4 - 1 > 1 )
  {
    v21 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x6E536F49u);
    v17 = v21;
    if ( v21 )
    {
      v22 = 1;
      memmove(v21, Src, (unsigned int)v10);
      goto LABEL_8;
    }
    v23 = 1;
  }
  v17 = Src;
LABEL_8:
  v29.Flink = (struct _LIST_ENTRY *)__PAIR64__(a5, a4);
  LODWORD(v29.Blink) = v10;
  *(_QWORD *)&v30 = v17;
  *((_QWORD *)&v30 + 1) = v13;
  if ( !v23 && a4 - 1 > 1 )
  {
    v18 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6E536F49u);
    if ( v18 )
    {
      v18->List = (_LIST_ENTRY)Argument1[0];
      *(_OWORD *)&v18->WorkerRoutine = Argument1[1];
      v18[1].List = v29;
      *(_OWORD *)&v18[1].WorkerRoutine = v30;
      v18->WorkerRoutine = (void (__fastcall *)(void *))IopSessionChangeWorker;
      v18->Parameter = v18;
      v18->List.Flink = 0LL;
      ExQueueWorkItem(v18, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v13[3] + 7960LL), 0, 0);
  ObfDereferenceObject(v13);
  if ( v17 )
  {
    if ( v22 == 1 )
      ExFreePoolWithTag(v17, 0);
  }
  return v25;
}
