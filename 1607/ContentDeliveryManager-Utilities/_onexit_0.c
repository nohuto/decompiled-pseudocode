/*
 * XREFs of _onexit_0 @ 0x180058C84
 * Callers:
 *     atexit @ 0x180058D18 (atexit.c)
 * Callees:
 *     _lock_0 @ 0x180058F2A (_lock_0.c)
 *     _unlock_0 @ 0x180058F36 (_unlock_0.c)
 *     __dllonexit_0 @ 0x1800591F2 (__dllonexit_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_onexit_t __cdecl onexit_0(_onexit_t Func)
{
  int (__cdecl *v3)(); // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = _onexitbegin;
  if ( _onexitbegin == (void *)-1LL )
    return (_onexit_t)((__int64 (*)(void))_onexit)();
  lock_0(8LL);
  v4 = _onexitbegin;
  v5 = _onexitend;
  v3 = (int (__cdecl *)())_dllonexit_0(Func, &v4, &v5);
  _onexitbegin = v4;
  _onexitend = v5;
  unlock_0(8LL);
  return v3;
}
