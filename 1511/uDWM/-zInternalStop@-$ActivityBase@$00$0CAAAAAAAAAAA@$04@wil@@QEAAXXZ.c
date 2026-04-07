/*
 * XREFs of ?zInternalStop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x1800783B4
 * Callers:
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180077F90 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180078E80 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076A84 (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::zInternalStop(__int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
