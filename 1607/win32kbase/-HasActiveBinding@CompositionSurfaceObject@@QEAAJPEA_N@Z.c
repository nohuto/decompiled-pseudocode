/*
 * XREFs of ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C001C234
 * Callers:
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C001BCC8 (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C001B75C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
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
