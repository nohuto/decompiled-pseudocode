/*
 * XREFs of ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180023F18
 * Callers:
 *     ?StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020530 (-StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180020918 (-StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020A80 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180020E48 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020FB0 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021378 (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x180023908 (-Stop@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$0A@$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180023A30 (-NotifyFailure@-$ActivityBase@$0A@$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023D60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

PSRWLOCK *__fastcall wil::ActivityBase<0,0,5>::LockExclusive(__int64 a1, PSRWLOCK *a2)
{
  RTL_SRWLOCK *v3; // rbx
  char v4; // di
  RTL_SRWLOCK *v5; // rbx
  PSRWLOCK *p_SRWLock; // rcx
  PSRWLOCK v7; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v10; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v3 = *(RTL_SRWLOCK **)(a1 + 312);
    v4 = 1;
    if ( v3 )
      ++v3;
    v5 = v3 + 31;
    AcquireSRWLockExclusive(v5);
    p_SRWLock = &v10;
    v10 = v5;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  v7 = *p_SRWLock;
  *p_SRWLock = 0LL;
  *a2 = v7;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v10 )
    ReleaseSRWLockExclusive(v10);
  return a2;
}
