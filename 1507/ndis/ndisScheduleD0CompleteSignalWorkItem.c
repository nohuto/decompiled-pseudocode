/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C005FBA4
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C000FC80 (ndisSetDevicePowerOnComplete.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 *     ndisSetPowerResumeComplete @ 0x1C0068DA0 (ndisSetPowerResumeComplete.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001455C (ndisScheduleWorkItemInternal.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4628) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1709081;
  if ( v5 && ndisReferenceMiniport(a1, 0x11u) )
  {
    *(_BYTE *)(a1 + 4628) = 1;
    *(_DWORD *)(a1 + 4624) = a2;
    ndisScheduleWorkItemInternal(a1 + 4544);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
