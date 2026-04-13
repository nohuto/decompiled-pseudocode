/*
 * XREFs of sub_1800196E0 @ 0x1800196E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 */

_QWORD *__fastcall sub_1800196E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  volatile signed __int64 *v5; // rcx

  v4 = a2;
  v5 = (volatile signed __int64 *)a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    sub_180007270(v5, a2, a3);
  }
  *a1 = &off_18002D388;
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}
