/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012E30 (ndisSetDevicePowerOnComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0067E70 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4628) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1709081;
  if ( v5 && ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 4628) = 1;
    *(_DWORD *)(a1 + 4624) = a2;
    ndisScheduleWorkItemInternal(a1 + 4544);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
