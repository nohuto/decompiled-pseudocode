/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140103C60
 * Callers:
 *     CcSetPrivateWriteFile @ 0x1401A96C8 (CcSetPrivateWriteFile.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     VerifierCcWaitForCurrentLazyWriterActivity @ 0x1406C0318 (VerifierCcWaitForCurrentLazyWriterActivity.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x140101324 (CcAllocateWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140123444 (CcPerfLogWorkItemEnqueue.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS result; // eax
  PSLIST_ENTRY v1; // rbx
  KIRQL v2; // al
  __int64 **v3; // rcx
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
    *((_BYTE *)&v9[6].Next + 8) = 4;
    v7 = 0;
    v8[1] = v8;
    v8[0] = v8;
    Object = 0;
    v6 = 6;
    v1[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140382290 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(&CcPostTickWorkQueue, v1, 0LL, 0LL);
    v2 = KeAcquireQueuedSpinLock(5uLL);
    v3 = (__int64 **)qword_1402FDA98;
    v4 = v2;
    v1->Next = (_SLIST_ENTRY *)&CcPostTickWorkQueue;
    *((_QWORD *)&v1->Next + 1) = v3;
    if ( *v3 != &CcPostTickWorkQueue )
      __fastfail(3u);
    *v3 = (__int64 *)v1;
    qword_1402FDA98 = (__int64)v1;
    byte_1402FDBA1 = 1;
    _InterlockedIncrement(&CcPostTickWorkItemCount);
    CcScheduleLazyWriteScan(1, 1);
    KeReleaseQueuedSpinLock(5uLL, v4);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement(&CcPostTickWorkItemCount);
  }
  return result;
}
