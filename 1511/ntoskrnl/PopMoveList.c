/*
 * XREFs of PopMoveList @ 0x1403A540C
 * Callers:
 *     PopSetupSleepNotifies @ 0x1403A5334 (PopSetupSleepNotifies.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PopMoveList(__int64 a1, __int64 **a2)
{
  __int64 *result; // rax
  __int64 v3; // r8
  __int64 **v4; // r8

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == (__int64 *)a2 )
      break;
    v3 = *result;
    if ( (__int64 **)result[1] != a2 || *(__int64 **)(v3 + 8) != result )
      __fastfail(3u);
    *a2 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = a2;
    v4 = *(__int64 ***)(a1 + 8);
    *result = a1;
    result[1] = (__int64)v4;
    if ( *v4 != (__int64 *)a1 )
      __fastfail(3u);
    *v4 = result;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
