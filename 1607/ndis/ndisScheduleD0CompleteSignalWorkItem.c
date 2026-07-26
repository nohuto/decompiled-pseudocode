/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C001165C
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 *     ndisSetPowerResumeComplete @ 0x1C006C890 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4628) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1709070;
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
