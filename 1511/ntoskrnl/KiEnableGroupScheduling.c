/*
 * XREFs of KiEnableGroupScheduling @ 0x140140434
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1401404F0 (KeUpdateGroupSchedulingConstants.c)
 */

void KiEnableGroupScheduling()
{
  __int64 v0; // r9
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    qword_1402E88D8 = (__int64)&KiSchedulingGroupList;
    KiSchedulingGroupList = (__int64)&KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants();
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v0 = KiGenerationEndTick;
      v1 = KiProcessorBlock;
      v2 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 24280) = v3 + 24272;
        *(_QWORD *)(v3 + 24272) = v3 + 24272;
        v4 = 408 * *(_DWORD *)(v3 + 36);
        *(_QWORD *)(v3 + 23384) = v0;
        *(_DWORD *)(v3 + 1624) = v4 + 128;
        --v2;
      }
      while ( v2 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
