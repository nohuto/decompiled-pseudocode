/*
 * XREFs of PopFreeIrp @ 0x14012BC54
 * Callers:
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PopFxReleasePowerIrp @ 0x14012BFB8 (PopFxReleasePowerIrp.c)
 */

LONG_PTR __fastcall PopFreeIrp(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rbp
  void *v5; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = *v2;
  v7 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v7 != v2 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    pIoFreeIrp(a1);
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return ObfDereferenceObjectWithTag(v5, 0x746C6644u);
}
