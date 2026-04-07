/*
 * XREFs of ?zInternalStop@?$ActivityBase@$00$0A@$04@wil@@QEAAXXZ @ 0x18000FE80
 * Callers:
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FE0C (-LockExclusive@-$ActivityBase@$00$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 */

void __fastcall wil::ActivityBase<1,0,5>::zInternalStop(__int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<1,0,5>::LockExclusive(a1, &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
