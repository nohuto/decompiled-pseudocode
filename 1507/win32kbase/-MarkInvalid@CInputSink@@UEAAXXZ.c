/*
 * XREFs of ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C0022140
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C0021EF8 (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CInputSink::MarkInvalid(CInputSink *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *))this)(this) )
  {
    CInputSink::InvalidateAndReleaseQueues(this);
    CPushLock::AcquireLockExclusive((CInputSink *)((char *)this + 8));
    *((_BYTE *)this + 32) = 0;
    CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  }
}
