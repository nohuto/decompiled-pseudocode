/*
 * XREFs of RaUnitClaimDeviceSrb @ 0x1C00181A0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitClaimDeviceSrb(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // r8
  char v5; // al
  _SECURITY_QUALITY_OF_SERVICE *v6; // rax
  unsigned int v7; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v5 = *(_BYTE *)(a1 + 152);
  if ( (v5 & 1) != 0 )
  {
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    {
      *(_QWORD *)&SecurityContext[2].DesiredAccess = 0LL;
      SecurityContext[1].FullCreateOptions = -2147483631;
    }
    else
    {
      SecurityContext[1].SecurityQos = 0LL;
      SecurityContext[2].DesiredAccess = -2147483631;
    }
    BYTE3(SecurityContext->SecurityQos) = 48;
    v7 = -2147483631;
  }
  else
  {
    *(_BYTE *)(a1 + 152) = v5 | 1;
    v6 = *(_SECURITY_QUALITY_OF_SERVICE **)(a1 + 8);
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
      *(_QWORD *)&SecurityContext[2].DesiredAccess = v6;
    else
      SecurityContext[1].SecurityQos = v6;
    BYTE3(SecurityContext->SecurityQos) = 1;
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return RaidCompleteRequestEx(a2, 0, v7);
}
