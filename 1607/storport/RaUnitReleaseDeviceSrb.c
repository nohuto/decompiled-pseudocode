/*
 * XREFs of RaUnitReleaseDeviceSrb @ 0x1C00356D8
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitReleaseDeviceSrb(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  *(_BYTE *)(a1 + 152) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  BYTE3(SecurityContext->SecurityQos) = 1;
  return RaidCompleteRequestEx(a2, 0, 0);
}
