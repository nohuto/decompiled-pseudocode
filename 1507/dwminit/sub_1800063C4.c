/*
 * XREFs of sub_1800063C4 @ 0x1800063C4
 * Callers:
 *     sub_180006468 @ 0x180006468 (sub_180006468.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     _lock @ 0x180006658 (_lock.c)
 *     _unlock @ 0x180006664 (_unlock.c)
 *     __dllonexit @ 0x180006670 (__dllonexit.c)
 */

_onexit_t __fastcall sub_1800063C4(_onexit_t Func)
{
  __int64 v3; // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = Block;
  if ( Block == (void *)-1LL )
    return onexit(Func);
  lock(8LL);
  v4 = Block;
  v5 = qword_18000EFD8;
  v3 = _dllonexit(Func, &v4, &v5);
  Block = v4;
  qword_18000EFD8 = v5;
  unlock(8LL);
  return (_onexit_t)v3;
}
