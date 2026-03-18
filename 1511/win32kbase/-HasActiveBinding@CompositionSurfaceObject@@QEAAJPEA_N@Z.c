/*
 * XREFs of ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C00A8928
 * Callers:
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A8F2C (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::HasActiveBinding(CompositionSurfaceObject *this, bool *a2)
{
  int v4; // ebx

  *a2 = 0;
  v4 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( v4 >= 0 )
  {
    if ( CCompositionSurface::GetActiveBuffer((CompositionSurfaceObject *)((char *)this + 24)) )
      *a2 = 1;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v4;
}
