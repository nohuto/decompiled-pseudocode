/*
 * XREFs of _onexit_0 @ 0x180006814
 * Callers:
 *     atexit @ 0x1800068B8 (atexit.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 *     _lock_0 @ 0x180006AA8 (_lock_0.c)
 *     _unlock_0 @ 0x180006AB4 (_unlock_0.c)
 *     __dllonexit_0 @ 0x180006AC0 (__dllonexit_0.c)
 */

_onexit_t __cdecl onexit_0(_onexit_t Func)
{
  int (__cdecl *v3)(); // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = _onexitbegin;
  if ( _onexitbegin == (void *)-1LL )
    return _onexit(Func);
  lock_0(8LL);
  v4 = _onexitbegin;
  v5 = _onexitend;
  v3 = (int (__cdecl *)())_dllonexit_0(Func, &v4, &v5);
  _onexitbegin = v4;
  _onexitend = v5;
  unlock_0(8LL);
  return v3;
}
