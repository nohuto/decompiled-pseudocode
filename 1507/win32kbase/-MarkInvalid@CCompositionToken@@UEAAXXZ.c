/*
 * XREFs of ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C004CB60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C004C9FC (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCompositionToken::MarkInvalid(CCompositionToken *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *))this)(this) )
  {
    CCompositionToken::ReleaseAllUpdates(this);
    CPushLock::AcquireLockExclusive((CCompositionToken *)((char *)this + 40));
    *((_BYTE *)this + 64) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    CPushLock::ReleaseLock((CCompositionToken *)((char *)this + 40));
  }
}
