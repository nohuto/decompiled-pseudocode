/*
 * XREFs of ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C003A440
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurface::MarkInvalid(CCompositionSurface *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionSurface *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
    *((_BYTE *)this + 32) = 0;
    CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 8));
  }
}
