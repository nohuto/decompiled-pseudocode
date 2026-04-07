/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180079518
 * Callers:
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078FFC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180079ECC (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18007825C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *((_QWORD *)WindowFrameLogging::Instance() + 1);
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
