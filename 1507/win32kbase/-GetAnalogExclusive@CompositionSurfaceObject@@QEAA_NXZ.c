/*
 * XREFs of ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C00A3DC8
 * Callers:
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E03D4 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

char __fastcall CompositionSurfaceObject::GetAnalogExclusive(CompositionSurfaceObject *this)
{
  CPushLock *v1; // rsi
  char v3; // di
  char v4; // bl

  v1 = (CompositionSurfaceObject *)((char *)this + 32);
  v3 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    v4 = *((_BYTE *)this + 112);
    CPushLock::ReleaseLock(v1);
    return v4 != 0;
  }
  return v3;
}
