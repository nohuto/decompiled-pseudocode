/*
 * XREFs of ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18006E8C4
 * Callers:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x18006E0D8 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18006ECD0 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x18006FC54 (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007010C (-zInternalStart@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x180070184 (-zInternalStop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180070060 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

PSRWLOCK *__fastcall wil::ActivityBase<1,35184372088832,5>::LockExclusive(__int64 a1, PSRWLOCK *a2)
{
  __int64 v3; // rcx
  char v4; // bl
  PSRWLOCK *p_SRWLock; // rcx
  PSRWLOCK v6; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v9; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v3 = *(_QWORD *)(a1 + 312);
    v4 = 1;
    if ( v3 )
      v3 += 8LL;
    wil::srwlock::lock_exclusive(v3 + 248, &v9);
    p_SRWLock = &v9;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  v6 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v6;
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
