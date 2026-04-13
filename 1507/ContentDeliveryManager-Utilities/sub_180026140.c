/*
 * XREFs of sub_180026140 @ 0x180026140
 * Callers:
 *     atexit @ 0x1800261E4 (atexit.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     _lock @ 0x180026558 (_lock.c)
 *     _unlock @ 0x180026564 (_unlock.c)
 *     __dllonexit @ 0x1800268A2 (__dllonexit.c)
 */

_onexit_t __fastcall sub_180026140(_onexit_t Func)
{
  __int64 v3; // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = Block;
  if ( Block == (void *)-1LL )
    return onexit(Func);
  lock(8LL);
  v4 = Block;
  v5 = qword_18003AE68;
  v3 = _dllonexit(Func, &v4, &v5);
  Block = v4;
  qword_18003AE68 = v5;
  unlock(8LL);
  return (_onexit_t)v3;
}
