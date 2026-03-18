/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x14010F010
 * Callers:
 *     CcSetPrivateWriteFile @ 0x1401B240C (CcSetPrivateWriteFile.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14006B848 (CcPerfLogWorkItemEnqueue.c)
 *     CcScheduleLazyWriteScan @ 0x14007091C (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x140072080 (CcAllocateWorkQueueEntry.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS result; // eax
  PSLIST_ENTRY v1; // rbx
  KIRQL v2; // al
  PSLIST_ENTRY *v3; // rcx
  KIRQL v4; // di
  __int16 Object; // [rsp+30h] [rbp-20h] BYREF
  char v6; // [rsp+32h] [rbp-1Eh]
  int v7; // [rsp+34h] [rbp-1Ch]
  _QWORD v8[3]; // [rsp+38h] [rbp-18h] BYREF
  PSLIST_ENTRY v9; // [rsp+60h] [rbp+10h] BYREF

  result = CcAllocateWorkQueueEntry(&v9);
  if ( result >= 0 )
  {
    v1 = v9;
    *((_BYTE *)&v9[7].Next + 8) = 4;
    Object = 0;
    v7 = 0;
    v8[1] = v8;
    v8[0] = v8;
    v6 = 6;
    v1[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(&CcPostTickWorkQueue, (__int64)v1, 0, 0);
    v2 = KeAcquireQueuedSpinLock(5uLL);
    v3 = (PSLIST_ENTRY *)qword_1403230B8;
    v4 = v2;
    if ( *(__int64 **)qword_1403230B8 != &CcPostTickWorkQueue )
      __fastfail(3u);
    v1->Next = (_SLIST_ENTRY *)&CcPostTickWorkQueue;
    *((_QWORD *)&v1->Next + 1) = v3;
    *v3 = v1;
    qword_1403230B8 = (__int64)v1;
    byte_1403231C1 = 1;
    _InterlockedIncrement(&CcPostTickWorkItemCount);
    CcScheduleLazyWriteScan(1, 1);
    KeReleaseQueuedSpinLock(5uLL, v4);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement(&CcPostTickWorkItemCount);
  }
  return result;
}
