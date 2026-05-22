/*
 * XREFs of ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x18004EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18004E434 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCInputProviderBase::TryDemote(MPCInputProviderBase *this)
{
  char v2; // bl

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16);
  if ( v2 )
    RayStabilizer::Reset((MPCInputProviderBase *)((char *)this + 40));
  return v2;
}
