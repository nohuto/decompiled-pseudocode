/*
 * XREFs of ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000E1E0
 * Callers:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0019E20 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
