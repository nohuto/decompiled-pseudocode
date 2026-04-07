/*
 * XREFs of ?zInternalStart@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007833C
 * Callers:
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078DA4 (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076A84 (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::zInternalStart(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)v3 > 5u
    && (*(_QWORD *)(v3 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200000000000LL) == *(_QWORD *)(v3 + 24) )
  {
    EtwEventActivityIdControl(3LL, v2 + 8);
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
