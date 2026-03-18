/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0048DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00DF3D4 (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurface::OkToClose(
        CCompositionSurface *this,
        struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a2)
{
  if ( *(_QWORD *)a2 == *((_QWORD *)this + 5)
    && _InterlockedExchangeAdd((volatile signed __int32 *)this + 9, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(*(_QWORD *)a2) )
    {
      CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
      CCompositionSurface::NotifyBuffersOfDwmTermination(this);
      CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 8));
    }
  }
  return 0LL;
}
