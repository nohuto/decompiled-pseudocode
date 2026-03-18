/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C003A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00E126C (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
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
