/*
 * XREFs of CiThreadCleanup @ 0x1C000B1C0
 * Callers:
 *     CiThreadNotification @ 0x1C0001280 (CiThreadNotification.c)
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 *     CiDispatchCleanup @ 0x1C000B160 (CiDispatchCleanup.c)
 * Callees:
 *     CiDecrementTotalThreadCount @ 0x1C0001AE0 (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0001AF0 (CiTaskIndexDereference.c)
 *     CiSchedulerRemoveThread @ 0x1C0001B70 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C0001C20 (CiThreadRemoveFromTree.c)
 *     CiLogThreadLeave @ 0x1C0003CBC (CiLogThreadLeave.c)
 *     CiProcessDereference @ 0x1C000B320 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x1C000B3D0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B440 (CiThreadDecrementScheduledCount.c)
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

void __fastcall CiThreadCleanup(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  volatile signed __int32 *v2; // rsi
  struct _KTHREAD *v3; // rdi
  char v5; // al
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    CiSystemAcquirePushLock(a1 + 16);
    v5 = *(_BYTE *)(a1 + 148);
    if ( (v5 & 2) == 0 )
    {
      v2 = *(volatile signed __int32 **)(a1 + 128);
      v1 = *(volatile signed __int64 **)(a1 + 72);
      *(_BYTE *)(a1 + 148) = v5 | 2;
      CiDecrementTotalThreadCount(v2 + 23);
      v3 = *(struct _KTHREAD **)(a1 + 96);
      if ( v3 )
      {
        CiThreadRemoveFromTree(a1);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 3LL) & 1) != 0 )
          CiSchedulerRemoveThread((_QWORD *)a1);
        CiProcessRemoveThread(a1);
        if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
          CiThreadDecrementScheduledCount(a1);
        KeSetBasePriorityThread(v3, *(_DWORD *)(a1 + 144));
        KeSetPriorityThread(v3, *(_DWORD *)(a1 + 108));
        ThreadInformation = *(_QWORD *)(a1 + 136);
        if ( v3 == KeGetCurrentThread() )
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &ThreadInformation, 8u);
        if ( byte_1C0007298 )
          CiLogThreadLeave(a1);
      }
      CiDecrementTotalThreadCount(&CiTotalThreads);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v2 )
      CiProcessDereference((PVOID)v2);
    if ( v1 )
      CiTaskIndexDereference(v1);
  }
}
