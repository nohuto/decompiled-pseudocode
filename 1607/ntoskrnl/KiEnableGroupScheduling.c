/*
 * XREFs of KiEnableGroupScheduling @ 0x14014A608
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400A6414 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x14014A6C8 (KeUpdateGroupSchedulingConstants.c)
 */

void KiEnableGroupScheduling()
{
  __int64 v0; // rcx
  __int64 v1; // r9
  __int64 *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    LOBYTE(v0) = 1;
    qword_14030E2A8 = (__int64)&KiSchedulingGroupList;
    KiSchedulingGroupList = (__int64)&KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants(v0);
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v1 = KiGenerationEndTick;
      v2 = KiProcessorBlock;
      v3 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v4 = *v2++;
        *(_QWORD *)(v4 + 24280) = v4 + 24272;
        *(_QWORD *)(v4 + 24272) = v4 + 24272;
        v5 = 424 * *(_DWORD *)(v4 + 36);
        *(_QWORD *)(v4 + 23384) = v1;
        *(_DWORD *)(v4 + 1624) = v5 + 128;
        --v3;
      }
      while ( v3 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
