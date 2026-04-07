/*
 * XREFs of ?LockExclusive@?$ActivityBase@$00$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007030
 * Callers:
 *     ?zInternalStop@?$ActivityBase@$00$0A@$04@wil@@QEAAXXZ @ 0x1800070A4 (-zInternalStop@-$ActivityBase@$00$0A@$04@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x1800070E4 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007380 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800073F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180075D20 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180070060 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

PSRWLOCK *__fastcall wil::ActivityBase<1,0,5>::LockExclusive(__int64 a1, PSRWLOCK *a2)
{
  PSRWLOCK *p_SRWLock; // rcx
  char v4; // bl
  PSRWLOCK v5; // rax
  __int64 v7; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v9; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v7 = *(_QWORD *)(a1 + 312);
    v4 = 1;
    if ( v7 )
      v7 += 8LL;
    wil::srwlock::lock_exclusive(v7 + 248, &v9);
    p_SRWLock = &v9;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  v5 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v5;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v9 )
    ReleaseSRWLockExclusive(v9);
  return a2;
}
