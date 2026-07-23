/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x14010F574
 * Callers:
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14006B3C8 (CcPerfLogWorkItemEnqueue.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
    v3 = (PSLIST_ENTRY *)qword_1403230D8;
    v4 = v2;
    if ( *(__int64 **)qword_1403230D8 != &CcPostTickWorkQueue )
      __fastfail(3u);
    v1->Next = (_SLIST_ENTRY *)&CcPostTickWorkQueue;
    *((_QWORD *)&v1->Next + 1) = v3;
    *v3 = v1;
    qword_1403230D8 = (__int64)v1;
    byte_1403231E1 = 1;
    _InterlockedIncrement(&CcPostTickWorkItemCount);
    CcScheduleLazyWriteScan(1, 1);
    KeReleaseQueuedSpinLock(5uLL, v4);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement(&CcPostTickWorkItemCount);
  }
  return result;
}
