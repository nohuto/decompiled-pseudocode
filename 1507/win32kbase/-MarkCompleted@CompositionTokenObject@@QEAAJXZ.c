/*
 * XREFs of ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C0021DE4
 * Callers:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0046F24 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionTokenObject::MarkCompleted(CompositionTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((CompositionTokenObject *)((char *)this + 64));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32);
    else
      v2 = -1073741823;
    CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 64));
  }
  return (unsigned int)v2;
}
